ID:		T0836
Tactic:		Impair Process Control
Data Sources:	Sequential event recorder, Application logs, Network protocol analysis, Packet capture
Asset:		Control Server, Field Controller/RTU/PLC/IED, Safety Instrumented 
		System/Protection Relay, Human-Machine Interface

Adversaries may modify parameters used to instruct industrial control system devices. These devices 
operate via programs that dictate how and when to perform actions based on such parameters. Such 
parameters can determine the extent to which an action is performed and may specify additional options. 
For example, a program on a control system device dictating motor processes may take a parameter 
defining the total number of seconds to run that motor.

https://collaborate.mitre.org/attackics/index.php/Technique/T0836
