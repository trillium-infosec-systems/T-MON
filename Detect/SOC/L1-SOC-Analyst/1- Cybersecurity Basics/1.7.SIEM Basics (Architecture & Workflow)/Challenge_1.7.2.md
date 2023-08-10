# **Challenge 1.7.2: SIEM Basics (Architecture & Workflow)**

---

### **description:**

🔍 As a Level 1 SOC Analyst, you've been asked to review and analyze a set of logs in the SIEM system. Your task is to identify any suspicious activity by analyzing the following logs:

---
```plaintext
192.168.1.10 - - [15/Apr/2023:12:32:45 +0000] "GET /index.html HTTP/1.1" 200 498
192.168.1.11 - - [15/Apr/2023:12:33:15 +0000] "GET /admin/login HTTP/1.1" 200 1024
192.168.1.11 - - [15/Apr/2023:12:33:20 +0000] "POST /admin/login HTTP/1.1" 200 2048
192.168.1.12 - - [15/Apr/2023:12:34:05 +0000] "GET /images/product1.jpg HTTP/1.1" 200 8192
192.168.1.11 - - [15/Apr/2023:12:35:00 +0000] "POST /admin/backup/config HTTP/1.1" 403 1536
```
🤔 Question:

Which of the following activities appears suspicious?

🔘 ```Access to the /index.html file```

🔘 ```Access to the /admin/login page```

🔘 ```Downloading an image from the /images directory```

🔘 ```Attempting to back up the server configuration file```

💡 Hint: Analyze each log entry and consider which activity could be indicative of potential malicious behavior.

🚀 Ready to answer? Go on and make your choice!