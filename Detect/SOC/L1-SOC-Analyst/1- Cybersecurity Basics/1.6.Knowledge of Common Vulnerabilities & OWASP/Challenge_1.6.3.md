# **Challenge 1.6.3: Common Vulnerabilities & OWASP**

---

### **description:**

🔍 As a Level 1 SOC Analyst at GHI Corporation, you receive an alert about a possible SQL Injection attack on the company's web application. The following log entry is associated with the alert:

---
```plaintext
POST /login HTTP/1.1
Content-Type: application/x-www-form-urlencoded
Content-Length: 61

username=admin' OR '1'='1&password=admin' OR '1'='1
```
🤔 Question:

Which type of SQL Injection attack does this log entry suggest?

🔘 ```Error-based SQL Injection```

🔘 ```Union-based SQL Injection```

🔘 ```Boolean-based SQL Injection```

🔘 ```Time-based SQL Injection```

💡 Hint: Analyze the contents of the POST request and identify the type of SQL Injection attack being attempted.

🚀 Ready to answer? Go on and make your choice!