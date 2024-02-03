const byte rgbRed = 2;
const byte rgbGreen = 3;
const byte rgbBlue = 4;
const byte maxBrightness = 128;
const byte delayTime = 500;

void setup()
{
    pinMode(rgbRed, OUTPUT);
    pinMode(rgbGreen, OUTPUT);
    pinMode(rgbBlue, OUTPUT);
}

void loop()
{
    // Red
    digitalWrite(rgbRed, HIGH);
    delay(delayTime);
    digitalWrite(rgbRed, LOW);

    // 50% Red
    analogWrite(rgbRed, maxBrightness);
    delay(delayTime);
    analogWrite(rgbRed, 0);

    // Green
    digitalWrite(rgbGreen, HIGH);
    delay(delayTime);
    digitalWrite(rgbGreen, LOW);

    // 50% Green
    analogWrite(rgbGreen, maxBrightness);
    delay(delayTime);
    analogWrite(rgbGreen, 0);

    // Blue
    digitalWrite(rgbBlue, HIGH);
    delay(delayTime);
    digitalWrite(rgbBlue, LOW);

    // 50% Blue
    analogWrite(rgbBlue, maxBrightness);
    delay(delayTime);
    analogWrite(rgbBlue, 0);

    // Purple
    digitalWrite(rgbRed, HIGH);
    digitalWrite(rgbBlue, HIGH);
    delay(delayTime);
    digitalWrite(rgbRed, LOW);
    digitalWrite(rgbBlue, LOW);

    // 50% Purple
    analogWrite(rgbRed, maxBrightness);
    analogWrite(rgbBlue, maxBrightness);
    delay(delayTime);
    analogWrite(rgbRed, 0);
    analogWrite(rgbBlue, 0);

    // Yellow
    digitalWrite(rgbRed, HIGH);
    digitalWrite(rgbGreen, HIGH);
    delay(delayTime);
    digitalWrite(rgbRed, LOW);
    digitalWrite(rgbGreen, LOW);

    // 50% Yellow
    analogWrite(rgbRed, maxBrightness);
    analogWrite(rgbGreen, maxBrightness);
    delay(delayTime);
    analogWrite(rgbRed, 0);
    analogWrite(rgbGreen, 0);

    // Cyan
    digitalWrite(rgbGreen, HIGH);
    digitalWrite(rgbBlue, HIGH);
    delay(delayTime);
    digitalWrite(rgbGreen, LOW);
    digitalWrite(rgbBlue, LOW);

    // 50% Cyan
    analogWrite(rgbGreen, maxBrightness);
    analogWrite(rgbBlue, maxBrightness);
    delay(delayTime);
    analogWrite(rgbGreen, 0);
    analogWrite(rgbBlue, 0);

    // White
    digitalWrite(rgbRed, HIGH);
    digitalWrite(rgbGreen, HIGH);
    digitalWrite(rgbBlue, HIGH);
    delay(delayTime);
    digitalWrite(rgbRed, LOW);
    digitalWrite(rgbGreen, LOW);
    digitalWrite(rgbBlue, LOW);

    // 50% White
    analogWrite(rgbRed, maxBrightness);
    analogWrite(rgbGreen, maxBrightness);
    analogWrite(rgbBlue, maxBrightness);
    delay(delayTime);
    analogWrite(rgbRed, 0);
    analogWrite(rgbGreen, 0);
    analogWrite(rgbBlue, 0);
}