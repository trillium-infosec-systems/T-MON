# **Challenge 3: Log Interpretation**

---

### **description:**

🔍 As a Level 1 SOC Analyst, you are reviewing logs and come across the following log entry:

---
```plaintext
[2023-04-14 18:15:00] Database: src=192.168.1.200 dst=192.168.1.250 proto=TCP sport=55000 dport=1433 username="dbo" query="SELECT * FROM users WHERE username='admin' AND password='OR 1=1'"
```
🤔 Question:

What is the best course of action based on this log entry?

🔘 ```a) Ignore the log entry, as it is a normal database query```

🔘 ```b) Investigate further, as it might be an SQL injection attempt```

🔘 ```c) Report the incident to higher-level analysts for further investigation```

🔘 ```d) Block the source IP address, as it indicates a potential SQL injection attack```

💡 Hint: Examine the content of the query and consider common SQL injection techniques.

🚀 Ready to answer? Go on and make your choice!