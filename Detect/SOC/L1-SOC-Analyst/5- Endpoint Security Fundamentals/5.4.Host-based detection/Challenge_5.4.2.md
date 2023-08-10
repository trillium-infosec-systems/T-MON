# **Challenge 5.4.2: Host-based Detection**

---

### **description:**

🔍 Scenario: Search for unauthorized root login attempts in auditd logs on a Linux server.

---
```plaintext

```
🤔 Question:

Which of the following commands would you use to search for unauthorized root login attempts in the auditd logs?

🔘 ```a. grep "login=root" /var/log/audit/audit.log```

🔘 ```b. grep "type=USER_LOGIN" /var/log/audit/audit.log | grep "acct=root"```

🔘 ```c. grep "type=LOGIN" /var/log/audit/audit.log | grep "uid=root"```

🔘 ```d. awk '/type=LOGIN/ && /acct="root"/' /var/log/audit/audit.log```

💡 Hint: Think about the specific fields in the auditd logs that indicate root login attempts.

🚀 Ready to answer? Go on and make your choice!