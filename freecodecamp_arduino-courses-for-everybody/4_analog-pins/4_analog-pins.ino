const int RED_PIN = A4;

void setup()
{
    pinMode(RED_PIN, OUTPUT);
}

void loop()
{
    analogWrite(RED_PIN, 255);
}
