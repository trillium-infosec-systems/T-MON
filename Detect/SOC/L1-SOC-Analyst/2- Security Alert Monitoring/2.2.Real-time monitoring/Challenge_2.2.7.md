# **Challenge 2.2.7: Real-time Monitoring**

---

### **description:**

🔍 As a Level 1 SOC Analyst, you're monitoring real-time network traffic and notice a sudden spike in DNS requests.

---
```plaintext
No.     Time        Source                Destination           Protocol Length Info
  1 0.000000    192.168.1.102         8.8.8.8               DNS      76     Standard query 0x1234 A example.com
  2 0.000250    8.8.8.8               192.168.1.102         DNS      92     Standard query response 0x1234 A 93.184.216.34
  3 0.000300    192.168.1.102         8.8.8.8               DNS      76     Standard query 0x1235 A example.org
  4 0.000550    8.8.8.8               192.168.1.102         DNS      92     Standard query response 0x1235 A 198.51.100.3
```
🤔 Question:

What might be the reason for this sudden spike in DNS requests?

🔘 ```a) A user is visiting multiple websites```

🔘 ```b) A malware infection attempting to connect to its Command and Control (C2) server```

🔘 ```c) A misconfiguration in the DNS resolver```

🔘 ```d) A Distributed Denial of Service (DDoS) attack```

💡 Hint: Consider the nature of DNS requests and what could lead to a sudden increase in such requests.

🚀 Ready to answer? Go on and make your choice!