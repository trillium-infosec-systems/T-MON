# **Challenge 2.4.5: Event Correlation**

---

### **description:**

🔍 Scenario: As an SOC analyst, you are investigating a potential data breach. You identify the following security events:

---
```plaintext
Event 1:
[2023-04-20 14:45:00] Database Server - UNAUTHORIZED ACCESS - User: dbadmin, Source IP: 192.168.100.15

Event 2:
[2023-04-20 14:45:10] Database Server - DATA EXPORT - User: dbadmin, Source IP: 192.168.100.15, Destination IP: 203.0.113.100, Protocol: TCP

Event 3:
[2023-04-20 14:45:30] Firewall - BLOCK - Source IP: 192.168.100.15, Destination IP: 203.0.113.100, Port: 80, Protocol: TCP
```
🤔 Question:

Based on the correlation of these events, which of the following actions is most likely happening?

🔘 ```A. Data Exfiltration```

🔘 ```B. Unauthorized Access```

🔘 ```C. Brute Force Attack```

🔘 ```D. Malware Infection```

💡 Hint: Consider the progression of events and the significance of data export.

🚀 Ready to answer? Go on and make your choice!