
ID:		T0804
Tactic:		Inhibit Response Function
Data Sources:	Alarm History, Data historian, Network protocol analysis, Packet capture
Asset:		Field Controller/RTU/PLC/IED, Input/Output Server


Adversaries may block or prevent a reporting message from reaching its intended target. In control systems, 
reporting messages contain telemetry data (e.g., I/O values) pertaining to the current state of equipment 
and the industrial process. By blocking these reporting messages, an adversary can potentially hide their 
actions from an operator. Blocking reporting messages in control systems that manage physical processes may
contribute to system impact, causing inhibition of a response function. A control system may not be able to
respond in a proper or timely manner to an event, such as a dangerous fault, if its corresponding reporting 
message is blocked

https://collaborate.mitre.org/attackics/index.php/Technique/T0804
