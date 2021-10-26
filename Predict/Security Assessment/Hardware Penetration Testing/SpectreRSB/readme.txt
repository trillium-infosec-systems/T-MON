		SpectreRSB
Researchers at the University of California at Riverside discovered a side-channel 
vulnerability that manipulates a unique part of the speculative execution process 
known as the return stack buffer (RSB). RSB can be manipulated via user code and 
direct pollution, where an adversary can insert a call instruction as a value 
pushed to the software stack and the RSB. Specifically, the stack is manipulated 
to ensure the return address doesn’t match the return buffer stack, allowing the 
bad actor to spoof data running on a CPU. The vulnerability may impact CPUs made 
by ARM, AMD and Intel. 

https://resources.infosecinstitute.com/topic/32-hardware-and-firmware-vulnerabilities/

