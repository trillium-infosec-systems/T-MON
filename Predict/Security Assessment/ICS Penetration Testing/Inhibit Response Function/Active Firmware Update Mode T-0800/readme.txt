	Activate Firmware Update Mode
ID:		T0800
Tactic:		Inhibit Response Function
Data Sources	Application logs, Sequential event recorder, Network protocol analysis, Packet capture
Asset:		Field Controller/RTU/PLC/IED, Safety Instrumented System/Protection Relay


Adversaries may activate firmware update mode on devices to prevent expected response 
functions from engaging in reaction to an emergency or process malfunction. For example,
devices such as protection relays may have an operation mode designed for firmware 
installation. This mode may halt process monitoring and related functions to allow new 
firmware to be loaded. A device left in update mode may be placed in an inactive holding
state if no firmware is provided to it. By entering and leaving a device in this mode,
the adversary may deny its usual functionalities.

https://collaborate.mitre.org/attackics/index.php/Technique/T0800
