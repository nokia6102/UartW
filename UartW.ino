
// pins for the LEDs:
int incomingByte = 0; 
const int ledPin =  LED_BUILTIN;// the number of the LED pin

void setup() {
  // initialize serial:
  Serial.begin(9600);
   pinMode(ledPin, OUTPUT);
   pinMode(12, OUTPUT);
//  Serial.println("start... "); 
}

void loop() {
  // if there's any serial available, read it:

  
  while (Serial.available() > 0) {

      incomingByte = Serial.read();

     
      switch (incomingByte)
      {
         case '1':
            Serial.print("1 ");
            digitalWrite(ledPin, HIGH);
            digitalWrite(12, HIGH);
            break;
         case '2':
            Serial.print("2 ");
            digitalWrite(ledPin, LOW);
            digitalWrite(12, LOW);
            break;
          default:
            Serial.print("X ");
          break;
      }
        Serial.println(digitalRead(13), HEX);
       
    }
  }

