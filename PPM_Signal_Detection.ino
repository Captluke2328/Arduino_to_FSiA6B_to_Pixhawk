void setup()
{
Serial.begin(57600);
pinMode(3, INPUT);
}
void loop()
{
Serial.println(pulseIn(3, LOW));
}

// D2 - D13 are PWM pin for Arduino Mega
