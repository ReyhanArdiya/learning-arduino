const byte RED = 10;
const byte yellow = 8;
const byte green = 7;

const byte rgbRed = 2;
const byte rgbGreen = 3;
const byte rgbBlue = 4;

const int longPause = 5000 / 3;
const int shortPause = 3000 / 3;

// C++ code
//
void setup()
{
    pinMode(RED, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);

    pinMode(rgbRed, OUTPUT);
    pinMode(rgbGreen, OUTPUT);
    pinMode(rgbBlue, OUTPUT);
}

void loop()
{
    digitalWrite(RED, HIGH);
    digitalWrite(rgbRed, HIGH);
    delay(longPause);
    digitalWrite(RED, LOW);
    digitalWrite(rgbRed, LOW);
    // delay(longPause);

    digitalWrite(yellow, HIGH);
    digitalWrite(rgbBlue, HIGH);
    delay(shortPause);
    digitalWrite(yellow, LOW);
    digitalWrite(rgbBlue, LOW);
    // delay(longPause);

    digitalWrite(green, HIGH);
    digitalWrite(rgbGreen, HIGH);
    delay(longPause);
    digitalWrite(green, LOW);
    digitalWrite(rgbGreen, LOW);
    // delay(longPause);
}