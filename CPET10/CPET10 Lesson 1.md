CPET10 Lesson 1

COMPUTER SYSTEM STRUCUTURE
- refers to the architecture composed of a given system unit. It is divided into 4 components:

	I. Hardware- Electronic parts that execute calculations in binary to execute programs.
	II. Operating System- Acts as the intermediary in order for the software to properly talk with the hardware.
	III. Application Programs- instructions or processes that utilize a system unit's resources (hardware in this context) in order to serve a functionality.
	IV. Users- Self-explanatory, nigger.

OPERATING SYSTEM
- The operating system is the intermediary between the user and the hardware of a given system unit in order to do different functionalities without the user actually changing the logical architecture of the system just to do instructions or processes. Think of it this way: Sa class ni Sir De Asis dati, we utilized binary (high, low) and logical gates in order to output different tasks. A system unit is no different but in a VAAAAAAAAAAASSSSSSSSSTTTTTTTTTTTT FUUCKING SCAAAAALLLLLLLLEEEEEEEE. Now, nakakalito sa user if aadjust niya ung circuit ng motherboard in order to output different things or to perform input. The OS helps in simplifying that shit kasi siya na ung gumagawa nun for you.
- An operating system, as stated earlier, does all the work for you. At its core, the hardware of a system unit can only do much. Because of the operating system, the parts of a computing device is utilized as efficiently as possible to provide the best performance to the user. The functionalities of the operating system are not limited to file management, processor management, error checking, managing memory, scheduling of processes to different resources in a system unit, and providing a user interface for the user to navigate on.

KERNEL IN AN OS
- The kernel is the part of an OS that does the actual functions of an OS. Siya ung mismong part ng OS na kumakausap sa hardware and software given a system unit to facilitate smooth allocation of resources.
- Think of Kernel as the engine of the car. The car is the OS that directly interacts with the user (pedals, dashboard, steering wheel and such) and the kernel is the engine that does the actual work the user does on the pedals, steering wheel, and gearbox.

BOOTSTRAPPING
- This refers to the whole process from the initialization of the firmware, to initializing the components, to the OS until it finishes its booting.
- This section will explain how the OS is initialized during system unit startup and boot.

	1. The power supply provides current to the different components of a system unit.
	2. The CPU executes the code in the EPROM/EEPROM to start the firmware that is stored there. (The firmware is the initial software that is shipped with the motherboard that helps facilitate communication between the different components of a system unit so that it can still function and do the most basic tasks without an OS. Depending on the "age" of the components, the firmware can be BIOS (Basic Input/Output System) or UEFI (Unified Extensible Firmware Interface). The BIOS is for legacy systems and only uses keyboard for input. UEFI is better and the more modern firmware which has its own GUI depending on the manufacturer with both mouse and keyboard being an option navigation.)
	3. Power-On Self Test (POST)- Firmware conducts a "test" of sorts to the different components of the system unit it is in to check if they power on properly. If there is a problem, it will provide a "beep code" with its meaning depending on the beep code list by the manufacturer of the motherboard. 
	4. Partitioning Schemes- The secondary memory (HDD, SSD) of a system unit is parititioned (divided) into "partitions" in order to properly organize different stuff in it. The methods of partitioning secondary memory is called "Partitioning Schemes" which have two methodologies depending on the type of firmware used. Master Boot Record (MBR) is one of them. MBR is a partitioning scheme that is primarily used by BIOS legacy firmwares up to 2TB only. The paritioning of is as follows: 
		I. Primary Partition- Contains the OS, OS Kernel, and the bootloader.
		II. Extended Partition- Containes user files and documents.

	- The Globally Unique Identifier Partition Table is another partitioning scheme that is primarily utilized by UEFI firmwares of up to 9 zettabytes only. Its partitioning scheme is as follows:

		I. Protective MBR- Prevent corruption
		II. Primary GPT Header 
		III. Partition Table- List of all Partitions and GUID.
		IV. User Data Partition- Where OS, bootloader and user files are located.
		V. Backup GPT Header
		VI. EFI Partition- Contains the bootloader

	5. After POST, depending on the firmware, the firmware sifts through the partitions on the partitioning scheme of the secondary memory in order to find the bootloader. In BIOS, the firmware finds the bootloader in the Primary Partition. On UEFI, the firmware finds the bootloader on the EFI Partition.
	6. Once the firmware locates the bootloader (e.g. Grub (for Linux), Windows Bootloader (for windows)), the bootloader activates and loads the OS stored in its respective partition into memory.
	7. The bootloader gives control to the memory for the OS to run. The OS does its thing afterwards (does its checks during booting process and shows its GUI afterwards).

STORAGE HIERARCHY AND MEMORY
-See CPET9 Lesson 1-4 for more info.
- Registers > Cache > Main Memory > Secondary Memory (SSD > HDD) > Optical Disk > Magnetic Tapes
- Caching- Type of fast memory wherein the most reoccuring tasks executed are stored there instead of RAM or ROM for efficient execution. Dun huhugot kagad si CPU ng mga tasks na palaging needed para rekta gawa kagad.
- Device Driver- Acts as an intermediary between hardware (device controllers) and the OS so that they can communicate properly. There are different types of device drivers:

	I. Kernel-Mode Drivers- drivers embedded na sa mismong kernel ng OS mo to do the most basic tasks on common device controllers used in a system unit.
	II. User-Drivers- More product specific drivers to provide more functionality to a given device controller.

STORAGE NOTATION AND UNITS IN OS
- Bit- Basic Unit of a computer.
- Byte- 8 bits
- Kilobyte- 1024 bytes
- Megabyte- 1024^2 bytes
- Gigabyte- 1024^3 bytes
- Terabyte- 1024^4 bytes
- Petabyte- 1024^5 bytes 

OS OPERATIONS

TYPES OF INTERRUPT/INSTRUCTION HANDLING

	I. Polling
	- CPU always manually checks device controllers for shit to do. If meron mang gagawin (e.g. keypress), the CPU stops polling and starts executing that shit. If none, CPU wastes time manually checking the device controllers again if may gagawin or nah.

	II. Vectored Interrupt System
	- When there is an interrupt (e.g. keypress, or some immediate shit that comes external from peripheral devices or device controller (another tawag sa mga components), an interrupt signal is generated and stored muna sa local buffer ng device controller na un. The reason as to why stored siya dito is because device controllers have lower clock speed than that of the CPU (which also dictates ung speed of transfer of data sa data bus. If magsesend sya ng deretso, di makakakeep up ung data na isesend ng device controller and mawawala ung data na sinend niya since sobrang bilis ng transfer of data sa data bus). After makapag synchronize ng local buffer sa speed ng data bus, the data will be sent to the Programmable Interrupt Controller (PIC). This is only if the interrupt signal comes from a hardware level. If it is within the system unit, then that interrupt signal directly travels to the CPU instead of the PIC or programmable interrupt controller. If the CPU is doing a task prior to an interrupt, it saves it state for it to be continued later when the interrupt is done processing. Afterwards, the CPU asks the Interrupt Vector Table (IVT) on what Interrupt Service Routine (ISR) stored within IVT in order malaman ni CPU kung ano gagawin sa data it has receieved from the device controller's local buffer. The IVT is a data structure that contains all of the interrupts and what the CPU will do in order to counter/execute those. When the specific interrupt address for execution is found to handle the interrupt, the CPU gets that address of the ISR within the IVT and executes that. After the interrupt is done executing, the CPU gets the previous task it was doing and finishes that. Do note that the IVT is stored in memory, specifically in memory 00h kaya nga kung makikita Iyo a .com style ng assembly, may segment offset eh. IVT is something akin to the PSP ng .com assembly.

DIRECT MEMORY ACCESS (DMA)
- It is a technology that prevents the CPU to read and write data from various system unit components into the RAM. This technology directly connects tasks and data transfers from system unit components to the RAM in order for the CPU to focus on other priority tasks instead. 

MULTIPROCESSOR SYSTEM
- See History of OS for info.

CLUSTERED SYSTEMS
- Multiple computers (nodes in this context) that are connected to one another to share resources (ROM for storage). They have two types:

	I. Assymetric Clustering- One node controls every node.
	II. Symmetric Clustering- No leader node. Each node can act independently. 

- Distributed Lock Manager (DLM)- Mechanism the prevents multiple nodes from overwriting a single resources kapag sabay-sabay nilang inooverwrite un from their shared pool.
- See History of OS for info.

MULTIPROGRAMMING AND TIME SHARING
- See History of OS for info.

DUAL MODE OPERATION
- It is the process of separating different processes executed by the system and processes executed by the user in order for these processes not to clash with each other. They have two categories:

	I. User Mode- Processes by the user.
	II. Kernel Mode- Processes by the kernel/system.

- The process of dual mode is as follows: A system call is needed by the user mode. The CPU triggers an interrupt in response and the OS prompts the CPU to change the processor mode bit in order to change the mode. The processor mode bit ay ung indicator lang ni processor kung ano ung mode niya (if user or kernel; 1 for kernel mode, 0 for user mode). Processor Mode Bit becomes 1 and executes that system call. After system call execution, processor mode bit goes back to 0.

PROCESS AND THREADS
- One must first be familiarized with these terms before tackling process execution.

	I. Instruction- refers to the machine language instruction that a CPU executes. Think of a code, each line of a code is an instruction.
	II. Thread- Set of instructions that do a set of functionalities.
	III. Process- Defined by the thread it has that defines its functionality.

- There are two types of processes:

	I. Single-Threaded Process- Refers to a process containing only one thread. Because it only has one thread, it only has one program counter. The program counter is defined as a data struct that contains which instruction is to be executed next inside a given thread in a process.
	II. Multi-Threaded Process- Refers to a process containing multiple threads (for example a program counter loads the video and handles user input as well (v games)). Because it has multiple threads, it also has multiple program counters with respect to the number of threads it has. 

MEMORY, STORAGE, AND MASS-STORAGE MEMORY MANAGEMENT
- Other functionalities of an OS. Self explanatory.
- When it comes to transfer of data, data follows the storage hierarchy. For example, if A is up for execution, then it goes from secondary memory to main memory, to cache, then to the registers.

PROTECTION AND SECURITY
- Refers to the steps taken by the OS in order to properly execute processes without them bumping into each other when these processes try to access resources in a system unit. This also refers to the steps taken by the OS to prevent viruses.
- For example, in order to protect files and prevent errors, the OS has DMA and DLM (as stated earlier in clustered systems) to prevent loss and overwrite of data respectively.
- As for security, the OS has UIDs, GUIDs and privilege escalation to enforce security privileges on users in an OS. 

	I. User Identity (UID)- Each user in an OS is given an ID (UID) which tells the OS what files and stuff each UID has.
	II. Group User Identity (GUID)- Same as UID pero for groups or clustered systems.
	III. Privilege Escalation- A given UID can be given more rights (and even access files of other UID).

COMPUTING ENVIRONMENTS
- Check History of OS. Specifically Network Systems.

	Virtualization
	- Enables an OS to run another OS within it.
		I. Emulation
		II. Virtualization

- Open Source OS- source code is available to user to change stuff (code) in the OS.