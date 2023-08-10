# **Challenge 2.3.1: Log Interpretation**

---

### **description:**

🔍 You are reviewing logs as a Level 1 SOC Analyst and come across the following log entries:

---
```plaintext
[2023-04-14 16:00:00] WebServer: src=66.249.66.1 dst=192.168.1.100 proto=TCP sport=80 dport=59832 http_user_agent="Mozilla/5.0 (compatible; Googlebot/2.1; +http://www.google.com/bot.html)"
[2023-04-14 16:00:01] WebServer: src=157.55.39.1 dst=192.168.1.100 proto=TCP sport=80 dport=54232 http_user_agent="Mozilla/5.0 (compatible; bingbot/2.0; +http://www.bing.com/bingbot.htm)"
[2023-04-14 16:00:02] WebServer: src=192.168.1.105 dst=192.168.1.100 proto=TCP sport=80 dport=54233 http_user_agent="Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/58.0.3029.110 Safari/537.36"
```
🤔 Question:

Which of the following best describes the activity in these log entries?

🔘 ```a) All connections are from web crawlers```

🔘 ```b) One of the connections is from an internal user```

🔘 ```c) The connections indicate a DDoS attack```

🔘 ```d) There is suspicious activity from an unknown user agent```

💡 Hint: Analyze the source of the connections and the corresponding user agents to determine the nature of the activity.

🚀 Ready to answer? Go on and make your choice!