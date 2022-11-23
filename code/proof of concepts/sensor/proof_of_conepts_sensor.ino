void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 
}

void loop() {
  // uitlezen 1ste sensor
 int eersteSensor = analogRead(A0);
  // print out the value you read:
  Serial.print(eersteSensor);
  Serial.print("\t");

  // uitlezen 2de sensor
 int TweedeSensor = analogRead(A1);
  // print out the value you read:
  Serial.print(TweedeSensor);
  Serial.print("\t");

   // uitlezen 3de sensor
 int DerdeSensor = analogRead(A2);
  // print out the value you read:
  Serial.print(DerdeSensor);
  Serial.print("\t");

   // uitlezen 4de sensor
 int VierdeSensor = analogRead(A3);
  // print out the value you read:
  Serial.print(VierdeSensor);
  Serial.print("\t");
  
   // uitlezen 5de sensor
 int VijfdeSensor = analogRead(A4);
  // print out the value you read:
  Serial.print(VijfdeSensor);
  Serial.print("\t");

   // uitlezen 6de sensor 
 int ZesdeSensor = analogRead(A5);
  Serial.print(ZesdeSensor);
Serial.println();

  delay(2000);
  
  
}
