int V_GasSen =0;
int V_TempSens =0;

void setup()
{
  pinMode(A0,INPUT);
  pinMode(11,OUTPUT);
 
  pinMode(A1,INPUT);

}

void loop()
{
  //Smoke Alarm
  V_GasSen = analogRead(A0);
  if (V_GasSen >=250){
    tone(11,523);// play tone60 (C5 = 523Hz)
    digitalWrite(2,HIGH);
     delay(3000);
   // noTone(11);
}
  
 V_TempSens = -40+0.488155*(analogRead(A1)-20);
   if (V_TempSens >=70) {
    tone(11,523);// play tone60 (C5 = 523Hz)
    digitalWrite(1,HIGH);
      delay(3000);
      noTone(11);
   }
  delay(10);//Delay a little bit to improve simulation performance 

}