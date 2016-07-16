void setup() {
  //this function is use to set the pins for output/input purpose
  //and this portion runs only once
  pinMode(12,OUTPUT);//this function sets the 12 number pin as output and so on uptill 9
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
}
int i=0;//this is a global variable use as an increment
void loop() {
  //this function runs always in a loop after the setup function
  if(i==0)
  {//it checks whether the value is 0 or not if it is 0 it sets the first led high and all the other low
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    ++i;//increment i
  }
  delay(1000);//this function is used to hold the program for 1 sec as it is written in millisecond and it acts like an interrupt
  if(i==1)
  {//it checks whether the value is 1 or not if it is 1 it sets the second led high and all the other low
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    ++i;//increment i
  }
  delay(1000);//this function is used to hold the program for 1 sec as it is written in millisecond and it acts like an interrupt
  if(i==2)
  {//it checks whether the value is 2 or not if it is 2 it sets the third led high and all the other low
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    ++i;//increment i
  }
  delay(1000);//this function is used to hold the program for 1 sec as it is written in millisecond and it acts like an interrupt
  if(i==3)
  {//it checks whether the value is 3 or not if it is 3 it sets the fourth led high and all the other low
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    ++i;//increment i
  }
  delay(1000);//this function is used to hold the program for 1 sec as it is written in millisecond and it acts like an interrupt
  if(i==4)
  {//it checks whether the value is 4 if it is 4 the value i is again intialised as 0
    i=0;
  }
}
