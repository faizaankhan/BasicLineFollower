/*this code will be sent to everyone in there registered email*/
int i,a[8];
void setup()
{/*pins that are to be connected*/
  /*first six pins are connected to motor driver*/
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  /*pwm pins that are connected with motor driver*/
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  /*these are the sensor array pins from vcc to s8 total 10 pins are there*/
  pinMode(11,INPUT);
  pinMode(12,INPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);  
  /*this declaration of serial monitor u can also see serial plotter*/
  Serial.begin(57600);
}

void loop()
{
  /*reading values of the array sensor*/
  a[0]=digitalRead(A0);
  a[1]=digitalRead(A1);
  a[2]=digitalRead(A2);
  a[3]=digitalRead(A3);
  a[4]=digitalRead(A4);
  a[5]=digitalRead(A5);
  a[6]=digitalRead(11);
  a[7]=digitalRead(12);
  /*printing the data in serial monitor*/
  for(i=0;i<8;i++)
  {
    Serial.print(a[i]);
  }
  Serial.println();
  /*condition for forward*/
  if(a[0]&&a[1]&&(!a[2]||!a[3]||!a[4]||!a[5])&&a[6]&&a[7])
  {
    /*controling the speed of the motor*/
    analogWrite(9,100);
    analogWrite(10,100);
    /*setting the poles of the motor*/
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
  }
  /*condition for left*/
  if((!a[0]||!a[1]||!a[2])&&a[3]&&a[4]&&a[5]&&a[6]&&a[7])
  {
    /*controling the speed of the motor*/
    analogWrite(9,80);
    analogWrite(10,80);
    /*setting the poles of motor its been reversed to rotate anticlockwise*/
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
  }
  /*condition for right*/
  if(a[0]&&a[1]&&a[2]&&a[3]&&a[4]&&(!a[5]||!a[6]||!a[7]))
  {
    /*controling the speed of the motor*/
    analogWrite(9,80);
    analogWrite(10,80);
    /*setting the poles of motor its been reversed to rotate clockwise*/
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
  }
  /*condition for forward when there is all leds are on checkpoint*/
  if(!a[0]&&!a[1]&&!a[2]&&!a[3]&&!a[4]&&!a[5]&&!a[6]&&!a[7])
  {
    /*controling the speed of the motor*/
    analogWrite(9,100);
    analogWrite(10,100);
    /*setting the poles of the motor*/
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
  }
  /*condition to stop when its in white*/
  if(a[0]&&a[1]&&a[2]&&a[3]&&a[4]&&a[5]&&a[6]&&a[7])
  {
    /*controling the speed of the motor here it will stop because it is zerono current flowing*/
    analogWrite(9,0);
    analogWrite(10,0);
  }
}
