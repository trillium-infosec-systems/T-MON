# **Challenge 2.2.2: Real-time Monitoring**

---

### **description:**

🔍 As a Level 1 SOC Analyst, you are monitoring the network traffic in real-time. You come across the following packet capture snippet:

---
```plaintext
No.     Time        Source                Destination           Protocol Length Info
  1 0.000000    192.168.1.101         192.168.1.1           ICMP     98     Echo (ping) request  id=0x03d9, seq=1/256, ttl=64
  2 0.001058    192.168.1.1           192.168.1.101         ICMP     98     Echo (ping) reply    id=0x03d9, seq=1/256, ttl=64
```
🤔 Question:

What type of activity might this traffic indicate?

🔘 ```a) A user downloading multiple files simultaneously```

🔘 ```b) A malware infection attempting to connect to its Command and Control (C2) server```

🔘 ```c) A misconfiguration in the DNS resolver```

🔘 ```d) A Distributed Denial of Service (DDoS) attack```

💡 Hint: Consider the common use of ICMP and the nature of the captured traffic to identify the type of activity.

🚀 Ready to answer? Go on and make your choice!