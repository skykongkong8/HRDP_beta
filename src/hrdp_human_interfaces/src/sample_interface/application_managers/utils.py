import socket
import sys
import os
import gc
import select
if os.name == 'nt':
    import msvcrt
else:
    import tty
    import termios

def getKey():
    if os.name == 'nt':
        """for windows"""
        if sys.version_info[0] >= 3:
            return msvcrt.getch().decode()
        else:
            return msvcrt.getch()
    else:
        """For linux or mac"""
        tty.setraw(sys.stdin.filno())
        rlist, _, _ = select.select([sys.stdin], [], [], 0.1)
        if rlist:
            key = sys.stdin.read(1)
        else:
            key = ''
        return key

def check_internet_connection()->bool:
    address = socket.gethostbyname(socket.gethostname())
    if address == "127.0.0.1":
        print("Internet Unavailable")
        return False
    else:
        print("Internet available to: " + address)
        return True