# **Challenge 4.7.5: Network Segmentation and Access Controls**

---

### **description:**

🔍 Scenario: Review a network access control list (ACL) to ensure that only the accounting department can access a specific file server via SMB.

---
```plaintext

```
🤔 Question:

Which ACL rules would achieve the desired access control?

🔘 ```a. allow from 10.0.1.0/24 to 10.0.10.20 port 445
 deny from 10.0.0.0/16 to 10.0.10.20 port 445```

🔘 ```b. deny from 10.0.0.0/16 to 10.0.10.20 port 445
 allow from 10.0.1.0/24 to 10.0.10.20 port 445```

🔘 ```c. allow from 10.0.1.0/24 to 10.0.10.20 port 445
 allow from 10.0.0.0/16 to 10.0.10.20 port 445```

🔘 ```d. deny from 10.0.1.0/24 to 10.0.10.20 port 445
 allow from 10.0.0.0/16 to 10.0.10.20 port 445```

💡 Hint: Consider the specific IP addresses and ports involved in achieving the desired access control.

🚀 Ready to answer? Go on and make your choice!