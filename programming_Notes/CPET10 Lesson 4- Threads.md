# THREADS
- A thread is a unit of a process. By unit of a process, it means na a thread defines the individual functionalities ng isang process. For example, you have google docs. You know na sa google docs, marami kang pwedeng gawin na stuff ng sabay-sabay, well that is because maraming threads that define the different features/functionalities ng isang processs.
- Think of threads as the "features" ng isang process. Going back to the google docs example, google docs waits for user input, syncing data to the cloud, printing. Each of these functionalities, kahit sabay-sabay pa sila mag run, are individual threads. Through threads, parallelism (parang pipelining, pwedeng sabay-sabay mag run kasi independent sila sa isa't-isa, di na need maghintayan) occurs.
- In light of this, the heirarchy of programs in a system unit is as follows:
	- **Process > Threads > Instructions**, where in process contains either one thread or multiple threads and a thread contains multiple instructions.

- Threads share the same memory address and code (since threads are in a process) pero they have different program counters (IP) and registers. You must remember na a thread IS A SET OF INSTRUCTIONS sa isang process. Each thread has an individual program counter because it helps the thread keep track what next instruction to execute. 
- In relation to threads in processors, given a single-core CPU, a CPU thread simply executes threads in its own ALU. Given a 1 core, 2 thread CPU, at every clock burst, 2 threads in a process is executed. Eh andaming threads sa process tas meron kang dalawang process in execution, tgrabaho yan ung context switching, in conjuction with OS schedulers, to make it seem an di laggy ung performance.

# TYPES OF THREADS
1. **User Threads**- these are threads that happen on user mode (process mode 0) without the need for system calls and operating with the need for kernel threads. Through this, the programmer is able to create threads in a process that only run on user mode. Through the utilization of different libraries provided by a program language, the programmer is able to utilize these threads to prevent system calls.
	- **Thread Libraries**- These are essential API's that developers utilize in order to create user threads. This can be either API's that can run on process mode 0 lang or API's that can invoke system calls to talk with kernel threads. An example of a User Thread Library is **PTHREAD** and **JAVA THREADS (JVM)**. (See Thread Handling below for more information.)

2. **Kernel Threads**- These are threads occuring at process mode 1. If a user thread requests an OS service,  the user thread goes to API to invoke a system call in the OS. The OS creates a kernel thread in response to that system call then returns the service request to the API then to the user thread.

# MODELS OF THREADS
1. **Many-to-One**- Multiple user threads are connected and managed into one kernel thread.
2. **One-to-One**- Each User Thread has a corresponding kernel thread. This results to concurrency.
3. **Many-to-Many**- Enables multiple user threads to be connected to multiple kernel threads. This means that user threads can be shared on different kernel threads in execution.
4. **Two-Level**- Malay ko di na toh mahalaga.

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

# THREAD HANDLING
- Due to increasing of threads in contemporary programs, Implicit Threading has been introduced with its various methodologies in order to simplify programming of programs as well as improving its efficiency to process.
- **Implicit Threading**- methodlogy generated as a response to multi-threaded processes. It leaves creation and management of threads to the compilers and API's rather than programmers create threads for the API to handle. There are three common methodologies for Implicit Threading:
  
	1. **Thread Pools**- Sa isang pool meron nang mga nakahandang threads to be utilized. When called for, these threads are taken out of the pool, utilized depending on the function of an instruction, then put back in to the pool. Through this methodology, there is no need for creating and destroying threads.
	2. **Open MP**- API for thread handling for C, C++, and Fortran programming languages. Its basically adding a 'compiler' sa code mo that converts these into automatic threads.
	3. **Grand Central Dispatch**- API para sa mga apple devices.

# THREADING ISSUES
- There are problems when it comes to thread handling. The following should be considered in finding issues in threading:

	1. **Signal and Signal Handling**- A signal is basically a notice to a process or thread on the recent happenings on a process or thread. As Signal handler acts as a buffer which processes these signals from an event and delivers that to a process. Given a multi-threaded process, how does the handler send a signal to the thread? It can be through sending that signal to a thread where useful sya dun, deliver it to all threads, or to certain threads lang. It depends on how the signal handler is programmed.
	2. **Thread Cancellation**- Biglang pagkamatay ng isang thread. There are two types of thread cancellations:
		A. Asynchronous Cancellation- immediate termination of thread once a call is given.
		B. Deffered Cancellation- Check muna if exit or terminate the thread.
	
	3. **Thread-Local Storage**- A copy of the data of a thread. Pang backup shit.

Schedule Activations
Windows Threads
Linux Threads