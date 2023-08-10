# **Challenge 2.2.4: Real-time Monitoring**

---

### **description:**

🔍 You are a Level 1 SOC Analyst and receive an alert for a possible SQL injection attack. The alert is triggered by the following log entry:

---
```plaintext
[2023-04-14 15:10:11] WebServerLog: 192.168.1.103 - - [14/Apr/2023:15:10:11 +0000] "GET /search.php?q=smartphones%27+OR+1%3D1--+&sort=price HTTP/1.1" 200 4526 "-" "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/89.0.4389.82 Safari/537.36"
```
🤔 Question:

Which part of the log entry indicates the potential SQL injection attack?

🔘 ```a) /search.php?q=smartphones%27+OR+1%3D1--+```

🔘 ```b) GET /search.php```

🔘 ```c) 200 4526```

🔘 ```d) Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/89.0.4389.82 Safari/537.36```

💡 Hint: Focus on the part of the log entry that represents the URL and the query parameter.

🚀 Ready to answer? Go on and make your choice!