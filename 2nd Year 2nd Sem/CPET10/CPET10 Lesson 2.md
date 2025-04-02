CPET10 Lesson 2

OS SERIVCES
- Refers to the services that an OS provides to the user in order for the user to either properly navigate the services of the OS or the OS executing the task given by the user. These can be the following:

	I. GUI/CLI/Batch- Service of an OS which provides an environment an user can utilize in order to interact with their system unit through the OS in order to run tasks with it. (Batch is an old type of user process execution wherein they use punchcards to do tasks (which were called batch in this context)).
		i. CLI- Command Line Interface is a way for the user to interact with the OS of their operating system wherein users enter string-like commands in order to send instruction calls to the OS for execution of a process/instruction/thread. A customized version of a CLI is called "shell." They can either be built-in on the kernel of the OS or can be made as a system software.
		ii. GUI- Graphical User Interface is a more intuitive and user-friendly way for a user to easily navigate their OS and the resources of their system unit. Xerox PARC was the first company to introduce and invent this concept. Windows, Apple, and Linux all have GUIs with CLIs underneath them for the user's perusal. Furthermore, smartphones also have a GUI called "Touchscreen Interface" solely utilized for touchscreen user input instead of the usual mouse and keyboard.

	II. Program Execution- CreateProcess(), ExitProcess(), 
	III. I/O Operations- SetConsoleMode(), ReadConsoleMode(
	IV. File-System Manipulation- ReadFile(), CreateFile()
	V. Communications- CreatePipe(), MapViewOfFile()
	VI. Error Detection
	VII. Resource Allocation
	VIII. Accounting
	IX. Protection and Security- SetFileSecurity(), InitializeSecurityDescriptor()

- All of these services are grouped through who can access what. I. is managed by the user. Through the GUI/CLI/Batch, a system call (the request done by the user through their input from the GUI or is made for the OS where in its various services (II. - IX.) can be utilized depending on the instruction of a user. Lastly, the hardware provides the resources needed by the services in the OS in order for the OS to actually do its service as commanded by the user.

DUAL MODE OPERATION EXPOUNDED
- Given the OS Services, the process of dual mode is expounded and as follows:

	1. Currently process mode bit is 0 (user mode). In the GUI, the user requests an instruction wherein special hardware privileges are needed (reading and displaying a file). The GUI sends that instruction to the API.
	2. The Application Program Interface (API) helps in converting these instructions or requests by the user into system calls. APIs are there in order to prevent the developer to formulate direct system calls sa code nila. Instead, they can access APIs (programming languages in this context) para sila na ung mag-coconvert ng mga un into system calls. 
	3. After the instruction goes into an API, it is successfully converted into a system call. A system call is an instruction borne from the request into a user that is converted in order for the OS to understand what service this instruction request is trying to access. In this part, the process mode bit becomes 1 (kernel mode)
	4. System call enters kernel mode and the OS decodes the system call to know what service to execute (in this case, File-System Manipulation).
	5. The OS send the system call and utilizes the resources of the hardware to execute the system call. 
	6. After the system call is executed successfully, the output is then sent to the API (process mode bit becomes 0) and is sent to the GUI for display.

PARAMETERS AND SYSTEM CALL PARAMETER PASSING
- Parameters are specific instructions (values) and indicators within a system call para malaman ni OS kung anong specific services and resources ung need i-access. Think of parameters as variables containing values and these variables are what tell the OS what specifically to access.
- These parameters are stored within the kernel and is called upon the system call when these parameters are needed. This is because system calls cannot have their own paramters due to security reasons so set parameters should be stored inside the system in order for the OS to confirm that they are safe. There are different methodologies for storing parameters (Parameter Passing):

	I. Register Parameter Passing- User mode program places parameters in cpu register. Parameters are stored in the CPU's register para rekta execute na when the system call calls for it. The problem with this ay since limited lang ung register, when multiple parameters are needed, di kakayanin ni register i-store lahat un. Fasters method.
 	II. Memory Parameter Passing- Parameters are stored on a set address in memory. Better for multiple parameter but slower in nature.
	III. Stack Parameter Passing- A parameter is placed on a stack. The kernel mode accesses this stack in the RAM placed there by the user mode program. 

SYSTEM PROGRAMS/SOFTWARE
- Although they are software that are part of the OS, they still utilize API and the parameters of the kernel in order to function properly. In Windows, examples of system programs are Registry Editor, File Explorer, Task Manager or any program that is embedded within the OS.

OPERATING SYSTEM DESIGN AND IMPLEMENTATION
- On designing an OS, there are goals that need to be realized in order for an OS to both function properly and be easily accessible to the user. 

	I. User Goals- OS should be convenient to use, easy to learn, and responsive
	II. System Goals- OS should be easy to design and maintain. It should be error-free.

- OS Design has principles:

	I. Policy- Requirement Specification
	II. Mechanism- How to do it based from the requirements.

OS STRUCTURES
- Refer to the design type of an OS as well as its strucuture. By structure, it means kung pano at ano-ano ung pag-access at ung may access ng isang OS sa hardware given a system unit.

	I. Microsoft Disk Operating System (MS-DOS)- An OS can be structured as an MS-DOS. MSDOS is the most simplest OS with a CLI based input system for the user to call out functions for instructions. Because of how simple it is, MSDOS run in kernel mode. Furthermore, this OS structure does not have any APIs or system calls since kernel mode na siya kagad nag-rurun. Rekta interrupts and instructions na lang siya nag-rurun. It is monolithic, meaning everything runs in the kernel.
	II. UNIX- Dito nagsimula ng user and kernel mode dual mode operations. 
	III. Layered Mode- Ung kada operation and services sa kernel mode ay naka layered based on their privileges with respect to the security of the OS. Top most layer ung user mode stuff, then sa kernel mode, naka layer ung weakest OS service (file management, IO operations) then sa pinaka low-level layer ay ung mismong hardware.
	IV. MicroKernel Structure- Some OS services ay nakaembeded na sa user mode instead of kernel mode for easier and faster requests (di na dumadaan API nor making system calls). 
	V. Hybrid Systems- A combination of different OS structures for efficiency and functionality. Windows uses a monolithic + microkernel hybrid structure of an OS.

KERNEL MODULE
- These are lines of code within the kernel wherein you can append or remove these lines of code to change the functionality or add features on your OS without the need to reboot your system. Think of a class in python and within those are multiple methods that define the functionality of that class. The class is the kernel module and the methods are the lines of code that define the different features that kernel module (class) has.

IOS AND ANDROID OS
- Smartphone OS for both IOS and android architecture.

	I. IOS- Runs a layered OS structure where in Cocoa Touch is the user mode GUI for user requests, Media service is the layer for media shit, core services are for the files and database of the system and lastly core being the kernel of the IOS.
	II. Android- Open source OS. 

OS DEBUGGING
- Provides different debugging methodologies in order to help users and developers identify issues that have occurred in the OS or system unit.

	I. Log Files- A Track record of system activities, errors and events that happens to the OS over time.
	II. Core Dump File- Memory of a crashed process before a process fails.
	III. Crash Dump File- Core dump file pero memory ng buong OS before failure.
	IV. Trace Listings- Step by step execution ng isang process or OS process. 
	V. Profiling- analyzing the performance of processes of the OS itself by execution time and resource usage.

PERFORMANCE TUNING
- Profiling.









