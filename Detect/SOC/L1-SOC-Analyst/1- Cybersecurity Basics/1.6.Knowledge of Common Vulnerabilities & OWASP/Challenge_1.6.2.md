# **Challenge 1.6.2: Common Vulnerabilities & OWASP**

---

### **description:**

🔍 You are a Level 1 SOC Analyst at DEF Corporation. You are investigating a potential vulnerability in the company's web application. Upon reviewing the application logs, you notice the following suspicious request:

---
```plaintext
GET /search?query=%3Cscript%3Ealert(%27XSS%27)%3C/script%3E HTTP/1.1
```
🤔 Question:

Which OWASP Top Ten vulnerability is being attempted in this request?

🔘 ```A1: Injection```

🔘 ```A3: Sensitive Data Exposure```

🔘 ```A6: Security Misconfiguration```

🔘 ```A7: Cross-Site Scripting (XSS)```

💡 Hint: Look at the contents of the request and think about which OWASP vulnerability involves injecting malicious scripts.

🚀 Ready to answer? Go on and make your choice!