const byte A = 2;
const byte B = 3;
const byte C = 4;
const byte D3 = 5;
const byte D4 = 6;
const byte DELAY = 10;

void setup()
{
    pinMode(A, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(C, OUTPUT);
    pinMode(D3, OUTPUT);
    pinMode(D4, OUTPUT);
}

void loop()
{
    // 1 on D4
    digitalWrite(D3, LOW);
    digitalWrite(D4, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    delay(DELAY);

    // 7 on D3
    digitalWrite(D4, LOW);
    digitalWrite(D3, HIGH);
    digitalWrite(A, LOW);
    delay(DELAY);
}