//3 buttons to control an RGB LED, click on each button to turn one led at a time
//use Arduino's reset button to reset the colors 

const int GreenLED = 8;
const int BlueLED  = 9;
const int RedLED   =10;

// define Buttons code
const int GreenButton = 4;
const int BlueButton  = 3;
const int RedButton   = 2;

void setup() 
{
// initialize the digital pin as an output.
  pinMode(GreenLED,OUTPUT);
  pinMode(BlueLED ,OUTPUT);
  pinMode(RedLED  ,OUTPUT);  
  //input pins
  pinMode(RedButton,INPUT_PULLUP);  
  pinMode(BlueButton,INPUT_PULLUP); 
  pinMode(GreenButton,INPUT_PULLUP);
}
// the loop routine runs over and over again forever:
void loop() {
  
  boolean isGreen=digitalRead(GreenButton);
  boolean isBlue=digitalRead(BlueButton);
  boolean isRed=digitalRead(RedButton); 
  delay(50);
  
  if(isGreen==false)
  {
  digitalWrite(GreenLED, HIGH);   // turn the LED on (HIGH is the voltage level)    
  digitalWrite(BlueLED , LOW);    // turn the LED off by making the voltage LOW 
  digitalWrite(RedLED  , LOW);    // turn the LED off by making the voltage LOW    
  }  
if(isBlue==false)
  {
  digitalWrite(BlueLED  , HIGH);   // turn the LED on (HIGH is the voltage level)    
  digitalWrite(GreenLED , LOW);    // turn the LED off by making the voltage LOW 
  digitalWrite(RedLED   , LOW);    // turn the LED off by making the voltage LOW    
  }  
if(isRed==false)
  {
  digitalWrite(RedLED   , HIGH);   // turn the LED on (HIGH is the voltage level)    
  digitalWrite(GreenLED , LOW);    // turn the LED off by making the voltage LOW 
  digitalWrite(BlueLED  , LOW);    // turn the LED off by making the voltage LOW    
  }    
}
