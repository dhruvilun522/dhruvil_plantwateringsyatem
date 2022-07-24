void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(A0);     //taking reading of soil moisture sensor
  Serial.println(x);
  if(x>250){                 //watering soil for 1s if it is dry
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
  }
  else{
    digitalWrite(7, LOW);
  }
  delay(2000);


  
}
