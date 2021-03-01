#define OFF 1
#define ON  0

const int swPin  =  2;
const int ledPin = 13;

void setup() {
  pinMode(swPin,  INPUT );
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int sw_in = digitalRead(swPin);

  if( sw_in == ON ) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW );
  }
}
