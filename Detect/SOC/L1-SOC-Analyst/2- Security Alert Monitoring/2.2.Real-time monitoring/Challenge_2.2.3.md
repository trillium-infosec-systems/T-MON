# **Challenge 2.2.3: Real-time Monitoring**

---

### **description:**

🔍 As a Level 1 SOC Analyst, you're monitoring the network traffic and find the following log entries:

---
```plaintext
[2023-04-14 14:30:00] Firewall: src=192.168.1.102 dst=8.8.8.8 proto=UDP sport=58000 dport=53
[2023-04-14 14:30:01] Firewall: src=192.168.1.102 dst=208.67.222.222 proto=UDP sport=58001 dport=53
[2023-04-14 14:30:02] Firewall: src=192.168.1.102 dst=208.67.220.220 proto=UDP sport=58002 dport=53
[2023-04-14 14:30:03] Firewall: src=192.168.1.102 dst=8.26.56.26 proto=UDP sport=58003 dport=53
```
🤔 Question:

What might be happening on the network?

🔘 ```a) An internal host is infected with malware and trying to connect to Command and Control (C2) servers```

🔘 ```b) A user is downloading a large file```

🔘 ```c) A user is conducting a DNS query```

🔘 ```d) A DNS amplification attack is taking place```

💡 Hint: Pay attention to the destination port and protocol used in the log entries to identify the type of activity.

🚀 Ready to answer? Go on and make your choice!