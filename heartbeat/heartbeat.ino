void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  
  pinMode(13, OUTPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
  
  delay(1000);
  
  int second = millis() /1000; 
  int raw = millis();

  digitalWrite(13, HIGH); 
  Serial.print(second);  
  Serial.println(" sec have elapsed."); 
  Serial.println(raw);
  delay(100); 
  digitalWrite(13, LOW); 

  
}
