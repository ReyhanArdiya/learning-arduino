#define GREEN 6
#define RED 5
#define BLUE 3
#define DELAY 250
String color;

void setup()
{
    pinMode(GREEN, OUTPUT);
    pinMode(RED, OUTPUT);
    pinMode(BLUE, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    // analogWrite(BLUE, 0);
    // analogWrite(GREEN, 1);
    // delay(DELAY);
    // analogWrite(GREEN, 0);
    // analogWrite(RED, 1);
    // delay(DELAY);
    // analogWrite(RED, 0);
    // analogWrite(BLUE, 1);
    // delay(DELAY);

    // analogWrite(BLUE, 255);
    // delay(DELAY);
    // analogWrite(BLUE, 200);
    // delay(DELAY);
    // analogWrite(BLUE, 150);
    // delay(DELAY);
    // analogWrite(BLUE, 100);
    // delay(DELAY);
    // analogWrite(BLUE, 50);
    // delay(DELAY);
    // analogWrite(BLUE, 0);
    // delay(DELAY);

    // Crimson 220, 20, 60
    // analogWrite(RED, 220);
    // analogWrite(GREEN, 20);
    // analogWrite(BLUE, 60);

    // turnOff();

    if (Serial.available() > 0)
    {
        color = Serial.readString();
        color.trim();
        Serial.println(color);

        if (color == "red")
        {
            turnOff();
            analogWrite(RED, 255);
        }
        else if (color == "green")
        {
            turnOff();
            analogWrite(GREEN, 255);
        }
        else if (color == "blue")
        {
            turnOff();
            analogWrite(BLUE, 255);
        }
        else if (color == "purple")
        {
            turnOff();
            analogWrite(RED, 255);
            analogWrite(BLUE, 255);
        }
        else if (color == "yellow")
        {
            turnOff();
            analogWrite(RED, 255);
            analogWrite(GREEN, 255);
        }
        else if (color == "cyan")
        {
            turnOff();
            analogWrite(GREEN, 255);
            analogWrite(BLUE, 255);
        }
        else if (color == "white")
        {
            turnOff();
            analogWrite(RED, 255);
            analogWrite(GREEN, 255);
            analogWrite(BLUE, 255);
        }
        else if (color == "off")
        {
            turnOff();
        }
    }

    // delay(2500);
}

void turnOff()
{
    analogWrite(RED, 0);
    analogWrite(GREEN, 0);
    analogWrite(BLUE, 0);
}
