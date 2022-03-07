 #include <stdio.h>
#include <stdlib.h>
#include <Keypad.h>
#include <LiquidCrystal.h>
#include <Servo.h>
Servo myservo; // variable myservo of type Servo
LiquidCrystal lcd(A8, A9, A10, A11, A12, A13);//initialize library with the inteface pin number
#define Password 5 //Assigning the length of the password
int s_position = 0;// variable to store the position of servo motor
char User_entry[Password] ; // variable to store user entered passsword
char Preset[Password]= "2022"; // variable to store PresetPassword to 2022
int User1 = 0, Preset1 = 0;
char customKey;
int button= 11;     // switch conncted to pin 11
int led=  12;      // led connected to pin 12 to indicate user entry
int led1=  A7;    // led connected to pin A7 to indicate the door status open/close
int buttonState = 0;   // variable for reading the switch status
const int Ldr_sensor_potentiometer = A1; //pin A1 connected to Potentiometer to measure the light intensity
const int led2= A0;  // led connected to pin A0 controlled by light intensity
const int intensity = 500; // light intensity is set to 500
const byte ROWS = 4; //Keypad connection
const byte COLS = 3;
char keys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};
bool lock = true;
byte rowPins[ROWS] = {21, 20, 19, 18}; 
byte colPins[COLS] = {17, 16, 15}; 
 
Keypad UserKey( makeKeymap(keys), rowPins, colPins, ROWS, COLS); //function from the keypad library
void setup()
{
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  myservo.attach(2);
  ServoClose();
  lcd.begin(16, 2);
  lcd.setCursor(0, 1); 
  pinMode(led2, OUTPUT);
}
void loop()
{
  if (lock == 0)
  {
    customKey = UserKey.getKey();//Function to read password entered by user
    if (customKey == '#')
    {
      lcd.clear();
      ServoClose();
      lcd.print("Door is closed");
      delay(3000);
      lock = 1;// Resetting for password entry
    }
  }
  else Open();
}
void clearData()
{
  while (User1!= 0)
  { 
    User_entry[User1--] = 0; //clear array for new data
  }
  return;
}
void ServoOpen()
{
  for (s_position = 180;s_position >= 0;s_position -= 5) // setting the servo position to open the door
  { 
    myservo.write(s_position);       
    
    
 }
}
void ServoClose()
{
  for (s_position = 0; s_position <= 180; s_position += 5) { // setting the servo position to close the door
    myservo.write(s_position);    
             
    delay(15);                       // time for servo to set the position
  }
}
void Open()
{
  lcd.setCursor(0, 0);
  lcd.print(" Enter Password");
  customKey = UserKey.getKey();
  if (customKey) 
  {
    User_entry[User1] = customKey; // store the user entered password
    lcd.setCursor(User1, 1);
    lcd.print(User_entry[User1]); // display the password on lcd
    User1++; 
  }
  if (User1 == Password - 1) 
  {
    if (!strcmp(User_entry,Preset)) //verifying the user entered password
    {
      lcd.clear();
      ServoOpen();
      lcd.print("WELCOME");
      lock = 0;
      digitalWrite(led1, HIGH);
      int i = 5;
      while(i=5)
 {
   buttonState = digitalRead(button);
  if(buttonState == 1)   
    { 
    digitalWrite(led, HIGH);  
  delay(1000);    
    }
    else  
    {
    digitalWrite(led, LOW);       
    }
    int analogValue = analogRead(Ldr_sensor_potentiometer); // read the input on analog pin

  if(analogValue > intensity)
    digitalWrite(led2, HIGH); // turn on LED
  else
    digitalWrite(led2, LOW);  // turn off LED
  }
}
    else 
    {
      lcd.clear();
      lcd.print("Wrong Password");
      
      delay(1000);
      lock = 1;
      digitalWrite(led1, LOW); 
    }
    clearData();
}
}
