import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/bilhr2025/BILHR_SS25_DC/Tut2/template/ainex_bilhr_ws/install/ainex_vision'
