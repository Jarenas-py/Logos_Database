Assembler: Emu8086

Assembler -> Object -> Executable

Case Study

INSTRUCTION SETS
- An instruction set is a set of machine language commands or instructions that talk directly to the system CPU in order to be executed immediately. Think of it as a toolbox with the tools inside it being the instructions. The toolbox is utilized by the handyman in order to perform tasks. Since the handyman knows how to work with these tools, he can easily executre and do tasks using those tools in his toolbox.
- The process of an instruction set are as follows: The process is as follows: The Control Unit of the processor fetches an instruction from the program counter. The program counter is a CPU register that keeps track what next instruction from the memory does the CPU execute. After the ALU of the CPU does its calculations to  execute the program, the Program counter sends another instruction to the CU of the processor.
- Drivers: when hardware doesnt know how to talk to firmware, driver is the one that does it (e.g. Nvidia Drivers, Intel Drivers). 

TYPES OF INSTRUCTIONS SETS
1. CISC (Complex Instruction Set Computer)- From the word complex, each instruction in an instruction set have microcode. Meaning each instruction in CISC are programmable and can do multiple processes. TLDR; Tools in toolbox can do multiple functions.

2. RISC (Reduced Instruction Set Computer)- RISC is an instructions set type that instead of singular instructions in a set being programmable or having microcode, these instructions do a single task only. Furthermor, RISC devices also complete instructions in one clock pulse each. Because of this, the execution of instructions is faster than cisc. However, if there is a process that reauires multiple instructions, more registers are needed for RISC as unlike CISC that can do multiple shit in one instruction, RISC must make multiple instructions in order to emulate that since one instruction does a singular task only.

CATEGORIES OF INSTRUCTION SETS
- Categories of instruction sets refer to the grouped functionality of each IS.

1. Arithmetic Instruction Sets- Instructions do mayh and calculation executed by the CPUs ALU.t
2. Data Transfer Instruction Set- Instructions help in data transfering in between registers and memory.

3. Bit Manipulation Instruction Set- Instructions that manipulate registers, stored values, and so on.

4. String Manipulation Instruction Set- Instructions that manipulate string. Self explanatory nigger.

INSTRUCTION EXAMPLES
1. Program Execution Transfer Instruction- Giving control for CPU given a program execution. May pagka-scheduler sya.

2. Processor Control Instruction- Controls the P-State, performance, frequency and other CPU shit ng CPU.

3. Iteration Control Instruction- Para sa mga loops.

4. Interrupt Instruction- are immediate calles coming internally by the system or externally from hardware hence the name 'interrupt.' Example, kapag umiinit na ung processor, it will send an interrupt to override the CPU and drastically reduce performance to reduce fucking heat. There are two types of interrupts namely:

i. Maskable- Maskable interrupts refer to important interrupts but can still be ignored by the CPU for execution. Although they are interrupts, if there are more attention hungry instructions needed for CPU execution, these maskable interrupt instructions ay pwedeng iisantabi muna for those aforementioned interrupts.

ii. Non-Maskable- These type of interrupt instruction requires the upmost attention and immediate execution. For example, nagiinit processor, a system call interrupt can be issued para pahinaan significantly ung p-state ng processor to reduce its heat. This is non-maskable since bawal siyang iignore lest gusto mong pumutok ung system mo.

HOW ARE INTERRUPTS EXECUTED (https://medium.com/@vinita.palaniveloo/interrupt-service-routine-eb38e5dd5058#:~:text=Interrupt%20Service%20Routine%20(ISR)%20is,service%20routines%2Finterrupt%20handlers).)

-  When there is an interrupt (e.g. keypress, or some immediate shit that comes external from peripheral devices), an interrupt signal is sent by the Programmable Interrupt Controller (PIC). This is only if the interrupt signal comes from a hardware level. If it is within the system unit, then that interrupt signal directly travels to the CPU instead of the PIC or interrupt controller. If the CPU is doing a task prior to an interrupt, it saves it state for it to be continued later when the interrupt is done processing. Afterwards, the ISR (Interrupts Service Routine) within the CPU is activated in order to acquire the address of the interrupt in the IVT (Interrupt Vector Table). This table is a data structure that contains all of the interrupts and what the CPU will do in order to counter/execute those. When the specific interrupt address for execution is found to handle the interrupt, the ISR gets that address and executes that. After the interrupt is done executing, the CPU gets the previous task it was doing and finishes that. Do note that the IVT is stored in memory, specifically in memory 00h kaya nga kung makikita Iyo a .com style ng assembly, may segment offset eh. IVT is something akin to the PSP ng .com assembly.

- After POST (before loading the bootloader), the BIOS or UEFI sets up the IVT (data structure that contains ISRs) in RAM (most probable in the 0x00000 - 0x003FF). After setting that up, the BIOS or UEFI goes to the bootloader and loads the OS from storage. Then the OS changes the structure of the IVT so that it can handle interrupts better. 

- If you want to find the instruction set given a windows 11 device, go to device manager > view > View Resources by Type then you will see all the interrupts in a proc on the main screen.
 
POST- Power On Self Test-Initialize hardware. Checks all hardware if working and powers on, if it has error or not. Beep code of motherboard tells the type of error of ur system unit. 

LESSON 1

COMPUTER
-  A computer is a machine that is programmable and has the ability to do instantaneous calculations in order to run processes, instructions, and programs. The calculations are the basis on how computers operate especially when executing processes. 
- Processes contain multiple instructions, data, and other information. They have a unique identifier called the Process ID (PID) and have their own memory location to avoid interference between other processes before execution.

PROCESS
- A process in the context of computers are instances of a program that is executed by the system unit. These processes have 

HISTORY OF COMPUTERS
1. Electronic Numerical Integrator and Computer (ENIAC) (1945)- Developed by John Presper Eckert and John Mauchly, the ENIAC was the first electronic digital computer. Meaning that its functions and way of executing and outputting instructions are all done in a digital manner through the utilization of electricity. It was used in the US Military for military calculations, specifically artillery trajectory tables (artillery coordinate boom booms nigga).

2. Electronic Discrete Variable Automatic Computer (EDVAC) (1946)- is the world's second electronic digital computer and is the successor of sorts of the ENIAC. It followed the "stored-program" model wherein instead of instructions being edited externally (through punch cards during the mechanical era of computers), instructions are to be stored on the EDVAC memory for convenience sake. Furthermore, this computer followed the CPU architecture of it being divided by the ALU, CU, and Memory Unit and I/O. This type of architecture is used in today's computers.

DIFFERENCE OF COMPUTER ARCHITECTURE AND COMPUTER ORGANIZATION
1. Computer Architecture vs Computer Organization is more akin to being theoretical and practical respectively.
2. Computer Architecture refers to design and functionality of a system unit while computer organization shows how these functionalities happen given the design of the computer.

Central Processing Unit (CPU)
- The CPU is a component of a system unit that processes and executes processes (that are in machine language format) that are stored on the memory of the said system. 
- The CPU follows a Fetch, Decode, Execute and store system. When executing a process, the CPU fetches first the instruction from memory. The processor then decodes those instructions in order for it to know what to do. Through the ALU, the processor does the necessary calculations in order to properly execute the program based on its instructions in machine language. Lastly, if necessary, the results are stored back to memory or the ROM of the system unit.

PARTS OF THE CPU
- In this section, I am to discuss the parts of the CPU with its basis being the Intel 8086 as it shows the simplest way to explain modern CPU sectioning. With that in mind, this means that the operations stated when executing processes is in real mode.

I. Bus Interface Unit (BIU)
- The BIU is the part of the CPU that facilitates communication between the EU and the memory and I/O events in a CPU unit. 
- Since it is a bus, the primary function of the BIU is to facilitate transfer of data so that the CPU will know kung san niya huhugutin ung mga instructions na kailangan niyang i-execute. A better way to say this is that BIU ung taga-hugot ng instructions, bringing them to the EU for execution.
- Since hindi connected ung CPU sa system busses, the BIU does the job to replace that functionality.
- The BIU has also different parts that make up its functionality:

i. Instruction Queue- The instruction queue is a data struct within the BIU. Each instruction is 6 bytes and instructions that are to be processed are stored in this data struct. When the CPU is executing an instruction, other instructions to be executed would be stored inside this queue which will be called out once the processor is done executing an instruction.
- The concept of pipelining can be introduced in this case since pipelining is utilized in this particular occurrence. Pipelining is defined as the reduction of steps when executing instructions by operating the steps of CPU execution in parallel rather than in a sequential manner. In this instance, may pipelining sa part ng instruction queue because while the processor is executing an instruction, the instruction queue is continuously obtaining other instructions that are requesting for the CPUs execution. Kesa sa hintayin ng instruction queue na patapusin ung CPU mag execute ng instruction, the instruction queue does not wait for that and instead gets instructions continuously. This is the basic type of pipelining.

ii. Segment Registers- The segment registers in the BIU holds the addresses of the datas ng isang instruction, it also contains the pointer para malaman ni EU ano ung next instruction na i-eexecute (which are all stored in the instruction queue). 

A. Code Segment (CS)- Holds the address ng mismong code ng instruction. The code of an instruction ay ung mismong instructions that make up the functionality of the instruction. As stated, the CS holds the base address of the code part of an instruction. The CS works in conjuction of the IP which contains the offset (hence segment:offset) that will guide the CS to the actual physical address of an instruction in memory.
B. Data Segment (DS)- Holds the base address of data of the instruction. These data refer to the strings, variables, characters that may contribute to the display of the program or storing of values. Works in conjuction wit the SI which calculates the physical address of the data of an instruction through the offset of SI.
C. Stack Segment (SS)- Stores the memory address ng stack. Stack contains local variables, function calls and other CPU stuff that we dont need much. Works in conjuction with the SP which applies an offset to the base address of the SS in order to find the actual physical address of the tack in memory.
D. Extra Segment (ES)- extra shit lang kapag na-ulol ung instruction. Extra functions ay dito iniistore. Works with conjunction with DI in finding the actual physical address through the offset stored in DI.

iii. Offset Registers- Sila usually ung mga "pointer" registers that help the segment registers locate the physical address of whatever shit they are holding to.

A. Instruction Pointer (IP)- Holds offset to work with CS.
B. Source Index (SI)- Holds offset to work with DS.
C. Stack Pointer (SP)- Holds offset to work with SS.
D. Destination Index (DI)- Holds offset to work with ES.

HOW IS THE PHYSICAL MEMORY CALCULATED?

Physical Address = (Segment Register * 16) + Offset Register

Segment Register= Base Address stored within the S.R.
16 = Kasi each segment ay 16 bits (2 bytes) lang ang kayagn hawakan.
Offset Register= Offset na hawak ng offset register.

Furthermore, if mapapansin mo, if the segment registers hold the base address of their respective segments, why is there a need for an offset? That is because base address refers to the starting point lang ng isang segment. Like halimbawa meron kang i= range[0, 10], the base address only references zero hindi 0-10. The offset helps the segment register access the totality of the segment, hindi ung starting point lang nun. 

II. Execution Unit (EU)- Does the actual execution of instructions in a system unit.

i. ALU- does all the arithmetic and logical operations. The actual executor of instructions.

ii. Flag Registers- flag registers act more as an indicator for the CPU as a reference to keep track on what it has done, and what to do next when executing an instruction or processes. These registers are divided into two:

A. Conditional Flags- group of flags that are all based on the result of the ALU. This is divided further into 6 flags:

	a. Carry Flag (CF)- Operation overflow. Remember that registers in a CPU when ran in real mode can only store up to a certain amount of bits. When the result of the ALU results to the space being higher that of the threshold of the register it stores in, CF goes high, otherwise, low.

	b. Auxiliary Carry Flag (AF)- Checheck niya kapag may BCD conversion to decimal, nagkakaroon ng carry over. If may carry over, then AF high.

	c. Parity Flag (PF)- if binary is even, PF high, else low.

	d. Zero Flag (ZF)- If ALU arithmetic result is 0, then high. Else, low.

	e. Sign Flag (SF)- If ALU arithmetic result is negative, SF high. Else, low.

	f. Overflow Flag (OF)- Parehas lang ng function sa CF. Idk wtf parehas sila ng function.

B. Control Flags- Dictate how the CPU operates
	a. Trap Flag (TP)- set high para step-by-step execution niya ng instructions.

	b. Interrupt Flag (IF)- Hahayaan ung interrupt insructions? High if yes, low if hell nah.

	c. Directional Flag (DF)- Pano process ung mga instructions? from low to high register or vice-versa? Kaw mag-set niyan.

iii. General Registers- holds different data of the instructions na hinugot mula sa instruction queue para systemized ung pag execute niya. Think of it as something like an organizer. Before you study shit, ioorganize mo muna (general registers) ung mga gamit mo (datas and values) galing sa bag mo (instruction queue) para makapag aral ka ng maayos. Parang ganun din ung mga general purpose registers. Nakahati siya sa apat in 16-bit spaces:

	a. AX Register (AH, AL)- Accumulator Registers. Stores operands para sa arithmetic shit.

	b. BX Register (BH, BL)- Base REgister. Base address ng istructions dito iniistore.

	c. CX Register (CH, CL)- Counter Register. Stored value is used for loop. Kaya ito ginagamit for looping in assembly eh.

	d. DX Register (DH, DL)- Data Register. Mismong data ng instruction para makapag input and output ka as a dev or as an end-user. Hence ito ung ginagamit for stroning character values sa assembly.

- Do take note that these registers are divided into two 8 bit registers. High, and low, for more customizability sa data na pwede mong store in these variables.

iv. Control Unit (CU)- directs the operations in the CPU. Siya nag didictate kung ano gagawin nina flags, registers, ALU. Siya ung commander in chief ng EU.

REAL MODE OPERATION
- Take note first that instructions are lines of code within a process that make up what a process does. Also take not that a process is an instance of a program stored on a disk meaning within a process contains instructions that define what a process (program) does. In real mode, without an OS, the address of an instruction from a process to be executed is snitched to the segment registers of the BIU. The addresses of these are then transferred to the instruction queue to queue those instructions before being executed by the EU. After an EU finishes executing an instruction, the CU of the EU fetches an instruction from the instruction queue and brings that specific instruction to the ALU for execution and calculation. This is only without an OS because when there are multiple processes that need the attention of the CPU, the processor will only prioritize the process it is only currently executing before moving to the next one. 

SYSTEM BUS
- This is the channel inside the system unit in which the transmission of data between hardware in a system unit occurs. The system bus has different types that does different functionalities:

i. Data Bus- carries the actual data of an instruction or process (e.g. numbers, text, instructions).
- The data bus is responsible for the actual flow of data from processes or instructions to different parts of a system unit. The data bus also deals with how much data can be transferred at every cycle. This is known as the data width. The data width refers to the width of the data bus which determines how much data can be transferred per clock pulse or cycle. There are "fixed" data bus widths, specifically 16-bit (which means it transfers 2 bytes per clock pulse), and the modern 32 and 64-bit data bus (4 and 8 bytes per clock pulse respectively). These determine how fast data transfers occur in a system unit. Take the bytes of this data widths, it says na at every clock pulse, un ung number of bytes that it can transfer in-between hardware. If a processor has a clock speed of 3ghz per second, then at every 1 second, given a 64-bit system or data width bus, the system has data transfers of up to 8 x 3 x 1 000 000 000 per bytes per second which is massive data transferred in a singular second.

ii. Address Bus- Specifies where the data goes in the memory. When data is called from an insruction or process, kukunin niya muna sa memory and the address bus does that facilitation of transmission. Then it goes to the data bus when that data is called for by another hardware. Address Bus also has width called the address bus width. It is utilized as the same but in RAM. The Address bus width determins how much RAM a system unit can use (hence address meaning addressable memory). To calculate for it, you take 2 raised to the address bus width (which is just based on the number of bytes your system can transfer per cycle e.g. 16-bit, 32 or 64-bit). So for example you have a 64 bit system, then that means 1.8446744e+19 bytes of RAM can be used. Kaya pala medyo unlimited ung number of RAM ung kaya ng isang 64 bit system where as kapag 32 bit,a measely 4gb of ram lang pwede.

OPERATION ON HOW DATA AND ADDRESS BUS WORKS TOGETHER
- Given a 32 bit system and a 2 ghz CPU, magtatawag muna si CPU ng isang process.So syempre it would be the job of the segment register and offset registers ng BIU to find that instruction. Those registers would utilize the address bus in roder 

iii. Control Bus- Read and write operations.

CODING STUFF, ASSEMBLY, AND MACHINE LANGUAGE

Machine Language- Is the native language of the computer. It is its native language because that is simply how hardware operates. A computer is just a system of logic gates (derivation transistors) that are just going high and low (1 and 0; current flow or no current flow; binary) which does something in order to show an output, do an instruction, or do tasks in a MAAAAASSSSSSSSIIIIIVVVVVVEEEEEEEEEE SCCCCCAAAAAAALLLLLEEEEEEEE. Isipin mo ung motor stuff na ginawa natin kay sir de asis, or ung mga 7 segment display bcd to decimal, The high lows, 1 and 0s binary shit na ginagawa natin dun are an oversimplification of how computers operates. Oversimplification kasi as stated earlier, computers also operates the exactly the same but in a large large large large large large large large large large large large large large large large large large large large large large large large large large large large large large large large  scale.

Machine Language has an op code and an operand:

	i. Op Code- In machine language, op code refers to the operations that a CPU will do.

	ii. Operand- Refers to the values stored in the registers that are to be used by the op code in order to accomplish a calculation.

Compilers- converts human readable mnemonic codes into machine language so that the system unit can execute them properly. These have levels:
	
	i. High-Level
	ii. Mid-Level
	iii. Low-Level- Assembly and machine code is a part of this since their code structure is more closer to how a computer operates. 

Assembly- A programming language that shows a 1:1 ratio of code structure as to how CPUs and memory execute instructions and processes in real mode. They consist of the following.

	i. Label
	ii. Operands- refers to the commands mismo when calling registers, storing values in them, or doing other functions through those registers.
	iii. Comments
	iv. Mnemonics- un ung human readable code that is used in assembly instead of fucking 1010101010101011000111001001001010. Who the fuck can code with this?!?!

- Assembly also has tools that help developers in when coding in that language:

	i. Assembler- converts the assembly code into an executable .exe or .com program
	ii. Linker- Nigger
	iii. Debugger- When you execute an assembly program and there are errors in it, the assembler becomes a debugger, telling the developer which line has an error and the error code associated with it.
	iv. Emulator- Some assemblers emulate 16-bit and 32-bit OSs such as DOSBox for instance. 

CONVERSION OF NUMBER SYSTEMS AND SHIT

- The conversion of ascii using hexadecimal equivalent values are extremely straightforward. For instance, you want to convert A to a. First, check the hex value of A (41h) and a (61h). Find the difference of the two which is 20h. Add 20h to the hex value of A. 41h + 20h= 61h or a. YEHEY NIGGA.

- There are different number systems and have respective conversions to each number system:

(alam mo na conversion niyan, refer to seatwork picture)

MEMORY
- Information and data of various instructions and processes are stored in the memory when called for. They are divided into two parts based on their criticality:

	i. Primary Memory- Main memory of a system unit where in essential intrusctions, tasks, and even firmware of the system are found. The following are examples of primary memory

		A. Dynamic Random Access Memory (DRAM)- RAM type used in most system units. They are volatile which means their data loses over time when not supplied by power. This is due to the fact that DRAM has use multiple capacitors to help store the state or the data (1,0) and alam mo naman na ung capacitors ay nag didischarge overtime which explains the volatility of DRAM.
		- When DRAM is transferring data from its memory through different parts of the system, di siya sumasabay sa clock pulse ng CPU. Rather, meron siyang sariling frequency (clock pulse) when transferring data and refereshing its capacitors para di mawala ng ganun lang ng data na hinohold niya.
		- Modern DRAMs have DDR (Double data rate) technology. Ung DRAM na sinabi ko kanina (old shitty ones) ay SDRAM ung technology. Meaning kung ano ung base clock speed niya, un na ung speed niya talaga. Modern DRAMs use DDR technology where in if a DRAM has a base clock speed, DDR technology will double it for faster speeds. DDR works like the Phase Locked Loop (PLL) ng processor pagdating a clock speeds. CLKIN_H & CLKIN_L Differential clock pulses are base DRAMs that have their base clock speeds and the DDR acts like the PLL that multiples, doubles, or scales up the base frequency of DRAM para mas mabilis siya mag run every cycle.
		
		B. Static Random Access Memory (SRAM)- Utilizes flip-flop circuits instead of capacitors for storing data and transferring data for CPU execution. Significantly faster than DRAM but more expensive. Usually found on the caches on CPU.

		C. PROM, EPROM, & EEPROM- Programmable Read-only Memory (PROM), Electronic Programmable Read-only Memory (EPROM), and Electronically Eraseable Programmable Read-only Memory (EEPROM) are non-volatile memories meaning that even though when power is off, they do not lose their data. These types of ROM components are usually utilized on storing the firmware of the motherboard there along with the settings the end-user has set. Because the firmware and its settings needs to be saved an accessible at all times even without power, this technology is used para di sila mawala and mareset every system unit power cycle. 
		- In this section, I will explain how each of these ROMs retain their data:

			a. PROM- During manufacturing, a PROM Burner is a device that physically burns fuses inside the chip to make certain gates have an output of 0 or 1 tapos fixed na un. These fuses are burned permanently kaya nga burned eh and because of that, kahit walang power, naka ganun na ung mga states niya forever until masira. Because of this, that makes the PROM not programmable and rewrittable anymore.

			b. EPROM- Floating-gate transistors (specifically MOSFET transistors) are utilized in order to trap electrons inside the chip. Because there are elecrtrons trapped inside the chip, kahit i-off mo ung system unit, the floating gate transistors thrtough mosfets trap those electrons inside through a process called "Electron Trapping" that retains the data state ng information and settings stored within the EPROM. To erase the data, may slit ung chip where in when UV light is applied, data is fully erased.

			c. EEPROM- Same function as EPROM but does not require UV light to erase data. 

	ii. Secondary Memory- Also known as auxiliary memory. This is where data is stored in the long term. 
		
		A. Hard Disk Drive (HDD)- Slower form of storing data which uses a magnetic disk to store its data and an actuator arm that acts as the one that reads and writes data within the magnetic disk. Because of this mechanical way of reading and writing memoryy, it is usually slow.

		B. Solid State Drive (SSD)- They do not have moving parts and utilized flash memory technology to store and access data. (Note: Research NAND or Flash Memory Operation)

		C. Flash Memory- Mga flash drives and external memory shits.

- The Memory unit that directly communicates with the CPU is called the main memory (primary memory).
- Cache- Special memory that aggregates frequently used instructions by the CPU and stores it there so that on a power cycle, CPU can directly access those instructions for better effieciency. 

PROTECTED MODE
- Protected Mode is a more advanced and efficient way on memory addressing and accessing processes and instructions in memory. This allows for multiple process multi-tasking instead of the real mode na although may pipelining, isa lang ung kaya niyang process na i-execute sa ALU.
- Protected mode has either 1 or two stages depending on the system employing this mode of memory addressing. This is in either Segmentation or Segmentation and Paging

	i. Segmentation- The process of segmentation is as follows. The BIU, specifically instruction queue is always finding the next process to be executed by the EU (ALU). Kukuha si Instruction Queue ng isa pang process through the segment register ng BIU. Since this is protected mode, specifically segmentation, the segment register is contains a Segment Selector. Ang ginagawa ni segment selector is para siyang pointer or path that guides the segment register to the Global Table Descriptor. Ung aim kasi ni segment register is to get another process for execution. And when a process is to be executed, through the segment selector, huhugutin ni segmenter register ung process na un through the global table descriptor (GDT). The GDT is a whole ass list of descriptors stored in the RAM. Descriptors are essentially processes or instructions that have their own format. Instead of code, data, and stack na makikia mo sa programs in real mode, descriptors have base address, limit, and access rights. Base address in a descriptor means the  memory address where the descriptor is located in the GDT. Limit is the file size so to speak ng descriptor. Lastly, accessrights contains ung mismong instructions (code), tas kung executable ba siya or read-only lang. Once the descriptor is acquired by the selector, kailangan niya i-computer ung linear addess niya (ung ACTUAL address ng descriptor/process inside the RAM) by adding an offset para maadjust ng CPU kung san niya huhugutin ung descriptor. Once that is calculated, ssnitch ni segment selector sa segment registers ung base address ng descriptor, along with its limit and access rights. The descriptor goes into insruction queue, then to the EU, then executed by the ALU. This is only without an OS because when there are multiple processes that need the attention of the CPU, the processor will only prioritize the process it is only currently executing before moving to the next one. 

	ii. Segmentation and Paging- Lahat ay same process as sa segmentation up until to the part after linear addressing is done calculating. Paging is done by dividing memory (RAM) into blocks or "pages." Here's how it works, in paging, the RAM is divided into pages. Each page has a memory address called "frame" (think of the frame as the words in a page). Ganun lng ung paging. Now going back sa segmentation and paging, after calculating the linear address, aaccess ni paging system ung linear address that was calculated, check the pages and the frames based sa linear address para ma pinpoint ung pinaka precise location in RAM kung nasan ung descriptor or process na un. After it is found, ibabato na niya un pabalik sa segment register, to the instruction queue, to the EU, specifically sa ALU for execution. This is only without an OS because when there are multiple processes that need the attention of the CPU, the processor will only prioritize the process it is only currently executing before moving to the next one. 

