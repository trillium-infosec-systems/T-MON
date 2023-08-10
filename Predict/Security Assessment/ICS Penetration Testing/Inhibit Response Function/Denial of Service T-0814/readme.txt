
ID:		T0814
Tactic:		Inhibit Response Function
Data Sources:	Alarm history, Data historian, Network protocol analysis, Packet capture, Sequential Event Recorder
Asset:		Field Controller/RTU/PLC/IED, Safety Instrumented System/Protection Relay

Adversaries may perform Denial-of-Service (DoS) attacks to disrupt expected device functionality. 
Examples of DoS attacks include overwhelming the target device with a high volume of requests in 
a short time period and sending the target device a request it does not know how to handle. 
Disrupting device state may temporarily render it unresponsive, possibly lasting until a reboot 
can occur. When placed in this state, devices may be unable to send and receive requests, and 
may not perform expected response functions in reaction to other events in the environment.


https://collaborate.mitre.org/attackics/index.php/Technique/T0814
