CPET10 Lesson 3

PROCESS
- instance of a program in execution.
- Segmented into parts: 

	I. Real Mode
		i. Code
		ii. Data
		iii. Stack- Contains the parameters that are to be converted by the API into proper system calls then stored in RAM as a stack again for its respective process.
		iv. Heap- Part of the process that requests for more memory during runtime. When the process needs more memory (RAM) during run time, the heap requests for more memory which sends this interrupt to the API for system call conversion. Process mode bit goes high and OS gives a memory address back to the API so that the heap of the process is given more memory which can be accessed through the memory address provided by the OS.
	II. Protected Mode- Limit, Base, Access Rights

- A program is passive which means it is stored in secondary memory. When it is to be executed, it becomes an active site called  process which is now stored in RAM waiting for CPU resource for execution.

PROCESS STATE
- State ng process with regards to it's event

	I. New
	II. Running
	III. Waiting
	IV. Ready
	V. Terminated

PROCESS CONTROL BLOCK (PCB)
- Data structure that contains information about a process block kasi an OS does context switching. The PCB becomes the tracker of the OS with regards to the state of a process and what to do when that process regains control of the CPU and other resources of a system unit.
- Also known as task control block. It is divided with respect to its information that it holds.
	
	I. Process State
	II. Program Counter- is a pointer for the next instruction to be executed within a thread of a process.
	III. Process Number (PID)- The process ID is an identifier set by the OS to each process that is to be executed so that di mahirapan ung OS sa pag-track sa kanila.
	IV. Registers- Ung mga code, data, stack, and heap
	V. Memory Limits- memory boundaries ng isang process
	VI. List of Open Files- Opened files
	VII. Pointer- Helps in context switching. It is a pointer referenced by the OS para pagnatapos ng isang process,it will use the pointer so the OS knows kung anong process ng babalikan.

CONTEXT SWITCHING
- It is the process employed by the OS when it is going to employ a process some resources from a currently executing process. The process is as follows:
	1. A system call is sent to the OS for another process requests for resources and OS services.
	2. The OS saves the state of process 0 (currently executing process) and brings it to RAM (not instruction queue) changes the state of process 1 to running. When process 0 calls for system call, the same thing happens.

THREADS
- Refer to a set of instructions within a process. Each thread in a process contains a program counter so that the thread will know what instruction to be executed next. 
- Check Lesson 1 PROCESS AND THREADS for more info.

PROCESS SCHEDULING 
- Methodologies employed by the OS so that CPU utilization is used in the best way possible without wasting resources, having idle time, and reducing slow runtimes and process performance. Has scheduling queues:

	I. Job Queue- All processes in the system
	II. Ready Queue- All processes ready for execution in the RAM.
	III. Device Queue- Processes that are waiting for an I/O event. 

- Process scheduling also has types namely:

	I. Long Term/ Job Scheduler- Works in tandem with the Short Term Scheduler in setting up and executing processes. The process of a long term scheduler is as follows: Alam naman natin the the secondary memory is a pool of programs stored within it. When a process is to be executed, kinukuha long term scheduler ung program na un based on its importance and cricticality on what is called a "Job Pool" within the secondary memory. And then dinadala niya ito sa RAM to be queued by the Short term scheduler. The long term scheduler places process into RAM based on its efficiency (referencing on the i/o and the CPU bound execution time of a process). Furthermore, this type of scheduling follows the degree of multiprogramming which refers to the balance of setting up processes in a ready state in the RAM. If masyadong unti ng processes, each clock pulse of a processor is wasted. If masyadong madami, too much context switching occurs, slowing down the time it takes to complete a process til termination. Basically, ang degree of multiprogramming is the number of processes na pwede sa RAM at a given time (based sa memory meron ang isang system).
	
	II. Short Term/ CPU Scheduler- Scheduling techniques utilized by the processor in actually executing processes from RAM and allocating proper time for each process to enable the illusion of multitasking. The short term scheduler utilizes a dispatcher when doing its tasks. The dispatcher does the following stuff in a short term scheduler: a. does the context switching and b. changing dual mode operation.
	- A short term scheduler has two categories in executing processes in RAM (note that the descriptions of different non-preemptive and preemptive scheduling will be further discussed on another lesson):

		i. Non-Preemptive- Pinapatapos muna ng OS na either mag-terminate, or waiting state ung isang process before siya mag-assign ng isa pang process from the RAM to be executed sa EU ng CPU. Because of this, hindi based sa "priority" or "criticality" and pag-assign ng OS ng processes from RAM to CPU. There are different types of Non-preemptive CPU scheduling:
		
			A. First Come First Serve (FCFS)
			B. Shortest Job First (SJF)
			C. Priority Scheduling (Non-Preemptive Version)
			D. Thread Scheduling (Non-Preemptive Version)
	
		ii. Preemptive- Unlike sa Non-Preemptive, a preemptive CPU scheduler bases is process assignment based on its priority, criticality, and how efficient the system will run as a whole. It does not "wait" for a process to go into terminated or waiting state. If there is an interrupt, it will context switch the existing process immediately in order to execute the interrupt. 

			A. Priority Scheduling
			B. Shortest Remaining Time First
			C. Priority Scheduling (Preemptive Version)
			D. Round Robin
			E. Multilevel Queue
			F. Thread Scheduling (Preemptive Version)
			G. Rate Montonic Scheduling
			H. Earliest Deadline First (EDF) Scheduling
			I. Proportional Share Scheduling
	
	- There are other CPU Schedulers that can be both preemptive or non-preemptive depending on how they are implemented based on their algorithm:
		
		i. Thread Scheduling
		ii. PThread Scheduling
		iii. Multiple Processor Scheduling
		iv. Real-Time CPU Scheduling
		v. Priority Based Scheduling
	
	III. Medium-Term Scheduler- The medium-term scheduler is part of the OS scheduler that manages the resources (more specifically the RAM) of a given system in managing processes going to and fro sa secondary memory to primary RAM memory. The medium term scheduler acts as the intermediary between the primary memory (RAM which in this context is called 'resource') and the secondary memory of a given system. Siya usually nagmamanage ng mga blocked or waiting process. If the RAM is full or if they will cause problems to resource utilization ng other processes, the medium term scheduler intermediates the processes to be transfered to RAM or RAM back to the secondary memory to save resources. because of this, the medium-term scheduler also sets the priority of each process to be stored sa RAM for eventual execution by the CPU. 