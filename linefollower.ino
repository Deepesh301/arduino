#define left_motor1 5 
#define left_motor2 6
#define right_motor1 7
#define right_motor2 8
#define enable1 9
#define enable2 10

#define irsensor1 1
#define irsensor2 2
#define irsensor3 3 
#define irsensor4 4
 


void setup() {
  pinMode(left_motor1,OUTPUT) ;
  pinMode(left_motor2,OUTPUT) ;
  pinMode(right_motor1,OUTPUT) ;
  pinMode(left_motor2,OUTPUT) ;

  pinMode(enable1,OUTPUT) ;
  pinMode(enable2,OUTPUT) ;
  pinMode(irsensor1,INPUT) ;
  pinMode(irsensor2,INPUT) ;
  pinMode(irsensor3,INPUT) ;
  pinMode(irsensor4,INPUT) ;
  
  
  serial.begin(9600) ;
  // put your setup code here, to run once:

}

void loop() {
  if((digitalRead(irsensor2)==LOW)&&(digitalRead(irsensor3)==LOW)&&(digitalRead(irsensor1)==HIGH)&&(digitalRead(irsensor4)==HIGH))
   { digitalWrite(left_motor1,HIGH) ;
     digitalWrite(left_motor2,LOW) ;
     digitalWrite(right_motor1,HIGH) ;
     digitalWrite(right_motor1,LOW) ;
   //straight
   
   }
   delay(1000) ;
   if((digitalRead(irsensor2)==LOW)&&(digitalRead(irsensor3)==LOW)&&(digitalRead(irsensor1)==LOW)&&(digitalRead(irsensor4)==HIGH))
   { digitalWrite(left_motor1,LOW) ;
     digitalWrite(left_motor2,LOW) ;
     digitalWrite(right_motor1,HIGH) ;
     digitalWrite(right_motor1,LOW) ;
     delay(
   //left
   }
   delay(1000) ;
    if((digitalRead(irsensor2)==LOW)&&(digitalRead(irsensor3)==LOW)&&(digitalRead(irsensor1)==HIGH)&&(digitalRead(irsensor4)==LOW))
   { digitalWrite(left_motor1,HIGH) ;
     digitalWrite(left_motor2,LOW) ;
     digitalWrite(right_motor1,LOW) ;
     digitalWrite(right_motor1,LOW) ;
   //right
   }
   delay(1000) ;
   if((digitalRead(irsensor2)==LOW)&&(digitalRead(irsensor3)==LOW)&&(digitalRead(irsensor1)==LOW)&&(digitalRead(irsensor4)==LOW))
   { digitalWrite(left_motor1,LOW) ;
     digitalWrite(left_motor2,LOW) ;
     digitalWrite(right_motor1,LOW) ;
     digitalWrite(right_motor1,LOW) ;
   //stop
   }
   delay(1000) ;

}
