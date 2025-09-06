MICROCONTROLLER OVERVIEW

I. ARDUINO UNO
- MCU created by Arduino.cc (company).
- 14 digital pins. 6 of it being PWM (Pulse Width Modulation). Since the the select PWM Digital pins are digital, these pins are not able to output actual analog voltage. PWM enables these feature on digital pins. Basically, PWM "simulates" voltage output into varying values. It does this by turning the pins off and on (0v and 5v) as fast as it can in order to simulate these voltages. Because of this, these digital pins have the ability to change the brightness of a led or the revolutions of a given motor.
- 6 Analog Inputs.
- 15-20MHz ceramic resonator. Drives the clock of the whole arduino uno. Since the processor which is the atmega328p runs in RISC, each instruction is completed every clock pulse of the ceramic resonator/osillator. Because the ceramic resonator has a base frequency of 15mhz, that means the arduino uno's processor is able to compete 15 million instructions per second.
- Has usb connection, powerjac, icsp header and reset button.

PARTS OF THE ARDUINO UNO
A. ATmega328P Processor
- 8-bit. Meaning it has a data bus width of 1 byte and an addressable memory of 256 bits of memory. 
- RISC Architecture. Most instructions are done in a clock pulse. 
- 32KB Flash memory. Non-volatile memory for storage of arduino sketches. Even if you turn off the arduino uno, those sketches will remain because it is non volatile. It has that ability because it has floating-gate transistors that use thge concept of "electron trapping" in order to trap the electrons (data), inside the memory, storing the sketch.
- 1kb of EEPROM (Electrically Erasable Programmable Read-Only Memory)- Same as flash memory but slower- 131 instruction execution. Can finish up to 131 instructions per clock pulse because of RISC architecture of the processor.
- 32 general purpose register.
- 10000 flash memory and 100000 EEPROM read/erase cycles. This means na those memories will start to wear out after those values of read and erase.

B. Security
1. Power-On Reset (POR)- at power on, POR sets the whole circuit and the ceramic oscillator at reset, not executing any instructions until the Vin is achieved (3.3v or 5v).
2. Brown-Out Detection(BOD)- When Vcc suddenly drops below the operating voltage (3.3v or 5v), the microcontroller resets.

C. Peripherals
1. Timers and Counters- The Arduino Uno has Timers and counters that work in conjunction with the clock pulses of the ceramic resonator. The timers use the clock pulses of the ceramic resonator
as a reference on how much time has passed. Ito yung basehan ng "delay" sa ating arduino code. May scale na ginagamit si timer ng arduino to determine na if nakaabot na sa ganitong pulses, ayun ung equivalent niya in actual milliseconds. The counter is the same pero instead of measuring time using the clock pulses, it utilizes it to count how many events are happening in each clock pulse.
2. Universal Synchronous/Asynchronous Receiver/Transmitter (USART)- Receiver and transmitter of the arduino uno that utilizes serial communication asynchronously or synchronously. Kapag sinabi nating serial communication, data is sent bit by bit on a single medium instead of parallel. Kapag sinabi nating asynchronous, it means that communication just agree on a baud rate (how much data is sent per second) and that's when communication occurs. So Serial Asynchronous communication is data being sent bit by bit by an agreed baud rate. Kapag sinabi naman nating synchronous, instead of baud rate, naka-base sa clock speed of a given microcontroller (in this case, the ceramic resonater) kung ilang bits ang ma-sesend.
3. Serial Peripheral Interface (SPI)- Communication protocol between a microcontroller and a peripheral device.
4. Inter-Integrated Circuit (I2C)- Alternative communication protocol for communication between microcontroller and peripheral. Better than SPI due to the fact that it can connect numerous peripheral devices all in on just two wires being the SDA (data line) and the SCL (clock line). Since mayroon siyang clock line, it means na it is serial and synchronous kasi it utilizes the clock pulse of the ceramic oscillator in order to achieve bit-by-bit data transfers.
5. Analog Comparator (AC)- compares two analog voltage inputs. If A > B= High, otherwise, low.
6. Watchdog Timer- separate oscillator that serves as a failsafe clock pulse in the case that a sketch brings upon a bug or infinite loop to the arduino uno. It would reset the microcontroller if that happens.
7. PWM Pins.
8. Interrupt and wake-up. Alam mo na yung mga interrupts. The wake-up feature wakes the microcontroller on minute events such as uploads or the press of a button. Si arduino kasi pumupunta sa low power mode after a certain period of time na idle siya.

D. ATMEGA16U2
- Processor that interfaces with your the USB of the microcontroller in order to talk with the main processor properly. 8 bit and runs on RISC.
- In system Programming (ISP )Flash- Means that the firmware for interacting with the USB and the main microprocessor is intact. ISP means that the microcontroller is programmable despite everything being soldered in.
- 512 byte EEPROM and SRAM.
- Has its own separate clock.

E. POWER
- It is said that the main processor of the Arduino Uno (ATMega328p) is able to receive voltages from 2.7v-5.5v. Meaning that to reach the base frequency clock of the processor (16MHz), it should receive 5v. Although it can underclock itself (8MHz), it should receive voltages that are lower than its operational one (3.3v).
- USBVCC means that it is another power source that the microcontroller can take via USB. It only takes in 5v automatically.
- VIN is the input pin (barrel jack) that takes in higher voltages and takes it to the LDO. Sa arduino uno, the barrel jack is connected to the VIN and there is another pin as well that takes it to VIN. We know what VIN does in the context of the barrel jack. When it comes to the VIN pin naman, it could be used for two things. Input and output. As for the input, si VIN pin can actually be utilized as an external power to power up the microcontroller. Since si VIN pin is connected sa VIN, that means na if you input a voltage higher than 5v, it will go to LDO in order to regulate that voltage into 5v then power up the microcontroller. One must take note that VIN only works if the voltage is higher than 5v. If it is 5v, then the LDO will lower that voltage, thus not reaching the base frequency of the microcontroller that is 16MHz. As for the output, kung anong voltage ang ipasok mo sa barrel jack, ayun din ang ilalabas niya sa VIN pin. LDO does not interfere in this kasi wala namang transform down sa voltage.
- LDO takes the high voltage that the VIN takes and regulates and maintains it to 5v.
- OPAMP- technology for accurately reading analog inputs.
- This is an example of how power flows in the microcontroller given the following power components of the microcontroller:
    
    The VIN (barrel jack) takes in a voltage that might be higher into the microcontroller. Before it goes to the microcontroller, VIN directs the current through the LDO in order to regulate the voltage into 5v and uses it to power the 2 processors and other output components connected in the microcointroller. In another situation, the USBVCC also takes in power and redirectes the current to the OPAMP before it becomes 5v and goes to the various components of the microcontroller and output components it has.  

II. Pin Configuration

SOME PINS WORTH REMEMBERING
1. VIN pin. (see VIN explanation)
2. A4/A5- Houses the SDA and SCL respectively. Meaning that A4 and A5 pins supports USART. Specifically, the serial syncrhonouse tapos Inter-Integrated circuits since it is an actual I2C.
3. Digital pins 0-9 are GPIO. Meaning that they are utilized for general purpose input and output.
4. Digital Pins 10-13 are SS, MOSI, MISO and SCK respectively. Although they could be utilized as digital pins, they can also be used for SPI. As stated kanina, SPI is another form of communication protrol in order for the arduino uno to talk to other microcontrollers or peripheral devices. SPI has 4 components. SS, MOSI, MISO and SCK. Before that is explained dapat munang malaman na SPI follows a "master-slave relationship whenever it tries to communicate with other peripheral devices that support SPI communication. This means na in this context, our arduino uno is our master communication device and the external peripheral devices are going to be our slaves. How does SS, MOSI, MISO and SCK fit in? 

    When we say SS (slave select), it means na at the start of a sketch, pipili si master ng slave (pwede kasi mag connect ng multiple devices sa SPI eh). MOSI (Master Out, Slave in) and MISO(Master In, Slave out) is simple. These are wires na kung saan magsesend ng bits si master papunta kay slave and slave kay master respectively. SCK (Serial Clock) is just the serial synchronous aspect of the SPI in action. Meaning na at each clock pulse, a bit is sent (remember na ganyan ang function ng isang serial ssynchronous communication). Now, how is this actually applied?

    Sabihin natin may dalawa kang Arduino Unos. Let's call them uno1 and uno2 and you needed another arduino uno kasi you configured a circuit with it na gusto mong i-integrate sa uno1 as 1 whole circuit. Ngayon, ung mga data from uno2 is gusto mo ipasok sa uno1 for some specific reason. Dito papasok yung SPI. Connect the SCK, MOSI, MISO, and SS ni uno1 to the d10-d13 of uno2 respectively. Paano yung process? SS goes low (normally high, active low kasi si SS. Kapag naka low si SS, ibig sabihin si master natin (uno1) ay nakahanap na ng slave na pag-kokonektan (uno2)). Once that happens, sasabihin ni master kay slave na "huy, ito yung magiging timing natin sa pagsesend ng information ha? Bale yung clock speed ko ay 16Mhz. Kada pitik ng ceramic resonator ko, mag-sesend ako ng bit sayo sa MISO tas magsesend ka ng bit sa akin sa MOSI." This communication is done sa SCK. Once that is done, the two microcontrollers start sending out instructions and data in the form of bits sa MISO and MOSI. Ganun yung nangyayari ung communication between the two.

5. AREF (pin 15)- Analog voltage reference. Malay ko kung ano ginagawa niyan.

III. ARDUINO UNO BLOCK DIAGRAM EXPLANATION (REFER TO CPET11 MODULE 2)
- Marami sa mga blocks ay inexplain na prior to this chapter. The following would be other blocks or lines na hindi pa naeexplain so far. 
- AVR CPU. Utilizes a harvard architecture because program memory and data memory is separate (Flash and EEPROM/SRAM respectively). 
- Data bus is self explanatory.
- 8-bit T/C0 and 16bit T/C0. It bases the clock signal from the CPU as the CPU recieves the clock pusles from the oscillator circuit or clock generation block. 
- A/D Conv.- Refers to the built in Analog to digital converter to the specificied controller. It simply means that this block refers to the numerous peripherals that the arduino uno utilizes in order to convert the analog signals that the microcontroller recieves into digital ones.
- PortD, B, and C just simply refer to the various pins that the microcontroller has.
- debugWIRE- this block refers to the actual ability of the arduino uno to be programmable.

    So given power, the block diagram's process is as follows. The power supervision block activates until the microcontroller recieves proper 5v. When the voltage reaches operational levels, the ceramic resonator starts and POR releases the reset state of the whole microcontroller. Everything starts to work and if in case there is a sketch that locks the whole microcontroller to a loop, then the WDT forces a reset to the power supervision block. Forcing a reset state to the microcontroller.

IV. AVR CPU ARCHITECTURE BLOCK DIAGRAM
1. Flash Program Memory- it is a non-volatile memory that is usually the place to store the actual instructions received by the microcontroller from the IDE. These instructions when placed here is in machine code na in order for the ALU to actually understand it. 

    a. Flash Program Memory Sectioning
    - The Flash Program memory is partitioned into two sections. The application section and the boot section. The application section is where the actual instructions acquired by the microcontroller are stored. The boot section is where the Store Program Memory (SPM) is stored. The SPM enables the the boot section to acquire new arduino sketches and rewrite the stored instructions sa application section for the ALU's reference. 

    b. Lock Bits
    - Basically, lock bits refer to security measures para hindi mapalitan na lang bigla-bigla yung boot section and application section.

    c. Flash Program Memory Sectioning
    - As stated earlier, the flash program memory is 32kb. However, it is partitioned into pages. Pages are sections within the application and boot sections and it is how the instructions stored in side are partitioned. The flash program memory has 256 pages. Which means that each page is 128 bytes large.

    d. Writing and Re-writing the Application Software
    - Given the functions of the application and boot section, when the microcontroller receives a new sketch, the following occurs (this is in context of the components mentioned only, not all of the parts as a whole). The boot section receives the new sketch, it targets a page in the application section, erases its contents and writes a part of the received sketch there. Paulit-ulit lang yan hanggang sasa macomplete ni boot section (using SPM) yung pag-write ng nareceive niyang sketch into the application section.  

    e. Memory Addresses in Flash Program Memory
    - Each memory address in the flash program memory is actually in hexadecimal that can either be based by word or by byte. In the context of the module, the hexadecimal memory address of the flash program memory is addressed in word. So in this context, the flash program memory program is 16kw (kilo words). Where in one word corresponds to one hexadecimal memory address starting at 0x0000 (Start of application section) and ends with 0x3FFF (the end of the boot section). Prompt na lang kay chatgpt kung ano yung hexadecimal ng kada word count from 0 up to 16000 words.

2. Program Counter- Holds the address of the next instruction to fetch from the flash program memory in the application section. 

3. Instruction Register- Gets the instruction from the program counter and holds it there before decoding. 

4. Instruction Decoder- Decodes instructions into machine language for the ALU's benefit. 

How does all of this work in conjuction?
- There is a new sketch the arduino uno receives, the instructions of the given sketch goes to the flash program memory of the arduino uno, specifically sa boot section kasi it will rewrite all of the pages ng ating application section. Utilizing SPM, the boot section will get a word sized instruction from the new sketch, target a specific page in the application section, erase any existing instructions there, and write the acquired word from the new sketch into the specified page in the application section. This goes on and on until the boot section successfully writes all of the instructions to the pages in the application section. When it is time to execute the sketch, the program counter starts at 0x0000, takes that word into the instruction register, then to the decoder before ALU execution. This goes on and on, the memory addresses incrementing as it completes the program by moving the address to the IR then to the ID and eventually to the ALU for execution.

5. Arithmetic Logic Unit (ALU)- Works in conjunction with the 32 general purpose registers of the CPU.
Does an operation for every clock pulse. Operations, logical operations and bit manipulation functions alam mo na yun.

6. Status Register- Basically Flag Registers. Read CPET7 Chapters 1-4 for flag register referece.

7. General Purpose Registers (GPR)- Sinasabi dito na the atmega328p has 32 registers that the microprocessor assigns at the first 32bytes into the data memory of the microcontroller (R0-R31 or 0x00-0x1F Respectively). Another thing to take note is that R26-R31 are used to specifically refer to the contents of the the data memory.  

8. Data SRAM- Single random access memory. Volatile due to capacitors. The structure of the SRAM is as follows. First 32 bytes (0x0000-0x001F) is dedicated to the GPRs as mentioned earlier. The next 64 bytes (0x0020-0x005F) are dedicated to the digital and analog pins. The next 160 pins are dedicated to the other peripheral technologies of the microcontroller. Lastly, the remaining 1048 bytes that make up the 2kb capacity of the SRAM is the actual RAM of the microcontrller. Refer to figure 14, it simply states na it takes to clock pulses to access and actually read and write bits in the sram. First clock pulse is accessing the memory address and on the next is actually reading and writing data on those specified addresses. 

9. Stack Pointer (SP)- Alam mo na yan. Functions, local variables and temporary data.

10. EEPROM- alam mo na yan.

11. WDT- explained na kanina.

12. Oscillator Circuit/Clock Generation System- alam na yan.

EXPLANATION OF FIGURE 15
- This is basically a diagram of the clock pulse distribution sa buong arduino uno starting from the oscillators through which the clock pulse is actually derived from when it receives current. The atmega328p has 4 oscillators or resonators to choose from. This is the external clock, crystal oscillator, low-frequency crystall oscillator and lastly, the calibrated RC oscillator. The clock signal is a clock from another source (example could be the SCK received from an SPI communication). crystal oscillator is the actual 16mhz ceramic resonator na kasama ni atmega328p. low freqeuncy crystal oscillator is another crystal oscillator that runs when the microcontroller is on lower power mode. lastly, calirated rc oscillator. All of this excluding the external oscillator ay nasa loob ng chip pero bakit andaming clock pulse sources? Well that is because ginagamit siya on different situations ng arduino uno. Kapag normal 5v operations, si ceramic resonator and gamit. Kapag low power mode siya, it uses the low frequency rc oscillator and so on. The clock multiplexer identifies what clock source to use. If a sketch has a bug or nag initiate ng infinite loop kay microcontroller then the watchdog timer puts the reset logic to high, resetting the source clock, therefore restarting the whole arduino uno. If wala naman ganyang problem, the system clock prescaler downscales the clock pulses then the avr clock control unit distributes the clock pulses through the different peripherals and major parts of the microcontroller. 

EXPLANATION OF FIGURE 16 
- Pinapakita sa figure 16 yung harvard architecture in action sa arduino uno with respect to each clock pulse. In this context, pinapakita yung pag execute and fetch ng ating AVR RISC microprocessor on a single clock.  On time 2 or the 2nd clock pulse, pinapakita na at that clock pulse, ineexecute ang previous fetched instruction while getting the next instruction at the same time. The same goes for the consecutive clock pulses. 

EXPLANATION OF FIGURE 17
- Basically pinapakita sa Figure 17 kung ano yung mga processes ang nagagawa ng microcontroller in one clock pulse. Fetch, execute, and write back ang nagagawa kaagad on one clock pulse. Eh in one second, 16mhz clock pulses ang nagaganap. Isipin mo na lang kung gaano kadami ang nangyayari on one second palang. 

13. SPI
 
14. Interrupt Unit

15. Analog Comparators

16. Status and Control Registers (SFIOR)

