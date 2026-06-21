int ledPin = 13; //pin connected to the LED
int startValue = 5;


void setup() {
  pinMode(ledPin, OUTPUT); //pin 13 is an OUTPUT
  Serial.begin(9600);
 
  Serial.println(" ");
  Serial.println("=== Smart CountDown Starting ===");

  int count = startValue;
  while (count > 0){
    Serial.print("Count: ");
    Serial.println(count);

    flashLED(count); //blink LED

    delay(1000);
    count = count - 1;
  }
  Serial.println("=== Countdown Complete ===");
}


void flashLED(int times){
  int flashcounter = 0;
  while (flashcounter < times) {
    digitalWrite(ledPin, HIGH);delay(200);
    digitalWrite(ledPin, LOW);delay(200);
    flashcounter = flashcounter + 1;
  }
}

void loop() {
}
