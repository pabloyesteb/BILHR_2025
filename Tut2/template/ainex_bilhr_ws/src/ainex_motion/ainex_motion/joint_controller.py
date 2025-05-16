#!/usr/bin/env python3
"""
TUM - ICS AiNex Robot ROS2 Joint Controller SDK
----------------------------------------
This module provides a set of functions to control the joints of the AiNex robot.

Functions:
- setPosture(posture_name: str, duration=1)
    - Set the posture of the robot.
    - Input:
        - posture_name (str): Name of the posture ('stand', 'standzero', 'crouch')
        - duration (float, optional): Duration for the movement in seconds

- setJointPositions(joint_name: list, positions: list, duration=0.5, unit='rad')
    - Set the positions of specified joints.
    - Input:
        - joint_name (list[str|int]): List of joint names or IDs
        - positions (list[float]): List of joint positions
        - duration (float, optional): Duration for the movement in seconds
        - unit (str, optional): 'rad' or 'deg'

- changeJointPositions(joint_name: list, changes: list, duration=0.5, unit='rad')
    - Change (increment) the positions of specified joints.
    - Input:
        - joint_name (list[str|int]): List of joint names or IDs
        - changes (list[float]): List of position changes
        - duration (float, optional): Duration for the movement in seconds
        - unit (str, optional): 'rad' or 'deg'

- setJointLock(joint_name: list, lock: bool)
    - Lock or unlock specified joints.
    - Input:
        - joint_name (list[str|int]): List of joint names or IDs or "ALL"
        - lock (bool): True to lock, False to unlock

- getJointPositions(joint_name: list, unit='rad')
    - Get the current positions of specified joints.
    - Input:
        - joint_name (list[str|int]): List of joint names or IDs
        - unit (str, optional): 'rad' or 'deg'

- getJointRange(joint_name: list, unit='rad')
    - Get the range of motion for specified joints.
    - Input:
        - joint_name (list[str|int]): List of joint names or IDs
        - unit (str, optional): 'rad' or 'deg'

- getJointLock(joint_name: list)
    - Get the lock status of specified joints.
    - Input:
        - joint_name (list[str|int]): List of joint names or IDs

- getJointDeviation(joint_name: list)
    - Get the deviation of specified joints.
    - Input:
        - joint_name (list[str|int]): List of joint names or IDs

- getJointTemperature(joint_name: list)
    - Get the temperature of specified joints.
    - Input:
        - joint_name (list[str|int]): List of joint names or IDs

- getJointVoltage(joint_name: list)
    - Get the voltage of specified joints.
    - Input:
        - joint_name (list[str|int]): List of joint names or IDs

- getJointID(joint_name_or_id: list)
    - Get the ID of specified joints.
    - Input:
        - joint_name_or_id (list[str|int] or str): List of joint names, IDs, or "ALL"

Usages:
1. import the class and create an instance:
    from joint_controller import JointController
    joint_controller = JointController()
2. Call the desired function:
    joint_controller.setPosture('stand', 0.8)
3. Clean up:
    joint_controller.destroy_node()
    rclpy.shutdown()
----------------------------------------
Date: 2025-04-29 
Version: 0.1
"""
import rclpy
from rclpy.node import Node
import math
import time

from servo_service.msg import *
from servo_service.srv import *

class JointController:

    def __init__(self, node : Node):
        self.node = node
        self.cb_group = rclpy.callback_groups.ReentrantCallbackGroup()

        # Publishers for sending joint commands
        # Message format for SetServoPositions: uint8[] ids, float32[] positions, float32 duration
        self.publisher_set = node.create_publisher(SetServoPositions, 'Set_Joint', 10)
        # Message format for ChangeServoPositions: uint8[] ids, float32[] positions, float32 duration
        self.publisher_change = node.create_publisher(ChangeServoPositions, 'Change_Joint', 10)
        # Message format for SetJointLock: uint8[] ids, uint8[] lock
        self.publisher_lock = node.create_publisher(SetJointLock, 'Lock_Joint', 10)
        # Message format for SetPosture: string posture_name float32 duration
        self.publisher_posture = node.create_publisher(SetPosture, 'Set_Posture', 10)

        # Clients for various joint services
        # GetServoPositions service: expected response has uint8[] ids, float32[] positions
        self.cli0 = node.create_client(JointPosition, 'Get_Joint', callback_group=self.cb_group)
        while not self.cli0.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('Service not available, waiting again...')
        self.req0 = JointPosition.Request()
        

        # JointRange service: expected response has float32[] angle_min, float32[] angle_max, uint8[] ids
        self.cli1 = node.create_client(JointRange, 'Joint_Range', callback_group=self.cb_group)
        self.req1 = JointRange.Request()

        # JointLock service: expected response has uint8[] lock, uint8[] ids
        self.cli2 = node.create_client(JointLock, 'Joint_Lock', callback_group=self.cb_group)
        self.req2 = JointLock.Request()

        # ServoDeviation service: expected response has int16[] deviation, uint8[] ids
        self.cli3 = node.create_client(ServoDeviation, 'Servo_Deviation', callback_group=self.cb_group)
        self.req3 = ServoDeviation.Request()

        # ServoTemp service: expected response has int8[] temperature, uint8[] ids
        self.cli4 = node.create_client(ServoTemp, 'Servo_Temperature', callback_group=self.cb_group)
        self.req4 = ServoTemp.Request()

        # ServoVoltage service: expected response has int32[] vin
        self.cli5 = node.create_client(ServoVoltage, 'Servo_Voltage', callback_group=self.cb_group)
        self.req5 = ServoVoltage.Request()

        # Mapping from joint names to joint IDs (uint8 values)
        self.joint_id = {
            'r_hip_yaw': 12,
            'r_hip_roll': 10,
            'r_hip_pitch': 8,
            'r_knee': 6,
            'r_ank_pitch': 4,
            'r_ank_roll': 2,
            'l_hip_yaw': 11,
            'l_hip_roll': 9,
            'l_hip_pitch': 7,
            'l_knee': 5,
            'l_ank_pitch': 3,
            'l_ank_roll': 1,
            'r_sho_pitch': 14,
            'l_sho_pitch': 13,
            'l_sho_roll': 15,
            'r_sho_roll': 16,
            'l_el_pitch': 17,
            'r_el_pitch': 18,
            'l_el_yaw': 19,
            'r_el_yaw': 20,
            'l_gripper': 21,
            'r_gripper': 22,
            'head_pan': 23,
            'head_tilt': 24
        }

    def getJointID(self, joint_name_or_id: list):
        """
        Convert joint names or IDs to joint IDs (as integers).
        :param joint_name_or_id: list of joint names (str) or joint IDs (int)
        :return: list of joint IDs (int) or None if any identifier is invalid
        """
        if isinstance(joint_name_or_id, str) and joint_name_or_id.upper() == "ALL":
            return list(self.joint_id.values())
        if isinstance(joint_name_or_id, list) and len(joint_name_or_id) == 1 and isinstance(joint_name_or_id[0], str) and joint_name_or_id[0].upper() == "ALL":
            return list(self.joint_id.values())
        joint_ids = []
        for item in joint_name_or_id:
            if isinstance(item, str):
                if item not in self.joint_id:
                    self.node.get_logger().error(f"Unknown joint name: {item}")
                    return None
                joint_ids.append(self.joint_id[item])
            elif isinstance(item, int):
                if item not in self.joint_id.values():
                    self.node.get_logger().error(f"Unknown joint ID: {item}")
                    return None
                joint_ids.append(item)
            else:
                self.node.get_logger().error(f"Invalid joint identifier: {item}")
                return None
        return joint_ids
    
    def setPosture(self, posture_name: str, duration=1):
        """
        Publish a message to set the posture of the robot.
        Message format for SetPosture:
            string posture_name
            float32 duration
        :param posture_name: name of the posture (str)
        :param duration: duration for the movement (float, in seconds)
        """
        msg = SetPosture()
        # Check if the posture name is valid
        valid_postures = ['stand', 'standzero', 'crouch']
        if posture_name not in valid_postures:
            self.node.get_logger().error(f"Invalid posture name: {posture_name}. Valid options are: {valid_postures}")
            return

        msg.posture_name = posture_name
        msg.duration = float(duration)

        self.publisher_posture.publish(msg)
        self.node.get_logger().debug(f"Published SetPosture: {msg}")
    
    def setJointPositions(self, joint_name: list, positions: list, duration=0.5, unit='rad'):
        """
        Publish a message to set joint positions.
        Message format for SetServoPositions:
            uint8[] ids
            float32[] positions
            float32 duration
        :param joint_name: list of joint names (str) or IDs (int)
        :param positions: list of joint positions (float)
        :param duration: duration for the movement (float, in seconds)
        :param unit: unit of the provided positions ('rad' or 'deg')
        """
        if unit == 'deg':
            # Convert degrees to radians
            positions = list(map(math.radians, positions))
        # Ensure that all positions are of type float
        positions = [float(p) for p in positions]

        msg = SetServoPositions()
        joint_ids = self.getJointID(joint_name)
        if joint_ids is None:
            return
        msg.ids = [int(j_id) for j_id in joint_ids]     # Expected uint8 values
        msg.positions = positions                       # Expected float32 values
        msg.duration = float(duration)                  # Expected float32

        self.publisher_set.publish(msg)
        self.node.get_logger().debug(f"Published SetServoPositions: {msg}")

    def changeJointPositions(self, joint_name: list, changes: list, duration=0.5, unit='rad'):
        """
        Publish a message to change (increment) joint positions.
        Message format for ChangeServoPositions:
            uint8[] ids
            float32[] positions
            float32 duration
        :param joint_name: list of joint names (str) or IDs (int)
        :param changes: list of joint position changes (float)
        :param duration: duration for the movement (float, in seconds)
        :param unit: unit of the provided changes ('rad' or 'deg')
        """
        if unit == 'deg':
            # Convert degrees to radians
            changes = list(map(math.radians, changes))
            self.node.get_logger().info(f"Joint changes in radians: {changes}")  
        changes = [float(c) for c in changes]

        msg = ChangeServoPositions()
        joint_ids = self.getJointID(joint_name)
        if joint_ids is None:
            return
        msg.ids = [int(j_id) for j_id in joint_ids]
        msg.positions = changes
        msg.duration = float(duration)

        self.publisher_change.publish(msg)
        self.node.get_logger().debug(f"Published ChangeServoPositions: {msg}")

    def setJointLock(self, joint_name: list, lock: bool):
        """
        Publish a message to set the joint lock status.
        Message format for SetJointLock:
            uint8[] ids
            uint8[] lock   (each element: 1 for locked, 0 for unlocked)
        :param joint_name: list of joint names (str) or IDs (int)
        :param lock: desired lock status (bool)
        """
        msg = SetJointLock()
        
        joint_ids = self.getJointID(joint_name)
        if joint_ids is None:
            return
        msg.ids = [int(j_id) for j_id in joint_ids]
        # Set lock status for each joint in the list
        msg.status = [1 if lock else 0 for _ in joint_ids]

        self.publisher_lock.publish(msg)
        self.node.get_logger().debug(f"Published SetJointLock: {msg}")

    def getJointPositions(self, joint_name: list, unit='rad'):      
        """
        Request current joint positions with a service call.
        Request:
            uint8[] ids
        Response:
            float32[] positions
        """
        joint_ids = self.getJointID(joint_name)
        if joint_ids is None:
            return None
        self.req0.ids = [int(j_id) for j_id in joint_ids]
        future = self.cli0.call_async(self.req0)
        rclpy.spin_until_future_complete(self.node, future)
        response = future.result()
        if response is None:
            self.node.get_logger().error(f"Service call to GetServoPositions failed for joints: {joint_name}")
            return None
        positions = list(response.position)
        if unit == 'deg':
            positions = list(map(math.degrees, positions))
        return positions


    def getJointRange(self, joint_name: list, unit='rad'):
        """
        Call the JointRange service to get joint angle limits.
        Expected service response format for JointRange:
            float32[] angle_min
            float32[] angle_max
            uint8[] ids
        :param joint_name: list of joint names (str) or IDs (int)
        :param unit: desired unit for angle limits ('rad' or 'deg')
        :return: tuple (angle_min, angle_max) as lists of floats or None on error
        """
        joint_ids = self.getJointID(joint_name)
        if joint_ids is None:
            return None
        self.req1.ids = [int(j_id) for j_id in joint_ids]
        future = self.cli1.call_async(self.req1)
        rclpy.spin_until_future_complete(self.node, future)
        response = future.result()
        if response is None:
            self.node.get_logger().error(f"Service call to JointRange failed for joints: {joint_name}")
            return None

        angle_min = list(response.angle_min)
        angle_max = list(response.angle_max)
        if unit == 'deg':
            angle_min = list(map(math.degrees, angle_min))
            angle_max = list(map(math.degrees, angle_max))
        return angle_min, angle_max

    def getJointLock(self, joint_name: list):
        """
        Call the JointLock service to get the lock status of joints.
        Expected service response format for JointLock:
            uint8[] lock
            uint8[] ids
        :param joint_name: list of joint names (str) or IDs (int)
        :return: list of lock statuses (uint8) or None on error
        """
        joint_ids = self.getJointID(joint_name)
        if joint_ids is None:
            return None
        self.req2.ids = [int(j_id) for j_id in joint_ids]
        future = self.cli2.call_async(self.req2)
        rclpy.spin_until_future_complete(self.node, future)
        response = future.result()
        if response is None:
            self.node.get_logger().error(f"Service call to JointLock failed for joints: {joint_name}")
            return None

        lock_status = list(response.lock)
        return lock_status

    def getJointDeviation(self, joint_name: list):
        """
        Call the ServoDeviation service to get joint deviations.
        Expected service response format for ServoDeviation:
            int16[] deviation
            uint8[] ids
        :param joint_name: list of joint names (str) or IDs (int)
        :return: list of deviations (int16) or None on error
        """
        joint_ids = self.getJointID(joint_name)
        if joint_ids is None:
            return None
        self.req3.ids = [int(j_id) for j_id in joint_ids]
        future = self.cli3.call_async(self.req3)
        rclpy.spin_until_future_complete(self.node, future)
        response = future.result()
        if response is None:
            self.node.get_logger().error(f"Service call to ServoDeviation failed for joints: {joint_name}")
            return None

        deviation = list(response.deviation)
        return deviation

    def getJointTemperature(self, joint_name: list):
        """
        Call the ServoTemp service to get joint temperatures.
        Expected service response format for ServoTemp:
            int8[] temperature
            uint8[] ids
        :param joint_name: list of joint names (str) or IDs (int)
        :return: list of temperatures (int8) or None on error
        """
        joint_ids = self.getJointID(joint_name)
        if joint_ids is None:
            return None
        self.req4.ids = [int(j_id) for j_id in joint_ids]
        future = self.cli4.call_async(self.req4)
        rclpy.spin_until_future_complete(self.node, future)
        response = future.result()
        if response is None:
            self.node.get_logger().error(f"Service call to ServoTemp failed for joints: {joint_name}")
            return None

        temperature = list(response.temperature)
        return temperature

    def getJointVoltage(self, joint_name: list):
        """
        Call the ServoVoltage service to get joint voltages.
        Expected service response format for ServoVoltage:
            int32[] vin
        :param joint_name: list of joint names (str) or IDs (int)
        :return: list of voltages (int32) or None on error
        """
        joint_ids = self.getJointID(joint_name)
        if joint_ids is None:
            return None
        self.req5.ids = [int(j_id) for j_id in joint_ids]
        future = self.cli5.call_async(self.req5)
        rclpy.spin_until_future_complete(self.node, future)
        response = future.result()
        if response is None:
            self.node.get_logger().error(f"Service call to ServoVoltage failed for joints: {joint_name}")
            return None

        voltage = list(response.vin)
        return voltage

def main(args=None):
    rclpy.init(args=args)

    node = rclpy.create_node('joint_controller_demo')
    joint_controller = JointController(node)

    '''Joint Controller - Posture Control demo'''
    # Note: always set enough sleep time to allow the robot to reach the position
    joint_controller.setPosture('stand', 0.8)
    time.sleep(2)
    joint_controller.setPosture('standzero', 0.8)
    time.sleep(2)
    joint_controller.setPosture('crouch', 0.8)
    time.sleep(2)

    '''Joint Controller - Set Joint Position demo'''
    joint_names = ['l_sho_roll', 'l_sho_pitch']
    joint_controller.setJointPositions(joint_names, [0, 0], 1, unit='rad')
    time.sleep(2)
    joint_controller.setPosture('crouch', 0.8)
    time.sleep(2)

    '''Joint Controller - Change Joint Position demo'''
    joint_names = ['head_pan', 'head_tilt']
    joint_controller.changeJointPositions(joint_names, [30, 30], 1, unit='deg')
    time.sleep(2)
    joint_controller.setPosture('crouch', 0.8)
    time.sleep(2)


    ''' Joint Controller - Get Joint Position demo '''
    joint_names = list(joint_controller.joint_id.keys())
    Positions = joint_controller.getJointPositions(joint_names)
    node.get_logger().info(f"Joint Position: {Positions}")

    ''' Joint Controller - Get All Joint Position demo '''
    positions = joint_controller.getJointPositions('all', unit='deg')
    node.get_logger().info(f"Joint Position: {positions}")

    '''Joint Controller - Get Joint Range demo'''
    joint_names = list(joint_controller.joint_id.keys())
    angle_min, angle_max = joint_controller.getJointRange(joint_names)
    node.get_logger().info(f"Joint Range: {angle_min}, {angle_max}")

    ''' Joint Controller - Get Joint Lock demo'''
    joint_names = list(joint_controller.joint_id.keys())
    lock_status = joint_controller.getJointLock(joint_names)
    node.get_logger().info(f"Joint Lock Status: {lock_status}")

    '''Joint Controller - Get Joint Deviation demo'''
    joint_names = list(joint_controller.joint_id.keys())
    deviation = joint_controller.getJointDeviation(joint_names)
    node.get_logger().info(f"Joint Deviation: {deviation}")

    '''Joint Controller - Get Joint Temperature demo'''
    joint_names = list(joint_controller.joint_id.keys())
    temperature = joint_controller.getJointTemperature(joint_names)
    node.get_logger().info(f"Joint Temperature: {temperature}")

    '''Joint Controller - Get Joint Voltage demo'''
    joint_names = list(joint_controller.joint_id.keys())
    voltage = joint_controller.getJointVoltage(joint_names)
    node.get_logger().info(f"Joint Voltage: {voltage}")

    '''Joint Controller - Get Joint ID demo'''
    joint_names = ['r_knee' , 'l_el_pitch']
    joint_ids = joint_controller.getJointID(joint_names)
    node.get_logger().info(f"Joint IDs: {joint_ids}")

    '''Joint Controller - Set Joint Lock demo'''
    joint_controller.setJointLock([1 , 2], True)
    time.sleep(2)
    lock_status = joint_controller.getJointLock(joint_names)
    node.get_logger().info(f"Joint Lock Status: {lock_status}")

    '''Joint Controller - Lock All Joint demo'''
    joint_controller.setJointLock('all', True)
    time.sleep(1)

    '''Joint Controller - Unlock All Joint demo'''
    joint_controller.setJointLock('all', False)
    time.sleep(1)

    # """   Joint Controller - Continuous Position Control demo"""
    # joint_names = ['head_pan', 'head_tilt']
    # # Set initial joint positions to 0 degrees (converted to radians in setJointPositions)
    # joint_controller.setJointPositions(joint_names, [0] * len(joint_names), 1, unit='deg')
    # time.sleep(1.5)

    # t0 = time.time()
    # try:
    #     while True:
    #         # Update joint position command based on a sine wave function
    #         t = time.time() - t0
    #         set_position = 0.5 * math.sin((1/5) * t)
    #         joint_controller.setJointPositions(joint_names, [set_position]* len(joint_names), 0.01, unit='rad')
    #         node.get_logger().info(f"Setting Position: {set_position}")
    #         ### Note: Reading is SLOW. (better avoid reading in a loop)
    #         # position = joint_controller.getJointPositions(joint_names, unit='deg')
    #         # node.get_logger().info(f"Received Position: {position}")  
    # except KeyboardInterrupt:
    #     node.get_logger().info("Keyboard Interrupt: resetting joint positions and unlocking joints.")
    #     joint_controller.setJointPositions(joint_names, [0] * len(joint_names), 1, unit='deg')
    #     time.sleep(1.5)
    #     joint_controller.setJointLock(joint_names, False)
    #     time.sleep(1.5)
    
    node.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()
