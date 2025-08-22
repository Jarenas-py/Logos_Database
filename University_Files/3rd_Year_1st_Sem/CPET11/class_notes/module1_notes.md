Module 1 Notes - Introduction to Micoprocessors and Microcontrollers

I. MICROCOMPUTERS

1. Microprocessors and Microcontrollers- according to the module, refers to a subject that delves into theories relating hardware and software compotnents for machine development. Fields and industries such as Computer Science, Electronic Engineering and the like are integrated all into this subject.

2. Microcomputer- Device with at least the following components: microprocessor, memory, and I/O device.

II. HISTORY OF MICROCOMPUTERS

- 2nd BC - ABACUS - World's first calculator which was mechanical in nature. Utilizing beads and strings for calculations which were first made by the Chinese which to them was known as "Suanpen." It is considered as the world's first computer not because it is powered by electricity, rather because it fulfills the fundamental definition of computing (performs calculations to aid humans, there is I/O, it can store memory (yung mga beads), and so on.

- 1st Century BC - ANTIKYTHERA MECHANISM - Mechanical computer that aided in calculating astronomical phenomena such as lunar phases and the position of the sun. More utilized for calendrical purpose. Made by the ancient greeks. It was considered a much more complex computer as it used multiple gears for to achieve calculations.

- 8th-9th AD - ARABIC NUMBERS - Numerical Symbols. Basis of computing. India was the proponent which was later adopted by the Arabs (Module 1).

- 1500 - DA VINCI CODE - Refers to the sketches of Leonardo Da Vinci's Mechanical Calculator. The physical calculator did not exist, however, he was the first person to make a detailed sketch/blueprint of a mechanical calculator long before an actual one was made. It ran on 13 rotating gears that worked together to perform addition and subtraction operations. 

- 1642 - PASCALINE - Refers to the actual first mechanical computer made by Blaise Pascal. 

- 1837 - Telegraph - Electrical signals that were sent for radio communications that was made by Samuel Morse.

- 1840 - BOOLEAN ALGEBRA - Truth Values of 0 and 1 which was the basis of machine language. This was later called as binary logic. This was created by George Boole.

- 1870 - TYPEWRITER - Mechanical device utilized as an alternative to writing which greatly accelerated printing. This was the basis of input systems such as keyboards. Created by Sholes, Glidden and Soule and was initially called the "Sholes and Glidden Typewriter."

- 1874 - SEMICONDUCTOR DIODE - You know what that does. Also the basis of electronic computing and electronics in general. Made by Karl Ferdinand Braun.

- 1910 - Analytical Engine - was the successor of the Difference Engine which was also created by Charles Babbage. Aiming to be a more general-purpose calculator capable of doing calculations that are more vast than its predecessor. The Analytical Engine utilized "Punch Cards" that the user will feed into the machine. These punch cards (hole = 1, no hole = 0). represent binary machine code that the analytical engine will store in its memory register and process afterwards. The output will be printed on a paper. The system is also purely mechanical which means the user had to be precise on their machine code commands in their punch cards in order generate their output. Ada Lovelace, the world's first programmer, created an algorithm (using the punch card system) for the Analytical Engine.

- 1941 - Z3 - Program Controlled Computer made by Konrad Zuse. 

- 1945 - ENIAC (ELECTRONIC NUMERICAL INTEGRATOR AND COMPUTER) - Developed by John Presper Eckert and John Mauchly, the ENIAC was the first electronic digital computer. Meaning that its functions and way of executing and outputting instructions are all done in a digital manner through the utilization of electricity. It was used in the US Military for military calculations, specifically artillery trajectory tables. One must take note that the ENIAC still utilized punch cards as a way of input and output. It also utilized switches, plugs and dials to achieve input as well. 

- 1946 - TRANSISTOR - Alam mo na 'yan. Bardeen, Shockley, and Brattain.

- 1949 - EDVAC (ELECTRONIC DISCRETE VARIABLE AUTOMATIC COMPUTER) - is the world's second electronic digital computer and is the successor of sorts of the ENIAC. It followed the "stored-program" model wherein instead of instructions being edited externally (through punch cards during the mechanical era of computers), instructions are to be stored on the EDVAC memory for convenience sake. Furthermore, this computer followed the CPU architecture of it being divided by the ALU, CU, and Memory Unit and I/O. This type of architecture is used in today's computers. Made by the creators of ENIAC as well as Von Neumann. This is why makikita na natin sa EDVAC ang basics of computer (processor with its respective divisions, memory, and I/O) which is called the "Von Neumman Architecture" with respect sa mga computers. This will be discussed further.

- 1951 - UNIVAC 1 (UNIVERSAL AUTOMATIC COMPUTER 1) - First commercial computer produced in the US. Made by the creators of the ENIAC.

- 1959 - IC (INTEGRATED CIRCUIT) - Array of transistor utilized for switching. Utilized for various uses and is also the basis of more modern computers. Created by Jack Kilby.

- 1964 - IBM 360 (INTERNATIONAL BUSINESS MACHINES) - First business commercial computer.

- 1972 - 4 BITS MICROPROCESSOR INTEL 4004 - First commercial microprocessor. Before the 4004, all CPU registers and functions were separated into different chips. The 4004 compacted everything into one microchip. BCD based 4-bit CPU.

- 1972 - 8 BITS MICROPROCESSOR INTEL 8008 - A direct upgrade to the Intel 4004 that can access more memory addresses thanm the 4004. (256 vs 16 respectively)

- 1980 - 16 BITS MICROPROCESSOR TI TMS9900 - Can read and write at 2 bytes at a time and can access 65536 memory addresses. A stark upgraded from the Intel 4004 and 8008. Made by Texas Instruments.

- 2000 - 32 BITS MICROPROCESSOR INTEL PENTIUM - Read and write 4 bytes at a time and can access 4gb ofof memory addresses. 

- 2003 - 64 BITS MICROPROCESSOR AMD64-OPTRON (2003) - Can read and write 8 bytes at a time and can address 16 exabytes of memory addresses.

- 2005 - MULTICORE MULTIPROCESSORS - Modern Processors.

- 2010 - Tablet Computers - Alam mo na 'yan.

- 2017 - Modern Processors - Alam mo na 'yan.

III. NOTE WITH RESPECT TO AFOREMENTIONED MICROPROCESSORS IN HISTORY OF MICROCOMPUTERS
- It is observed that the microprocessor has its specifications with regards to the number of bytes it can read per time as well as the number of memory address it can read. Trip down on memory lane muna. The concepts Data Bus, Data Width, Address Bus, and Adress Bus Width (Addressable Memory should be recaped.

DATA BUS AND DATA BUS WIDTH
- The Data Bus is the actual lanes that a microcomputer utilizes that acts as the "highway" for data transmission between hardware components in a computer. 
- The Data Bus Width is the actual width of a data bus which determines how much data can flow in a data bus. Think of it as the number of lanes in a highway. More lanes = wider highway = more cars can be accomodated. 
- Knowing the Data Bus Width can help you determine two facts:

1. How many bits or bytes can flow in a data bus per clock pulse.
2. Exact amount of bits or bytes that can flow on a data bus given the clock frequency of a processor

-  There are "fixed" data bus widths, specifically 16-bit (which means it transfers 2 bytes per clock pulse kasi 1 byte = 8 bits), and the modern 32 and 64-bit data bus (4 and 8 bytes per clock pulse respectively). These determine how fast data transfers occur in a system unit. 
- Take the bytes of this data widths, it says na at every clock pulse, un ung number of bytes that it can transfer in-between hardware. If a processor has a clock speed of 3ghz per second, then at every 1 second, given a 64-bit system or data width bus, the system has data transfers of up to 8 x 3 x 1 000 000 000 per bytes per second which is massive data transferred in a singular second.

ADDRESS BUS AND ADDRESS BUS WIDTH
- The address bus refers to the bus or component that fetches instructions (when called for) from the memory. Isipin mo siya as the handler between data bus and the memory.
- The address bus width refers to the width of the address bus which means how much memory it can access given the installed memory of a microcomputer. With that the address bus width is also known as the addressable memory of a microcomputer. The address bus width is basically the 16-bi, 32-bit and so on na nakikita mo.
- Knowing the address bus width helps you determine this fact:

1. Addressable Memory

- The Address bus width determins how much RAM a system unit can use (hence address meaning addressable memory). To calculate for it, you take 2 raised to the address bus width (which is just based on the number of bytes your system can transfer per cycle e.g. 16-bit, 32 or 64-bit). So for example you have a 64 bit system, then that means 1.8446744e+19 bytes of RAM can be used. Kaya pala medyo unlimited ung number of RAM ung kaya ng isang 64 bit system where as kapag 32 bit,a measely 4gb of ram lang pwede.

IV. MICROPROCESSORS AND MICROPROCESSOR DEVELOPMENT
- Microprocessors are electronic devices derived from transistors that are clock driven (each operation and function is derived from every clock pulse it produces), programmable, and bases on machine language as input and output. Also known as the Central Processing Unit (CPU).

MICROPROCESSOR DEVELOPMENT PROCESSES (INTEL I5 2ND GEN)
1. SIO2 - The basis of microprocessors is Silicon as Silicon is a good semiconductor. This is now the standard of all electronic components and devices. Where can you find silicon? Sand. The standard chemical composition of Sand is SiO2 (Silicon Dioxide). This is not enough to be made into a semiconductor as by rule, semiconductors should be a pure silicon (99.99999%)in order to do its function properly.
        - Purification of SiO2 is done through a process called the "Siemens process" which extracts silicon from the silicon dioxide and refines it. 

2. INGOT - The goal in this stage is to create a cylindrical ingot from pure silicon (Monocrystalline Silicon Ingot ang tawag diyan). How can you do that? You put all of the purified silicon in a crucible (metal or ceramic container to subject substances on high temps) and melt it. Afterwards, you take an already monocrystalline silicon ingot (seed crystal), and dip it in the molten silicon and slowly take it out. During the process, the molten silicon will copy the chemical structure of the monocrystalline ingot and then it will itself become an ingot. Basicall yung seed crystal na sinasabi ko "teaches" the molten ingot how to become it. This process specifically is called the Czochralski Process.
        - After the ingot has been created, it is then sliced into very thin, disc-like wafers of 1mm thick. 

3. PHOTOLITOGRAPHY - Wafers are coated with photoresist. Afterwards, ions are then utilized to etch the patterns on the wafer which will serve as the structure and blueprint of the circuitry in the wafer. This is done repeatedly.

4. HIGH-K DIELECTRIC - Are substances such as SiO2 and Hafnium Oxide that helps with the insulating properties of a microprocessor to avoid current leakage. Basically adds protection sa processor mo.

5. FILM PHOTOGRAPHY (Photoresist) - Enhances Dielectric. Also prepares the wafer for UV Flashing.

6. UV Light Exposure - shrinks the pattern made from the photolitography.

7. GOOEY PHOTORESIST - After UV light, gooey remains from the Film photography remain. Using specific chemicals, these gooey remains can be washed away, leaving circuit shapes that can help for building more transistors and circuits in the wafer to be microprocessor. 

8. ELECTROPLATING - Actual application of copper ions on the transistor patters in the wafer. Essentially making the transistors' anodes and cathodes in the processor.

9. MULTIPLE INTERCONNECT LAYERS - Processor has lots of layers.

10. FUNCTIONALITY TEST - Self-Explanatory

11. DIE - refers to multiple chips. A wafer does not equate to 1 processor chip. Marami sila kaya they are cut into smaller pieces and yun na yung mismong processor chip mo.

12. BINNING - Not all chips perform the same. The Binning process refers to the classification of chips based on their performance during the functionality test. If it performs well, then it is sold as a high end processor. If otherwise, budget option or ultimately "binned."
