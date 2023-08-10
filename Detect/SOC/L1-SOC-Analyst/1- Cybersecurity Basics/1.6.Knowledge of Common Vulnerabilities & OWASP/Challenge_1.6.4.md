# **Challenge 1.6.4: Common Vulnerabilities & OWASP**

---

### **description:**

🔍 As a Level 1 SOC Analyst, you are reviewing the company's web server logs and find the following entries:

---
```plaintext
GET /directory/%2E%2E/%2E%2E/%2E%2E/%2E%2E/etc/passwd HTTP/1.1
GET /directory/..%2F..%2F..%2F..%2Fetc%2Fpasswd HTTP/1.1
```
🤔 Question:

Which type of vulnerability do these log entries suggest is being attempted?

🔘 ```Path Traversal```

🔘 ```Cross-Site Scripting (XSS)```

🔘 ```XML External Entity (XXE)```

🔘 ```Server-Side Request Forgery (SSRF)```

💡 Hint: Pay attention to the encoded directory traversal sequences and think about what kind of vulnerability they're trying to exploit.

🚀 Ready to answer? Go on and make your choice!