# Definition
- CPU Scheduling or Short-term scheduler is a scheduling methodology utilized by the OS with regards to which processes from the system memory are to be executed to the processor.
- Utilizes different methodologies in order to pick what processes from RAM are to be executed in the EU of the CPU.

# Dispatcher
- The dispatcher is a "component" of a short term OS scheduler where in it handles the context-switching and dual mode operation in process execution.
- **Dispatch Latency**- Time it takes for the dispatcher to stop a process and context switch to another.

# Scheduling Criteria
- Scheduling Criteria refers to the components that the scheduler utilizes as a guide on which process to place on the CPU for execution depending on the scheduling methodology it is using.

	1. Arrival Time (AT)- Time at which a process arrives to the RAM and recognized by the scheduler.
	2. Burst Time (BT)- Time at which a process is finished executing at its own by the CPU. Example: process 1 takes 2 seconds to finish executing. Process 2 takes 5 seconds to finish executing.
	3. Completion Time (CT)- Finishing time of a process. Example: Process 1 starts at time 0 and finishes at time 2. Process 2 starts at time 2 and finishes at time 7. The Completion Time of process 1 is time 2 and the completion time of process 2 is time 7 simply put.
	4. Priority- Utilized by priority scheduling.
	5. Waiting Time (WT)- TAT - BT
	6. Turnaround Time (TAT)- CT - AT

# CPU Scheduling Visualization
- In order to visualize the scheduling of each process in execution for the CPU is through a Gantt Chart. A Gantt Chart is the best way to visualize the scheduling and ordering of processes to be executed.
- Depending on the type of CPU scheduling methodology, the gantt chart contains the different processes in each cell which is arranged depending on the type of CPU scheduling. Below the cells are numbers which indicate the AT as well as the CT of each process.
![[Pasted image 20250420214454.png]]

# Types of CPU Scheduling
1. Non-preemptive Scheduling- It is a type of CPU scheduling that finishes a process no matter what until termination or if a process goes into a waiting state. Once a process is at running state, it executes until the aforementioned states.

	**Types of Non-Preemptive Scheduling**
	1. **First Come First Serve (FCFS)**
		- Scheduling and organization of processes is based on its arrival time hence first come first serve. Its a FIFO type of scheduler where in process execution is based on whoever comes first.
		- Example:
		![[Pasted image 20250420215746.png]]
		![[Pasted image 20250420215820.png]]
		- Based on the example, the organization and structure ng pagkakasunod- sunod ng mga processes sa Gantt Chart is based on the arrival time of each process. Given the arrival time as well as the burst time provided, the gantt chart is created. Since 0 ung AT ng P3, it is the first to be served CPU execution. Given the burst time of P3 (how much it takes for the process to go to termination) which is 10, it finished on time 10. The next to arrive was P2 at time 1, so it is the next to be executed. With the burst time being 25, and starting on time 10 after P3, the completion time or the time P2 finishes is at time 35. This goes so and so forth given the remaining processes.
		- Use the following aforementioned formulas for calculating the WT and TAT.
		  
	2. **Shortest Job First (SJF)**
		- Scheduling and Organization of processes is based on the shortest burst time of a process with the exception of the first process to arrive based on its given arrival time as well as other arrival time factors. Do take note that the principle that a process is scheduled for CPU execution based on its inherent burst time would only be applicable if has another process in tandem with it waiting for CPU execution as well. So initially, everything is based first from the arrival time and completion time and what processes are queued at the same time for execution.
		- Example:
		![[Pasted image 20250420221313.png]]
		![[Pasted image 20250420221325.png]]
		- SJF at its core is still a non-preemptive short-term scheduler. This means that once a 
