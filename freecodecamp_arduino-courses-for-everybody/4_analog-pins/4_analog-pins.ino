// Use potentiometer to read analog value
const byte READ_PIN = A2;

void setup()
{
    pinMode(READ_PIN, INPUT);
    Serial.begin(9600);
}

void loop()
{
    float sensorValue = analogRead(READ_PIN) * 5. / 1023.; // 0-1023 -> 0-5v
    Serial.println(sensorValue);
    delay(500);
}
