//laser pin setup
int laserPin = 8;                // choose the pin for the LED

// Motion sensor setup
int inputPin = 7;               // choose the input pin (for PIR sensor)
int pirState = LOW;             // we start, assuming no motion detected
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(laserPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare sensor as input
 
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(inputPin);  // read input value
  if (val == HIGH) {            // check if the input is HIGH
    digitalWrite(laserPin, HIGH);  // turn laser ON
    if (pirState == LOW) {
      // we have just turned on
      Serial.println("Motion detected!");
      // We only want to print on the output change, not state
      pirState = HIGH;
    }
  } else {
    //digitalWrite(laserPin, LOW); // turn LED OFF
    //pirState = LOW;
    
  }
}
