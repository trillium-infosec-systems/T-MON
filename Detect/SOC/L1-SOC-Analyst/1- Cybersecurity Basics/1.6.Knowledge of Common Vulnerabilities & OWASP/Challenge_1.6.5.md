# **Challenge 1.6.5: Common Vulnerabilities & OWASP**

---

### **description:**

🔍 You are a Level 1 SOC Analyst working for JKL Corporation. You receive an alert about a possible XML External Entity (XXE) attack against the company's web application. The following HTTP request is associated with the alert:

---
```plaintext
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE foo [
  <!ELEMENT foo ANY >
  <!ENTITY xxe SYSTEM "file:///etc/passwd" >
]>
<foo>&xxe;</foo>
```
🤔 Question:

What should you recommend to the development team to mitigate this type of attack?

🔘 ```Disable DTD parsing in the XML parser```

🔘 ```Implement Content Security Policy (CSP)```

🔘 ```Enable secure cookie flags```

🔘 ```Use prepared statements for SQL queries```

💡 Hint: Examine the XML payload and think about how to prevent the exploitation of XML External Entity (XXE) vulnerabilities.

🚀 Ready to answer? Go on and make your choice!