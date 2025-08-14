History of Operating System (Lesson 1)

Operating System- An operating system is the interface in which the end-user to utilize application softwares. The operating system is also the system that manages the resources of a system unit, and gives and manages prioritization of instructions which will be executed by the system unit's different hardware components. The operating system acts as an intermediary between the user and the hardware of a system unit in order to do different tasks according to what the user wants to do while the operating system manages these instructions and multiple tasks and processes in order to do what the user wants.

HISTORY OF OPERATING SYSTEMS:

1. Before the 1940s Introduction to Computers 
	Most computers that were created by earlier scientists were mechanical in nature. This meant that these devices did not have any firmware to work with any OS since they are not electronic in any way. One of the first computers created being the Difference Engine by Charles Babbage in 1822 and made a paper about entitled, "On the Theoretical principles of the Machinery for Calculating Tables" the year after ran purely mechanical. The Difference Engine of Babbage operated through mechanical gears and its output were printed on a paper to mainly be used for 20-30 digit calculations, mainly for logarithmic tables. The project was ultimately canceled in 1833 due to lack of funding that he mainly got from the government. This is when he started to continue his research and transition into his 2nd invention, the Analytical Engine. 

	The Analytical Engine (1833-1840s) was the successor of the Difference Engine, aiming to be a more general-purpose calculator capable of doing calculations that are more vast than its predecessor. The Analytical Engine utilized "Punch Cards" that the user will feed into the machine. These punch cards (hole = 1, no hole = 0). represent binary machine code that the analytical engine will store in its memory register and process afterwards. The output will be printed on a paper. The system is also purely mechanical which means the user had to be precise on their machine code commands in their punch cards in order generate their output. Ada Lovelace, the world's first programmer, created an algorithm (using the punch card system) for the Analytical Engine. 

	Fast forward to the 1930s, the Differential Analyzer by Vannevar Bush from America's MIT University was created to solve vast amounts of values. It is an analog calculator meaning that it still utilizes manual operation by humans in order for each of its hardware to function. The machine is electromechanical, relying mostly in mechanical movement driven by electric power in order to perform calculations. Because of how primitive it still is, this computer did not have an Operating System built into it.

2. Batch Processing Systems (1950s) 	
	In 1956, the General Motors Research Laboratory (GMRL) announced the world's first operating system. The GM-NAA I/O was the operating system created by General Motors which run in a Single-batch architecture. How does batch architecture work? Deriving from the input technology of the Jaquard Loom, Analytical Engine, and Differential Analyzer, the GM-NAA I/O was an operating system utilized by the IBM 704 computer which mainly did batch instructions through user-input punch cards. A batch processing system simplifies repetitive tasks or tasks that have similar processes. For example, calculating the tax of each member of a population, a batch processing system would be best utilized in this problem since the solution of the problem requires a repetitive process for each individual problem. In a batch processing system, these repetitive tasks when done by a human are inputted in a punch card (these punch cards have multiple tasks that are similar to each other hence a batch) and is fed into the operating system to be processed and calculated by the system's processor and outputted by the system itself. This operating system was much more efficient because all the user needed to do was input the punch card batch and the system would process those information altogether without user intervention, setting up its 1 and 0s, and so on. Although its efficiency for its time is admirable, this type of operating system is sequential, meaning that it had to finish each calculation in a batch one by one and finish the whole batch (punch card) itself before moving to another punch card batch.

3. Batch Multiprogramming Operating Systems (1960s-1970s)- 
	The Technische Hogeschool Eindhoven Operating System (THE OS) by Edsger Dijkstra was the first operating system that utilized multiprogramming technology. A multiprogramming operating system is an OS that can execute multiple programs at the same time by alternating between priority and idle tasks in the background. Each programing is stored into the memory of a system unit and is called "process". The operating system which programs are ready and when a program is utilized, the CPU executes the program. If a program requires I/O, then the operating system places that process on a secondary memory for to utilie the system unit's I/O while the OS commands the CPU to do another process while waiting. These technologies is still under the batch operating systems but are not sequential anymore given the OS's capabilities of running multiple programs. 

4. Time Sharing and Real-Time Operating Systems (1970s)
	John MacCarthy from America's MIT introduced the Compatible Time-Sharing Operating Systems. This type of operating system, depending on its device that utilizes it, is a combination of a Batch OS and Multiprogramming OS or just a succesot to a Multiprogramming OS. A time sharing system, unlike its predecessors, is an OS that can handle tasks of multiple users all at once. Technically that is not the case but because of how it utilizes the quick clock pulses of a computer's processor, it may seem like it. 

	How it basically works is quite similar to the Multiprogramming OS but with multiple users. They take the processes of each user and the OS send them to the processor for processing. Before that though, the OS, through the utilization of different scheduling techniques, decides what process is prioritized and sent tot he CPU. The CPU then executes that process at a certain timeframe only since there are other users as well who need to utilize the system unit's processor for their processes. That timeframe where the CPU executes a process is called "Time Slot," "Time Slice," or "Quantum."  After a certain timefram has passed, if either a process needs an I/O or is succesfully finished, the OS then frees up resources, looks at its scheduler, and sends another process from another user for execution in the processor.

5. Real-Time Operating Systems (1970s)
	Real-Time Operating Systems (RTOS) are OSs that require specific timing for their output for a system to work properly. Without proper timing, the system that they are embedded in may fail as a whole. Basically the RTOS initializes the hardware, schedules priority tasks (utilizes "Preemptive Scheduling" where critical processes are executed first), handles interrupts (much more priority processes which are usually handled first then sent immeidately to the CPU), and yeah... RTOS are usually utilized by embedded systems that require precise timings of their tasks to be executed (e.g. internet systems, plane radar systems, and so on).

i. Hard Real-Time Operating Systems
Execution of processes should be completed at a set or predictable time in order to prevent system failure. These systems require precise timings.

ii. Soft Real-Time Operating Systems
Deadline of executions not being met can be tolerable.

iii. Firm Real-Time Operating Systems

6. Personal/Desktop Computer Operating System
	The first personal computer ever made was the Kenbak-1 which was designed by John Blankenbaker in the Kenbak Corp in 1970. The Personal computer is self explanatory. It is a computer designed for a single-user use. These have multiple external peripherals and a bootable OS for the user's perusal. It can be used both for office and home environments. 

i. Categories of Computer Systems
- Depending on the processor of a system unit, a unit has the ability to process instructions unilateraly, or in multiples. The following are two categories of computer systems which determine how much instructions or threads they can execute:

a. Single Instruction Single Data (SISD)- The SISD Computer System refers if a system unit's processor has only one processor to execute instructions. This means that since the system unit's processor has only one core (uniprocessor), they can only execute one instruction and data set at a time. The process is as follows: The Control Unit of the processor fetches an instruction from the program counter. The program counter is a CPU register that keeps track what next instruction from the memory does the CPU execute. After the ALU of the CPU does its calculations to  execute the program, the Program counter sends another instruction to the CU of the processor, one-by-one this happens.

b. Multiple Instruction Multiple Data (MIMD)- same process as the SISD but a single processor has multiple cores which can run individual instructions of different variety. A single processor can perform multiple instructions due to this. The MIMD system introduced the Multiprocessor Computer.

7. Multiprocessor System
	A multiprocessor system is a system unit wherein its processor have multiple cores. Each of these cores are connected by a shared memory which means when each core calls for a process of instruction, they get it from the same memory they are all connected to.

i. Different Methodologies of How Cores Access Shared Memory

a. Time-Shared Common Bus
	The Time Shared Common Bus connects all cores in to a single bus. This bus then routes to the shared memory (RAM). When multiple cores try to access the memory to fetch instructions, one core has to be finished in fetching those instructions from the bus before another core does.

b. Multiport Memory
	Each Processor Core is connected directly to a memory module. A memory module is a RAM architecture that partitions memory into groups so that memory execution can be done independently as it is accessed by individual processor cores.

c. Crossbar Grid Switch
	Each Processor Core is connected directly to a memory module as well as a grid switch, this allows each processor core direct access through other memory modules through this grid switch.

ii. Types of Multiprocessor Systems

a. Asymmetric Multriprocessing (AMP)
	This type of multriprocessor system is when there is a hereirchy when it comes to the cores of a CPU. Essentially in this system, there is a "master" core among all cores in a processor that mainly manages the OS and ung kanyang mga "nigger" cores. The nigger cores perform specific tasks as commanded by their master core.

b. Symmetric Multiprocessing (SMP)
	Gender and Racial Equality. Every core works together in managing the OS and performing instructions, threads, and processes.

8. Clustered Systems
	Each computer (node) within this system is connected to each other and each of these nodes are also connected to a shared storage. The network at which these nodes connect to a shared storage is called the Storage Area Network. Through fiber optics and ethernet cables, these nodes are connected to a unified storage system wherein all nodes have access to the same data/files.

9. Network System
	A Network system is a computer system where in each node has their own hardware sspeicifcations and storage devices and are all connected to a server so they can all communicate with each other. Although each node in this system does not share the same files, each node can share their files to another node.

i. Network System Scope Connectivity

a. Local Area Network (LAN)- Designed to cover small geographical area. Usually used in a laboratory, local server, university type shit.

b. Wide Area Network (WAN)- Point-to-point connections of several nodes over a large distance.

ii. Network System Type

a. Client-Server System
	Smart system units, smart devices, which are usually used by clients as products. These systems send their data to a server then back to the client for their perusal depending on the function the client node system does.

b. Peer-to-Peer System- every node is a peer with equal functions and all can do the same tasks. An example of this system are video and text messaging apps.

10. Distributed Systems
	This system, given a client, utilizes computer hardware specifications from another node to achieve execution of a program or task.

NETWORK OPERATING SYSTEMS
	Computer has basic hardware but utilizes the network connected to a server in a distributed system type shit in order to accomplish tasks. A great example of this is remote desktop in windows or the PS portal of the playstation.

DISTRIBUTED OPERATING SYSTEM
	Same as NOS...? Idk, pagod na ako. May lesson 2, and 3 pa ako pucha.


11. Web-based Systems
12. Grid Computing Systems
13. Cloud Computing Systems
14. Handheld Systems
15. Mobile Systems

