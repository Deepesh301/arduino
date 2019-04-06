 int turn_delay = 10;
  
//L293 Connection   
  const int motorA1      = 8;  
  const int motorA2      = 10; 
  const int motorAspeed  = 9;
  const int motorB1      = 12; 
  const int motorB2      = 13; 
  const int motorBspeed  = 11;

//Sensor Connection
  const int left_sensor_pin1 =A0;
  const int left_sensor_pin2 =A1;
  const int right_sensor_pin3 =A3;
  const int right_sensor_pin4 =A4;

  
  
  int left_sensor_state1;
  int left_sensor_state2;
  int right_sensor_state3;
  int right_sensor_state4;

void setup() {
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);

  Serial.begin(9600);

  delay(3000);
  
}

void loop() {
  

  


left_sensor_state1 = analogRead(left_sensor_pin1);
left_sensor_state2 = analogRead(left_sensor_pin2);
right_sensor_state3 = analogRead(right_sensor_pin3);
right_sensor_state4 = analogRead(right_sensor_pin4);


if(right_sensor_state3 < 500 && right_sensor_state4 < 500 && left_sensor_state1 > 500 && right_sensor_state2 < 500)
{
  Serial.println("turning right");

  digitalWrite (motorA1,LOW);
  digitalWrite(motorA2,HIGH);                       
  digitalWrite (motorB1,LOW);
  digitalWrite(motorB2,HIGH);

  analogWrite (motorAspeed,100);
  analogWrite (motorBspeed,200);
  
  }
if(right_sensor_state3 > 500 && right_sensor_state4 > 500 && left_sensor_state1 < 500 && right_sensor_state2 < 500)
{
  Serial.println("turning left");
  
  digitalWrite (motorA1,HIGH);
  digitalWrite(motorA2,LOW);                       
  digitalWrite (motorB1,HIGH);
  digitalWrite(motorB2,LOW);

  analogWrite (motorAspeed,200);
  analogWrite (motorBspeed,100);

  delay(turn_delay);
  }

if(right_sensor_state3 < 500 && right_sensor_state4 > 500 && left_sensor_state1 > 500 && right_sensor_state2 < 500)
{
  Serial.println("going forward");

  digitalWrite (motorA2,LOW);
  digitalWrite(motorA1,HIGH);                       
  digitalWrite (motorB2,HIGH);
  digitalWrite(motorB1,LOW);

  analogWrite (motorAspeed,100);
  analogWrite (motorBspeed,100);

  delay(turn_delay);
  
  }

if(right_sensor_state3 < 500 && right_sensor_state4 < 500 && left_sensor_state1 < 500 && right_sensor_state2 > 500)
{ 
  Serial.println("stop");
  
  analogWrite (motorAspeed, 0);
  analogWrite (motorBspeed, 0);
  
  }

 
}

//>500 as white and <500 as black










 
