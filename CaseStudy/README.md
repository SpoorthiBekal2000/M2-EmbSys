# CASE STUDY

# CASE STUDY 1: ALARM CLOCK
## TABLE OF CONTENTS

 BLOCK DIAGRAM	
 
 APPLICATION	
 
 COMPONENT DETAILS	
 
 REQUIREMENTS	
 
 High Level Requirement	
 
 Low Level Requirement	
 
 REFERENCES	

## Block Diagram

![image](https://user-images.githubusercontent.com/47130806/154840454-7137ef8b-edcf-4ae8-9fe2-142e6ee895d3.png)
                               Fig.1 Block Diagram of alarm clock

 ## Application  
* KEYPAD:  It is used to set the alarm time.
* RTC:  It is used to set the current time and as it has its own power supply it can maintain the time even when power is not available.
* Buzzer:  It is used to provide audio signal when the current time of the clock reach the set time.
* LCD display:  It is used to show the current time and the alarm set time.
* EEPROM:  It is used to store the set alarm time, it will be stored even when the power supply is not available.  

## Component Details		
*	Microcontroller:  It helps in efficient interfacing of RTC. It has good computation speed and many numbers of pins and operates at a frequency of 16 MHz.
*	Keypad:  Keypad provides a useful human interface component with maximum rating of 24 V and 30mA.
* Buzzer:  It consists of switches or sensors connected to a control unit that determines if the condition is satisfied and produces sound. Buzzer. It has Positive and Negative terminals, positive is connected to the +5V and negative is connected to the collector of the transistor.
*	RTC:  It maintains accurate time even when the main power to the device is interrupted. It counts Seconds, Minutes, and Hours.
*	LCD display:  It has 2 rows which can produce 16 characters. It uses 1mA of current and can display alphanumeric characters.

## Requirements
### High Level Requirement
* HLR 1.  Set the time accurately.
* HLR 2.  Buzzer should turn on when the current time meet the set time.
* HLR 3.  The time should be properly displayed on the LCD.
* HLR 4.  It should detect if it is AM or PM.
### Low Level Requirement
* LLR 1.  The time set should be in either 12 hour or 24 hour format.
* LLR 2.  Buzzer should be turned ON till the user manually turns it off.
* LLR 3.  The hours and minutes should be clearly displayed on the segments of LCD.
* LLR 4.  LCD should have separate indication to indicate AM or PM.
## References
*	http://theteacher.info/index.php/f453-advanced-theory/3-3-1-operating-systems/notes/393-embedded-systems-notes.
*	Software Requirements Specification for Geek Binary Alarm Clock by Yesuratnam Thommandru Iowa State University – Electrical and Computer Engineering.
*	The Real-Time Hardware of Smart Digital Alarm Clock Integrated with Microcontroller by Ginne Rani, Purnendu Shekhar Pandey, Praful Ranjan, Gaurav Negi and Saurabh Kavi

# CASE STUDY 2:LIGHT MANAGEMENT
## TABLE OF CONTENTS

 BLOCK DIAGRAM	
 
 APPLICATION	
  
 COMPONENT DETAILS	
 
 REQUIREMENTS	
 
 High Level Requirement	
 
 Low Level Requirement	
 
 REFERENCES	
 
 
 ## Block Diagram

![image](https://user-images.githubusercontent.com/47130806/154840873-c9e34233-a528-456a-9f9a-90d798aa56ec.png)

Fig.2 Block diagram of light management system

## Application
*   LDR SENSOR:  It is used to sense the intensity of the light in the surroundings.
*  PUSH BUTTON:  It is used to select if the system should work on the basis of LDR sensor or RTC.
*  LED:  To show the output i.e., turn on and off accordingly.
*  LCD DISPLAY:  It displays the intensity of the light.
*	 RTC MODULE:  It stores the time when the light has to be turned ON and when it should be turned OFF.

## Component Details
*	 LDR Sensor:  It is called as photoresistors and are made of high resistance semiconductor material. It has adjustable trigger level from preset, it has LED indicating output and power. The operating voltage is 3.3V to 5V and the operating current is 15ma.
*	 LCD Display:  It has 2 rows which can produce 16 characters. It uses 1mA of current and can display alphanumeric characters.
*	 RTC Module:  It keeps an updated track of the current time which can be read by a microprocessor, it has 1 Hz and 32 KHz output pin. The Voltage Supply ranges between 2.2 V to 5.5V.

## Requirements
### High Level Requirement
*  HLR 1.  Check the mode of operation either LDR based or RTC based.
*  HLR 2.  Manage the light intensity based on the value set and detected by the LDR.
*  HLR 3.  Switch the light based on the RTC time and set value.

### Low Level Requirement
*  LLR 1.  Based on the input from push button the operation is continued.
*  LLR 2.  LDR detected value reach 65 then the intensity should be managed.
*  LLR 3.  RTC time is 6pm the light should be turned ON and when RTC time is 6am light should be turned OFF.

## References
*	 Auto Intensity Control of Street Lights using Microcontroller by Sudheer Gupta.
*  Smart street lamp Unit (SslU) with Embedded System by J Ferin Joseph, David Anthony Durand, V Gowtham.
* 	Energy Efficient Outdoor Light Monitoring and Control Architecture Using Embedded System by Zeeshan Kaleem, Tae Min Yoon, and Chankil Lee.
*	 https://www.eeweb.com/auto-intensity-control-of-street-lights-using-microcontroller/#:~:text=The%20auto%20intensity%20control%20of,to%20digital%20value%20using%20ADC.



