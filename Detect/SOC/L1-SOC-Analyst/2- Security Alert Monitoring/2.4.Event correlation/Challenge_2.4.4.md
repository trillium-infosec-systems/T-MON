# **Challenge 2.4.4: Event Correlation**

---

### **description:**

🔍 Scenario: You are an SOC analyst working on event correlation, and you come across the following security events:

---
```plaintext
Event 1:
[2023-04-20 10:30:00] Firewall - ALLOW - Source IP: 10.0.0.15, Destination IP: 8.8.8.8, Port: 53, Protocol: UDP

Event 2:
[2023-04-20 10:30:15] DNS Server - QUERY - Domain: known-malicious-domain.com, Source IP: 10.0.0.15

Event 3:
[2023-04-20 10:30:20] Web Proxy - BLOCK - User: user2@yourcompany.com, URL: http://known-malicious-domain.com/malware
```
🤔 Question:

Based on the correlation of these events, what is the most likely issue?

🔘 ```A. Command and Control (C2) Communication```

🔘 ```B. Unauthorized Access```

🔘 ```C. Data Exfiltration```

🔘 ```D. Distributed Denial of Service (DDoS)```

💡 Hint: Pay attention to the events' sequence and the correlation of actions.

🚀 Ready to answer? Go on and make your choice!