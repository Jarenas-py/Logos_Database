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
