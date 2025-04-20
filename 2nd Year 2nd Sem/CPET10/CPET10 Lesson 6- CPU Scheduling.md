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
1. **Non-preemptive Scheduling**- It is a type of CPU scheduling that finishes a process no matter what until termination or if a process goes into a waiting state. Once a process is at running state, it executes until the aforementioned states.

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
		- SJF at its core is still a non-preemptive short-term scheduler. This means that once a process starts execution, it executes until termination (maubos ung burst time niya). 
		- SJF is a combination of considering the arrival time of the process and using only burst time into consideration when two processes are in conflict into one another since parehas na silang nasa RAM, waiting for CPU acquisition and execution.
		- From the example, P3 and mauuna since it arrived at time 0. Since non-preemptive and SJF, it will finish until maubos ung BT niya. Its CT becomes 10. At time 10, marami nang mga processes na nag-arrive sa RAM, namely P2 (AT= 1), P1 (AT= 3), P4 (AT= 4), and P5 (AT= 6). That means that processes in queue for the CPU are all of the aforementioned processes since by time 10, lahat sila naka-ready state na sa RAM. Dito na papasok ung paggamit ng burst time ng mga processes to determine what is sent to the CPU for execution. In this case, its P5 having the lowest BT among all (BT= 7). This process is repeated until wala nang matitirang process for the CPU to execute.
		- Use the following aforementioned formulas for calculating the WT and TAT.
		
	3. **Non-Preemptive Priority Scheduling**
		- Utilizes the priority scheduling criteria for determining which next process to send to the CPU. It is of non-preemptive type meaning that it completely finishes the the process until termination (BT= 0). Do take note that if two or more process that are also in queue with another have the same priority, utilize BT as a condition, if still the same, use AT as the last resort.
		- Example:
		![[Pasted image 20250420232852.png]]
		![[Pasted image 20250420233002.png]]
		- **First Iteration:** P3 is executed first since it is the first process to arrive. Since this is a non-preemptive type of scheduling, the CPU scheduler lets the CPU finish executing P3 until termination at time 10. 
		- **Second Iteration:** By time 10, P2 (AT= 1), P1 (AT= 3), P4 (AT= 4), and P5 (AT= 6) has arrived and is ready for execution waiting in RAM. Given the assigned priorities of the aforementioned processes, P1 is the next to be executed with the 2nd highest priority among all processes. P1 finishes at time 30 given its burst time and the time that it started (T10).
		- **Third Iteration:** P2, P4, and P5 are in queue for CPU allocation. Given P5 has the lowest priority hence it is the next to be executed until termination.

2. **Preemptive Scheduling**- Type of CPU scheduler that bases its organization and scheduling of processes on different factors. Its main difference on Non-Preemptive Scheduling is the fact that even though the state of a process is running, a preemptive scheduler will still context switch to another process if needed based on priority, time slice, or other factors depending on the type of preemptive scheduling. A preemptive scheduler basically interrupts a process in execution for a more critical process.

	**Types of Preemptive Scheduling**
	1. **Shortest Remaining Time First**
		- Basically SJF but with an extra step. Important note tho is that if there are processes in comparison that have the same burst time, use arrival time as the basis instead of which process to run next.
		- Example:
		![[Pasted image 20250420225007.png]]
		![[Pasted image 20250420225020.png]]
		- **First Iteration**: P3 arrives first at time 0. This is first executed but stops at time 1 because of the arrival of P2. BT of P3 becomes 9 since it is executed for at least 1 time.
		- **Second Iteration:** In queue for next execution is P3 and P2. Since the burst time of P3 is less than P2 (9 < 25), it is the next one to be executed. P3 executes until time 3 because of the arrival of P1 (AT= 3). Because P3 executes for at least 2 time, it burst time becomes 7.
		- **Third Iteration:** In queue for next execution is P3, P2, and P1. Since P3 has the least BT of them all (7 < 25 < 30).  
		- The same process is repeated until the no more further process can be executed.
		- The completion time is acquired by the time of the last instance of a process before it is terminated in the Gantt Chart.
		- TAT and WT calculation is still the same.
		
	2. **Preemptive Priority Scheduling**
		- Basically SRTF but with priority.
		- Example:
		 ![[Pasted image 20250420234746.png]]
		 ![[Pasted image 20250420234814.png]]
		 - **First Iteration:** P3 is the first to be executed due to it arriving at time 0. It stops at time 1 since P2 arrives at time 1. BT of P3 is subtracted to 1 = BT= 9.
		 - **Second Iteration:** At time 1, the queue for next execution is P3 and P2. Since P2 has the 5th priority, and P3 has 1st priority, P3 is executed again. P3 is executed until time 3 due to the fact that P1 arrives at that time. The burst time of P3 is subtracted by two. BT= 7.
		 - This goes on until no further process can be executed. 
		 - The completion time is acquired by the time of the last instance of a process before it is terminated in the Gantt Chart.
		 - TAT and WT calculation is still the same.
		
	3. **Round-Robin**
		- Utilizes the schedulers time slice in order to context switch to the next process to be executed as well as scheduled for execution.
		- Example:
		![[Pasted image 20250421000937.png]]
		![[Pasted image 20250421000950.png]]
		- **First Iteration:** With a time slice of 10, P3 comes first since it is the first process to arrive. Since time slice is 10, its burst time is reduced to 10 and is practically finished execution.
		- **Second Iteration:** By time 10, multiple processes have arrived at queue. In RR, one should take note that another scheduler which is more akin to an instruction pointer is also created as a guide for what process next to execute. It will be shown in this iteration and how to utilize it.
			- The second chart/scheduler utilized for RR is based on the arrival time of the processes. In this case, now with the terminated P3, it is P2 P1 P4 P5. With that in mind, P2 is next executed. Its time slice is reduced to 15 and finishes initially at time 20. The second scheduler is rearranged with the newly executed process moving to the last of the list hence the list being P1 P4 P5 P2.
		- **Third Iteration:** P1 is executed next. Its burst time is reduced to 20 and finishes on time 30. The list is rearranged into P4 P5 P2 P1.
		- This continues until no other process is to be executed further.
		- The completion time is acquired by the time of the last instance of a process before it is terminated in the Gantt Chart.
		- TAT and WT calculation is still the same.
