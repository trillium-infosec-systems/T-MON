
## Challenge:
As a Level 1 SOC Analyst, you have been tasked with investigating a potentially compromised Windows system. You want to review the installed patches to see if the system has been patched against a known vulnerability. The command to list the installed patches is given below:

\```
wmic qfe
\```

**Question**: Which command would you use to filter the output to show only patches related to a specific vulnerability with the ID 'KB123456'?

a) wmic qfe | findstr "KB123456"
b) wmic qfe | grep "KB123456"
c) wmic qfe | awk '/KB123456/'
d) wmic qfe list installed | find "KB123456"

[Link to reveal the answer and explanation](#Link_to_Answer_And_Explanation)
