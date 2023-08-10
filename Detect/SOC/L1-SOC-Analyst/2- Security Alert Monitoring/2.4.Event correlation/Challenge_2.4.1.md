# **Challenge 2.4.1: Event Correlation**

---

### **description:**

🔍 Scenario: You are an SOC analyst monitoring security events in your organization's SIEM platform. You notice multiple alerts from different sources that appear to be related. Consider the following log data:

---
```plaintext
Log 1:
[2023-04-20 12:34:55] Firewall - BLOCK - Source IP: 192.168.1.5, Destination IP: 203.0.113.25, Port: 22, Protocol: TCP

Log 2:
[2023-04-20 12:35:02] IDS - ALERT - Possible Brute Force Attack - Source IP: 192.168.1.5, Destination IP: 203.0.113.25, Port: 22, Protocol: TCP

Log 3:
[2023-04-20 12:35:15] Windows Security Event - Failed Login Attempt - Username: Administrator, Source IP: 192.168.1.5
```
🤔 Question:

Based on the log data, which type of attack is most likely being attempted?

🔘 ```A. SQL Injection```

🔘 ```B. Distributed Denial of Service (DDoS)```

🔘 ```C. Brute Force```

🔘 ```D. Cross-Site Scripting (XSS)```

💡 Hint: Examine the commonalities between the logs and the potential attack techniques.

🚀 Ready to answer? Go on and make your choice!