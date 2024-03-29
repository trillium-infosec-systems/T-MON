# **Challenge 2.3.5: Log Interpretation**

---

### **description:**

🔍 As a Level 1 SOC Analyst, you are reviewing logs and come across the following log entry:

---
```plaintext
[2023-04-14 20:45:00] IDS: src=192.168.1.100 dst=192.168.1.200 proto=TCP sport=80 dport=443 signature_id=2001219 signature="ET POLICY Outgoing Basic Auth Base64 HTTP Password detected unencrypted" action=Alert
```
🤔 Question:

What is the best course of action based on this log entry?

🔘 ```a) Ignore the log entry, as it is a false positive```

🔘 ```b) Investigate further to determine if sensitive information was transmitted unencrypted```

🔘 ```c) Report the incident to higher-level analysts for further investigation```

🔘 ```d) Block the source IP address, as it indicates potential data exfiltration```

💡 Hint: Consider the implications of the IDS alert and the detected activity.

🚀 Ready to answer? Go on and make your choice!