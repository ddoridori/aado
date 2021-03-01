const int ledPin = 13;

void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
  Serial.print("type '1' for led on, type '0' for led off\n");
}

void loop() {
  if(Serial.available() > 0){
    
    char ch = Serial.read();
    
    if(ch == '1'){
      digitalWrite(ledPin, HIGH);
    }
    else if(ch == '0'){
      digitalWrite(ledPin, LOW );
    }
    else{
      Serial.println("wrong input! type '0' or '1'.");
    }
  }
}
