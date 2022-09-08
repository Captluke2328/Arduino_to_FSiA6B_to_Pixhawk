#define channumber 6 //How many channels have your radio?
int channel[channumber]; //read Channel values
int PPMin = 4;

void setup()
{
  Serial.begin(9600); //Start serial
  pinMode(PPMin, INPUT); // Pin 4 as input
}

void loop()
{
  //waits ultil synchronize arrives > 4 miliseconds
  if(pulseIn(PPMin , HIGH) > 4000) //If pulse > 4 miliseconds, continues
  {
    for(int i = 1; i <= channumber; i++) //Read the pulses of the remainig channels
    {
 channel[i-1]=pulseIn(PPMin, HIGH);
    }
    for(int i = 1; i <= channumber; i++) //Prints all the values readed
    {
 Serial.print("CH"); //Channel
 Serial.print(i); //Channel number
 Serial.print(": "); 
 Serial.println(channel[i-1]); //Print the value
    }
    delay(200);//Give time to print values.
  }
}
