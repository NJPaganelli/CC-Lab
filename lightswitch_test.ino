int inputPin = 2;
int outputPin = 13;
int state = HIGH;
int reading;
int previous = LOW;

long time = 0;
long debounce = 200;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(inputPin, INPUT);
  pinMode(outputPin, OUTPUT);
}

void loop() {

  reading = digitalRead(inputPin);
//  buttonState = digitalRead(buttonPin);
  if(reading == HIGH && previous == LOW && millis() - time>debounce){
    if(state == HIGH)
      state = LOW;
     else
      state = HIGH;

      time = millis();
  }
      digitalWrite(outputPin, state); 
      previous = reading;
}
      
      
//  delay(75);
//  }else{                              
//  digitalWrite(LED_BUILTIN, LOW);    
//  delay(100);                      
//}
