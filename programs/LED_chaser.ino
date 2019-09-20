void setup() {
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(0, OUTPUT);
}
void loop() {
  digitalWrite(3, HIGH);   
  delay(100);                       
  digitalWrite(3, LOW);    
  delay(100);
    digitalWrite(2, HIGH);   
  delay(100);                       
  digitalWrite(2, LOW);    
  delay(100);
  digitalWrite(1, HIGH);   
  delay(100);                       
  digitalWrite(1, LOW);    
  delay(100);
  digitalWrite(0, HIGH);   
  delay(100);                       
  digitalWrite(0, LOW);    
  delay(100);                 
}
