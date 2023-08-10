# **Challenge 2.2.8: Real-time Monitoring**

---

### **description:**

🔍 As a Level 1 SOC Analyst, you're monitoring the real-time network traffic and notice the following log entries:

---
```plaintext
[2023-04-14 15:45:00] IDS: src=192.168.1.150 dst=192.168.1.200 proto=TCP sport=51000 dport=445 signature="ET POLICY SMBv1 Negotiate Protocol Request"
[2023-04-14 15:45:01] IDS: src=192.168.1.150 dst=192.168.1.200 proto=TCP sport=51000 dport=445 signature="ET POLICY SMBv1 Tree Connect AndX Request"
[2023-04-14 15:45:02] IDS: src=192.168.1.150 dst=192.168.1.200 proto=TCP sport=51000 dport=445 signature="ET POLICY SMBv1 NT Create AndX Request"
```
🤔 Question:

What action should you take?

🔘 ```a) Ignore the log entries, as this is normal traffic```

🔘 ```b) Block the traffic, as it indicates a ransomware attack```

🔘 ```c) Investigate further, as this might indicate the use of an outdated protocol```

🔘 ```d) Report the incident to higher-level analysts for further investigation```

💡 Hint: Consider the significance of the mentioned protocol version and the potential security implications.

🚀 Ready to answer? Go on and make your choice!