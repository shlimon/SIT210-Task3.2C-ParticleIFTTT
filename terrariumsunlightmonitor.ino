
const int PHOTO_RESISTOR = A1;
const int LED = D7;




void setup() {
    
    pinMode(PHOTO_RESISTOR,INPUT);
    pinMode(LED,OUTPUT);

    


}

void loop() {
    
    delay(3000);
    
    digitalWrite(LED, HIGH);
    int lumen = analogRead(PHOTO_RESISTOR);
    
    if(lumen>5)
    {
        Particle.publish("status", "sunshine", PRIVATE);
    }
    else
    {
        Particle.publish("status", "NoSun", PRIVATE);
    }
    delay(3000);
    
    digitalWrite(LED,LOW);
    delay(3000);
    

}