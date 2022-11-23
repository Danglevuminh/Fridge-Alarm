
const int LEDpin = 8;
const int buzzer = 9; //puzzer to pin 9
int tempSensorPin = analogRead(A0); 
void setup() {
  
  pinMode(LEDpin,OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {
   
   //Read the analog values of the photoresistor and print it to console for verification
  int photoValue = analogRead(A0);
  Serial.println("Analog Value of photoresistor :");
  Serial.println(photoValue);  
 
 //When the recorded value of the photoresistor goes over 100 - usually room light intensity, the block begins

  if (photoValue>100){
    
    delay(30000);
    photoValue = analogRead(A0);

    //Checks if the analog value of the photoresistor still remains at room light intensity, at which point the buzzer and LED will go off
    //Lasts until the fridge door is closed
    while (photoValue>100){
    tone(buzzer, 1000);
     digitalWrite(LEDpin, HIGH);
     delay(100);
     digitalWrite(LEDpin, LOW);
     delay(100);
     photoValue = analogRead(A0);
    }
    noTone(buzzer);


    
  }
   //Looping LED
  
  
 
  
  //Read the analog values of the temperature sensor
  /*
  int tempSensorReading = analogRead(A2);
  Serial.println(tempSensorReading);
  /*
  double temp = tempSensorReading/1024;
  temp = temp*3.3;
  temp = temp-0.5;
  temp = temp*100;
  Serial.println("temperature is ");
  Serial.println(temp);
  delay(100);
  */




  //Looping buzzer
  //; 
      
 
 
 
    
}
