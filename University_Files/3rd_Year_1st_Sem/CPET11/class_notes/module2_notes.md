MICROCONTROLLER OVERVIEW

I. ARDUINO UNO
- MCU created by Arduino.cc (company).
- 14 digital pins. 6 of it being PWM (Pulse Width Modulation). Since the the select PWM Digital pins are digital, these pins are not able to varying output actual analog voltage. PWM enables these feature on analog pins. Basically, PWM "simulates" voltage output into varying values. It does this by turning the pins off and on (0v and 5v) as fast as it can in order to simulate these voltages. Because of this, these digital pins have the ability to change the brightness of a led or the revolutions of a given motor.
- 6 Analog Inputs.
- 15-20MHz ceramic resonator. Drives the clock of the whole arduino uno. Since the process which is the atmega328p runs in RISC, each instruction is completed every clock pulse of the ceramic resonator/osillator. Because the ceramic resonator has a base frequency of 15mhz, that means the arduino uno's processor is able to compete 15 million instructions per second.
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
1. Timers and Counters- The Arduino Uno has Timers and counters that work in conjunction with the clock pulses of the ceramic resonator. The timers used the clock pulses of the ceramic resonator
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
