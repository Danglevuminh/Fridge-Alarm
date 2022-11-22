
const int LEDpin = 8;
const int buzzer = 9; //puzzer to pin 9
void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin,OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int value = analogRead(A0);
  Serial.println("Analog Value :");
  Serial.println(value);  
  delay(100);
  
  /*
  //Looping LED
  digitalWrite(LEDpin, HIGH);
  delay(2000);
  digitalWrite(LEDpin, LOW);
  delay(2000);

  //Looping buzzer
  tone(buzzer, 1000); 
  delay(1000);        
  noTone(buzzer);     
  delay(1000);
  */  
}
