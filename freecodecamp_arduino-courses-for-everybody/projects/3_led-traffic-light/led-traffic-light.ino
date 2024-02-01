const byte RED = 10;
const byte yellow = 8;
const byte green = 7;

const byte rgbRed = 13;
const byte rgbYellow = 12;
const byte rgbGreen = 11;

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
    pinMode(rgbYellow, OUTPUT);
    pinMode(rgbGreen, OUTPUT);
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
    digitalWrite(rgbYellow, HIGH);
    delay(shortPause);
    digitalWrite(yellow, LOW);
    digitalWrite(rgbYellow, LOW);
    // delay(longPause);

    digitalWrite(green, HIGH);
    digitalWrite(rgbGreen, HIGH);
    delay(longPause);
    digitalWrite(green, LOW);
    digitalWrite(rgbGreen, LOW);
    // delay(longPause);
}