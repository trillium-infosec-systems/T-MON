# **Challenge 2.2.1: Real-time Monitoring**

---

### **description:**

🔍 You are a Level 1 SOC Analyst and have been asked to monitor the real-time logs for any suspicious activity. The log data provided is as follows:

---
```plaintext
[2023-04-14 14:12:27] ACCEPT IN=eth0 OUT= MAC=00:50:56:c0:00:08:00:0c:29:36:14:41:08:00 SRC=10.1.1.2 DST=10.1.1.3 LEN=60 TOS=0x00 PREC=0x00 TTL=64 ID=27995 DF PROTO=TCP SPT=38760 DPT=22 WINDOW=29200 RES=0x00 SYN URGP=0
[2023-04-14 14:12:27] ACCEPT IN=eth0 OUT= MAC=00:50:56:c0:00:08:00:0c:29:36:14:41:08:00 SRC=10.1.1.4 DST=10.1.1.5 LEN=52 TOS=0x00 PREC=0x00 TTL=64 ID=28563 DF PROTO=TCP SPT=37112 DPT=443 WINDOW=26880 RES=0x00 SYN URGP=0
```
🤔 Question:

Which of the following activities should be considered suspicious?

🔘 ```a) Connection from SRC 10.1.1.2 to DST 10.1.1.3 on port 22```

🔘 ```b) Connection from SRC 10.1.1.4 to DST 10.1.1.5 on port 443```

🔘 ```c) Both connections```

🔘 ```d) None of the connections```

💡 Hint: Analyze the purpose and common use cases of the specified ports to identify which connection is more likely to be considered suspicious.

🚀 Ready to answer? Go on and make your choice!