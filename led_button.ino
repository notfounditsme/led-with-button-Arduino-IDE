#define led 3 //We define the LED pin
#define button 4 //We define the button pin



void setup() {
  pinMode(led,OUTPUT);//We put the LED pin as an output, as we want it to light up
  pinMode(button,INPUT);//We put butao as input because we want to read the state


}

void loop() {
  if(digitalRead(button)){//here we have a condition that is if, if when reading the button and it is on

    digitalWrite(led,HIGH);//we write how to turn on the LED
  }
else{//otherwise
digitalWrite(led,LOW);//it would remain off

}
delay(5000);//we wait 5 seconds for the program to repeat again
}
