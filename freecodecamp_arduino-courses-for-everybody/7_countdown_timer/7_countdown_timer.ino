#define A 11
#define B 10
#define C 5
#define D 6
#define E 7
#define F 12
#define G 13
#define DP 4
#define DELAY_LENGTH 1000

void setup()
{
    pinMode(A, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(C, OUTPUT);
    pinMode(D, OUTPUT);
    pinMode(E, OUTPUT);
    pinMode(F, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(DP, OUTPUT);
}

void loop()
{
    digitalWrite(DP, LOW);
    number9();
    delay(DELAY_LENGTH);
    number8();
    delay(DELAY_LENGTH);
    number7();
    delay(DELAY_LENGTH);
    number6();
    delay(DELAY_LENGTH);
    number5();
    delay(DELAY_LENGTH);
    number4();
    delay(DELAY_LENGTH);
    number3();
    delay(DELAY_LENGTH);
    number2();
    delay(DELAY_LENGTH);
    number1();
    delay(DELAY_LENGTH);
    number0();
    digitalWrite(DP, HIGH);
    delay(DELAY_LENGTH);
}

void turnOffAll()
{
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    digitalWrite(E, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
    digitalWrite(DP, LOW);
}

void number9()
{
    turnOffAll();
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
}

void number8()
{
    turnOffAll();
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
}

void number7()
{
    turnOffAll();
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
}

void number6()
{
    turnOffAll();
    digitalWrite(A, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
}

void number5()
{
    turnOffAll();
    digitalWrite(A, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
}

void number4()
{
    turnOffAll();
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
}

void number3()
{
    turnOffAll();
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
}

void number2()
{
    turnOffAll();
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
}

void number1()
{
    turnOffAll();
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
}

void number0()
{
    turnOffAll();
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
}