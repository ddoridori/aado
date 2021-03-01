#define OFF 1
#define ON  0

const int swPin     =   2;
const int ledPin    =  13;
const int chk_delay = 200;

int cnt = 0;

void setup() {
  pinMode(swPin,  INPUT );
  pinMode(ledPin, OUTPUT);
}

void loop() {

  int sw_in = digitalRead(swPin);

  if( sw_in == ON ) {
    
    delay(chk_delay);
    
    if( sw_in == ON ) {
      
      cnt++;  /* cnt = cnt + 1; */
      
      if( cnt == 1000 ) cnt = 0;

      if( cnt % 2 == 1 )  digitalWrite(ledPin, HIGH);
      else                digitalWrite(ledPin, LOW );
    }
  }
}
