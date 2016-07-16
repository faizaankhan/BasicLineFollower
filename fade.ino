void setup() {
  //this function is use to set the pins for output/input purpose
  //and this portion runs only once
  pinMode(11,OUTPUT);//this function sets the 12 number pin as output and so on uptill 11
}
int i;//this is a global variable used to fade the led
void loop() {
  //this function runs always in a loop after the setup function
  for(i=0;i<255;i+=50)
  {//this part of the program is use to increase the value of i by 50
    analogWrite(11,i);
    /*
     * this function analogWrite is use to give the value to the pwm pins these are generally
     * used for the pwm pins i.e pulse width modulation pins , over here we send pulses ranging from 
     * 0 to 255 as we can see in the loop with a delay of 1 second.
     */
    delay(1000);
  }
}
