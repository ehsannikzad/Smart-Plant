
// Ehsan Nikzad
// SIT107
// TASK 4.2

int redPin = 12;    // Red LED connected to digital pin 12 to indicate it s time for watering
int greenPin = 11;  // Green LED connected to digital pin 11 to indicate moistur is in good level

void setup() {
  Serial.begin(9600); // open serial port, set the baud rate as 9600 bps
  pinMode(redPin, OUTPUT);        // sets the digital pin as output
  pinMode(greenPin, OUTPUT);      // sets the digital pin as output
}
void loop() {
  int val;
  val = analogRead(0); //connect sensor to Analog 0
  Serial.println(val); //print the value to serial port
  delay(1000);
  if (val<650)  // Ths is an imaginary level for soil moisture
  {
    Serial.println("I need water!"); // This line send a mesage into serial monitor
    digitalWrite(redPin, HIGH); // Ths line turns on the red LED to hazard
    digitalWrite(greenPin, LOW); // This line keeps green LED off.
  } 
  else
    {
      Serial.println("I am OK, Thanks :)"); // This line send a mesage into serial monitor
      digitalWrite(redPin, LOW); // Ths line keeps red LED off.
      digitalWrite(greenPin, HIGH); // This line turns green LED on.
      }
  
  }


