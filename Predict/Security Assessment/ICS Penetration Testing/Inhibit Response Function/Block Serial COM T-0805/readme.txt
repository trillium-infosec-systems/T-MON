
ID:		T0805
Tactic:		Inhibit Response Function
Data Sources:	Alarm history, Data historian, Network protocol analysis, Packet capture
Asset:		Field Controller/RTU/PLC/IED, Input/Output Server

Adversaries may block access to serial COM to prevent instructions or configurations from reaching target devices. 
Serial Communication ports (COM) allow communication with control system devices. Devices can receive command and 
configuration messages over such serial COM. Devices also use serial COM to send command and reporting messages. 
Blocking device serial COM may also block command messages and block reporting messages. A serial to Ethernet 
converter is often connected to a serial COM to facilitate communication between serial and Ethernet devices. One
approach to blocking a serial COM would be to create and hold open a TCP session with the Ethernet side of the 
converter. A serial to Ethernet converter may have a few ports open to facilitate multiple communications


https://collaborate.mitre.org/attackics/index.php/Technique/T0805
