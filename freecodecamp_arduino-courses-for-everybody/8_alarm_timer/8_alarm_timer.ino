const byte pin = 9;

void setup()
{
    pinMode(pin, OUTPUT);
}

void loop()
{
    analogWrite(pin, 128);
    delay(1000);
    analogWrite(pin, 0);
    delay(1000);
}