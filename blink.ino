int i=0;//this is the global variable use to increase the 7segement led
void setup() {
  //this function is used to setup the pins that are to be used as a input/ouput purpose
  //and this portion runs only once
  for(i=5;i<=12;i++)
  {
    pinMode(i,OUTPUT);//here we are initialising the pins as input starting from 5 to 12
  }
  i=0;//again we are initialising it to 0
}
void loop() {
  //this function runs always in a loop after the setup function
  if(i==0)
  {//this checks whether the value of i is 0 or not if it is true then the 7 segment led pins are been initialised to zero
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    ++i;//increment of i
  }
  delay(1000);//this function is used to hold the program for 1 sec as it is written in millisecond and it acts like an interrupt
  if(i==1)
  {//this checks whether the value of i is 1 or not if it is true then the 7 segment led pins are been initialised to one
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    ++i;//increment of i    
  }
  delay(1000);//this function is used to hold the program for 1 sec as it is written in millisecond and it acts like an interrupt
  if(i==2)
  {//this checks whether the value of i is 2 or not if it is true then the 7 segment led pins are been initialised to two
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    ++i;//increment of i       
  }
  delay(1000);//this function is used to hold the program for 1 sec as it is written in millisecond and it acts like an interrupt
  if(i==3)
  {//this checks whether the value of i is 3 or not if it is true then the 7 segment led pins are been initialised to three
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    ++i;//increment of i
  }
  delay(1000);//this function is used to hold the program for 1 sec as it is written in millisecond and it acts like an interrupt
  if(i==4)
  {//this checks whether the value of i is 4 or not if it is true then the 7 segment led pins are been initialised to four
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    ++i;//increment of i
  }
  delay(1000);//this function is used to hold the program for 1 sec as it is written in millisecond and it acts like an interrupt
  if(i==5)
  {//this checks whether the value of i is 5 or not if it is true then the 7 segment led pins are been initialised to five
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    ++i;//increment of i
  }
  delay(1000);//this function is used to hold the program for 1 sec as it is written in millisecond and it acts like an interrupt
  if(i==6)
  {//this checks whether the value of i is 6 or not if it is true then the 7 segment led pins are been initialised to six
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    ++i;//increment of i
  }
  delay(1000);//this function is used to hold the program for 1 sec as it is written in millisecond and it acts like an interrupt
  if(i==7)
  {//this checks whether the value of i is 7 or not if it is true then the 7 segment led pins are been initialised to seven
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    ++i;//increment of i
  }
  delay(1000);//this function is used to hold the program for 1 sec as it is written in millisecond and it acts like an interrupt
  if(i==8)
  {//this checks whether the value of i is 8 or not if it is true then the 7 segment led pins are been initialised to eight
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    ++i;//increment of i
  }
  delay(1000);//this function is used to hold the program for 1 sec as it is written in millisecond and it acts like an interrupt
  if(i==9)
  {//this checks whether the value of i is 9 or not if it is true then the 7 segment led pins are been initialised to nine
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    ++i;//increment of i
  }
  delay(1000);//this function is used to hold the program for 1 sec as it is written in millisecond and it acts like an interrupt
  if(i==10)
  {//this checks if the value is 10 or not if it is 10 it again initialised to 0
    i=0;
  }
}
