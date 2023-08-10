
ID:		T0874
Tactic:		Execution, 
Data Sources:	File monitoring, API monitoring
Asset:		Engineering Workstation

Adversaries may hook into application programming interface (API) functions 
used by processes to redirect calls for execution and privilege escalation 
means. Windows processes often leverage these API functions to perform tasks
that require reusable system resources. Windows API functions are typically 
stored in dynamic-link libraries (DLLs) as exported functions.
One type of hooking seen in ICS involves redirecting calls to these functions 
via import address table (IAT) hooking. IAT hooking uses modifications to a 
process’s IAT, where pointers to imported API functions are stored.

https://collaborate.mitre.org/attackics/index.php/Technique/T0874