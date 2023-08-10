
ID:		T0806
Tactic:		Impair Process Control
Data Sources:	Alarm history, Sequential event recorder, Data historian, Netflow/Enclave netflow, Network protocol analysis, Packet capture
Asset:		Control Server, Field Controller/RTU/PLC/IED

Adversaries may brute force I/O addresses on a device and attempt to exhaustively perform an action. 
By enumerating the full range of I/O addresses, an adversary may manipulate a process function without
having to target specific I/O interfaces. More than one process function manipulation and enumeration 
pass may occur on the targeted I/O range in a brute force attempt.

https://collaborate.mitre.org/attackics/index.php/Technique/T0806
