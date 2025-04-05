# THREADS
- A thread is a unit of a process. By unit of a process, it means na a thread defines the individual functionalities ng isang process. For example, you have google docs. You know na sa google docs, marami kang pwedeng gawin na stuff ng sabay-sabay, well that is because maraming threads that define the different features/functionalities ng isang processs.
- Think of threads as the "features" ng isang process. Going back to the google docs example, google docs waits for user input, syncing data to the cloud, printing. Each of these functionalities, kahit sabay-sabay pa sila mag run, are individual threads. Through threads, parallelism (parang pipelining, pwedeng sabay-sabay mag run kasi independent sila sa isa't-isa, di na need maghintayan) occurs.
- In light of this, the heirarchy of programs in a system unit is as follows:
	- **Process > Threads > Instructions**, where in process contains either one thread or multiple threads and a thread contains multiple instructions.

- Threads share the same memory address and code (since threads are in a process) pero they have different program counters (IP) and registers. You must remember na a thread IS A SET OF INSTRUCTIONS sa isang process. Each thread has an individual program counter because it helps the thread keep track what next instruction to execute. 
- In relation to threads in processors, given a single-core CPU, a CPU thread simply executes threads in its own ALU. Given a 1 core, 2 thread CPU, at every clock burst, 2 threads in a process is executed. Eh andaming threads sa process tas meron kang dalawang process in execution, tgrabaho yan ung context switching, in conjuction with OS schedulers, to make it seem an di laggy ung performance.



# MULTI-CORE THREAD PROGRAMMING
- For programmers, the rise of multi-cores made programming more challenging due to the fact that programmers now need to take into account multi-core technology. Although di na siya problem ngayon dahil sa high-level languages, dispelling the need to call out individual components to talk with a developer's program, low-level language developers have a hard time with multi-core thread programming due to the fact na dapat ibalance out nila ung mga threads ng process nila into different cores para each core is utilize efficiently which in turn results to a more refined process (program when executed). This introduces the concepts of parallelism and concurrency in efficient thread executions:

	- **Concurrency**- juggling between multiple threads in a process so that it seems like a process is multi tasking wherein its much more similar to context switching.
	- **Parallelism***- Actually threads executing all at the same time. There are two types of parallelism:
		1. **Data Parallelism**- Division of the same task into multiple threads and execute on the threads of a processor.
		2. **Task Parallelism**- A task stays on a thread not like in data parallelism na a certain task is distributed on different threads.

- [**Amdhal's Law**](https://www.splunk.com/en_us/blog/learn/amdahls-law.html)- is a law that states that the potential improvement of an algorithm or process is not determined by the overall upgrade of the algorithms or components in a system but rather, fixing the most bottlenecked part of your system. During the start of multi-core computer development, Gene Amdhal noticed na kahit dumarami ung cores ng isang processor, the potential of speedup of a process given multiple updates to its algorithm will not be affected significantly if the the bottlenecked part of your thread algorithm is not improved. Its like setting up a meeting for three people. If two individuals ay naka kotse and one of them is naka bike, kahit gano ka bilis mag drive ung mga nakakotse, if naka-bike ung last individual, di kayo magkikita ng maaga.
- In Amdhal's low, a process is divided into serial and parallel fractions. A serial fraction in a process is the bottleneck of an algorithm na hindi nababago ung speed. The parallel fraction is the thread of a process that wherein its speed can be improved.
- The formula for Amdhal's Law is as follows:
		- Formula: SpeedUp = 1 / (S + (1-s)/N) wherein: S= Speed Up potential of a process; S= serial fraction; 1-s is the parallel fraction. 
		- This [video](https://www.youtube.com/watch?v=Axx2xuB-Xuo) shows a good explanation of Amdhal's Law.


