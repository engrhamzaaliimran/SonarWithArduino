 
#define trigger 7
#define echo 6
 
 
float time=0,distance=0;
 
void setup()
{Serial.begin(9600); // Starting Serial Terminal
 pinMode(trigger,OUTPUT);
 pinMode(echo,INPUT);
}
 
void loop()
{
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 digitalWrite(trigger,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 time=pulseIn(echo,HIGH);
 distance=time*340/20000;
 Serial.println(distance);
    delay(100);

 
}
