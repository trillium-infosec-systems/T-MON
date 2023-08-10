
ID:		T0812
Tactic:		Lateral Movement
Data Sources:	Authentication logs, Windows event logs, Network protocol analysis, Packet capture
Asset:		Human-Machine Interface, Field Controller/RTU/PLC/IED, Safety Instrumented 
		System/Protection Relay, Control Server, Engineering Workstation

Adversaries may leverage manufacturer or supplier set default credentials on control system devices. 
These default credentials may have administrative permissions and may be necessary for initial 
configuration of the device. It is general best practice to change the passwords for these accounts 
as soon as possible, but some manufacturers may have devices that have passwords or usernames 
that cannot be changed.

https://collaborate.mitre.org/attackics/index.php/Technique/T0812
