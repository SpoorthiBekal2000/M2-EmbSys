# 1	Requirements
## 1.1	High Level Requirement
|ID|	Description|
|:-|:-|
|HLR_1|	Password shall be verified based on which user will be allowed to enter.|
|HLR_2|User entry shall be detected and the light will be controlled. |
|HLR_3|	The intensity of the light shall be measured and will turn the light ON and OFF accordingly.|

## 1.2 Low Level Requirement
|H-ID|	L-ID|	Description|
|:-|:-|:-|
|HLR_1	|LLR_1.0|	The password shall be set as 2022 in the program.|
|	|LLR_1.1|User shall be asked to enter the password using the keypad.|
|	|LLR_1.2|	User entered password shall we verified with the set password.|
|	|LLR_1.3|	Message shall be displayed on the LCD, if password is correct “Welcome”, else “Incorrect Password”. |   
|	|LLR_1.4|	If the password is correct the movement in the servo motor shall indicate the opening of the door.|
| |LLR_1.5|Light shall be turned on indicating door is open.|
|HLR_2	|LLR_2.0|	User entry shall be detected with the help of PIR sensor.|
|	|LLR_2.1|	Sensor value shall be used to turn the light ON.|
|HLR_3	|LLR_3.0|	Intensity of the surrounding shall be detected using LDR sensor.|
|	|LLR_3.1|	If the intensity is higher than 500 light shall be turned OFF and if intensity is lower than 500 light shall continue in the ON state.|
