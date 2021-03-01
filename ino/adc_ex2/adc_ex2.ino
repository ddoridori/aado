const int cdsPin    =  A0;
const int ledPin    =  13;
const int threshold = 128;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
/*
mVolt = map(adcVal, 0, 1023, 0, 5000);
 */



void loop() {
  long adcVal = analogRead(A0);

  if( adcVal < 128 ) digitalWrite(ledPin, HIGH);
  else               digitalWrite(ledPin, LOW );

  Serial.print("adc value = ");
  Serial.print(adcVal);
  Serial.print("\tVoltage = ");
  /*
   1023 : 5000 = adcVal : x(mV)
   1023 * x = 5000 * adcVal
   x = 5000 * adcVal / 1023
   */
  long mVolt = map(adcVal, 0, 1023, 0, 5000);
  // long mVolt = 5000 * adcVal / 1023;
  Serial.print(mVolt);
  Serial.print("(mV)\n");
}
