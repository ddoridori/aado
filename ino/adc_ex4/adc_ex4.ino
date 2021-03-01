const int cdsPin    =  A0;
const int ledPin    =  13;
const int threshold = 128;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long adcVal = analogRead(A0);

  if( adcVal < 128 ) digitalWrite(ledPin, HIGH);
  else               digitalWrite(ledPin, LOW );

  Serial.print("adc value = ");
  Serial.print(adcVal);
  Serial.print("\tVoltage = ");
  /*
   1023 : 5 = adcVal : x(V)
   1023 * x = 5000 * adcVal
   x = 5 * adcVal / 1023
   */
  double volt = 5 * (double)adcVal / 1023;
  Serial.print(volt);
  Serial.print("(V)\n");
}
