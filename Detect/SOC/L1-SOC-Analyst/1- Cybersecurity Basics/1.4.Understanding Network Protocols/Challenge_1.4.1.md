# **Challenge 1.4.1: Understanding Network Protocols**

---

### **description:**

🔍 As a Level 1 SOC Analyst, you are monitoring network traffic to identify any potential security issues. You come across the following packet capture:

---
```plaintext
Frame 1: 74 bytes on wire (592 bits), 74 bytes captured (592 bits)
Ethernet II, Src: 00:1b:44:11:3a:b7, Dst: 00:0c:29:1c:75:3b
Internet Protocol Version 4, Src: 192.168.0.10, Dst: 192.168.0.20
Transmission Control Protocol, Src Port: 50636, Dst Port: 80, Seq: 1, Ack: 1, Len: 20
Source Port: 50636
Destination Port: 80
[Stream index: 0]
Sequence number: 1 (relative sequence number)
Acknowledgment number: 1 (relative ack number)
Header Length: 20 bytes
Flags: 0x018 (PSH, ACK)
Window size value: 64308
Checksum: 0x4e4c [unverified]
[Checksum Status: Unverified]
Urgent pointer: 0
[SEQ/ACK analysis]
```
🤔 Question:

Based on this packet capture, which protocol is being used for communication between the source and destination hosts?

🔘 ```HTTP```

🔘 ```HTTPS```

🔘 ```SSH```

🔘 ```Telnet```

💡 Hint: Examine the destination port number to identify the protocol used for communication.

🚀 Ready to answer? Go on and make your choice!