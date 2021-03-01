const int swPin =  2;

void setup() {
  pinMode(swPin, INPUT);
  Serial.begin(9600);
}

void loop() {

  int sw_in = digitalRead(swPin);

  if( sw_in == HIGH ) {
    //Serial.print("input level = ");
    //Serial.println("HIGH");
  }
  else {
    Serial.print("input level = ");
    Serial.println("LOW ");
  }
}
