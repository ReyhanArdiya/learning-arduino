#include <TimeOut.h>

const byte R1 = 10;
const byte R2 = A2;
const byte R3 = 9;
const byte R4 = 13;
const byte R5 = 2;
const byte R6 = 8;
const byte R7 = 3;
const byte R8 = 6;

const byte C1 = A1;
const byte C2 = 4;
const byte C3 = 5;
const byte C4 = 11;
const byte C5 = 7;
const byte C6 = 12;
const byte C7 = A3;
const byte C8 = A4;

const byte REFRESH_RATE = 1;
Interval switchPattern;

void setup()
{
    pinMode(R1, OUTPUT);
    pinMode(R2, OUTPUT);
    pinMode(R3, OUTPUT);
    pinMode(R4, OUTPUT);
    pinMode(R5, OUTPUT);
    pinMode(R6, OUTPUT);
    pinMode(R7, OUTPUT);
    pinMode(R8, OUTPUT);

    pinMode(C1, OUTPUT);
    pinMode(C2, OUTPUT);
    pinMode(C3, OUTPUT);
    pinMode(C4, OUTPUT);
    pinMode(C5, OUTPUT);
    pinMode(C6, OUTPUT);
    pinMode(C7, OUTPUT);
    pinMode(C8, OUTPUT);

    turnOffAllColumns();
    turnOffAllRows();
    switchPattern.interval(1000, switchPatternCb);
}

void loop()
{
    smileyFace();
}

void switchPatternCb()
{
    smileyFace();
    delay(1000);
    sadFace();
}

void smileyFace()
{
    switchNextCol(C8, C1);
    digitalWrite(R3, HIGH);
    digitalWrite(R4, HIGH);
    digitalWrite(R5, HIGH);
    digitalWrite(R6, HIGH);

    switchNextCol(C1, C2);
    digitalWrite(R2, HIGH);
    digitalWrite(R7, HIGH);

    switchNextCol(C2, C3);
    digitalWrite(R1, HIGH);
    // Left eye
    digitalWrite(R3, HIGH);
    digitalWrite(R8, HIGH);
    // Upper left lip
    digitalWrite(R5, HIGH);

    switchNextCol(C3, C4);
    digitalWrite(R1, HIGH);
    digitalWrite(R8, HIGH);
    // Lower lip
    digitalWrite(R6, HIGH);

    switchNextCol(C4, C5);
    digitalWrite(R1, HIGH);
    digitalWrite(R8, HIGH);
    // Lower lip
    digitalWrite(R6, HIGH);

    switchNextCol(C5, C6);
    digitalWrite(R1, HIGH);
    // Right eye
    digitalWrite(R3, HIGH);
    digitalWrite(R8, HIGH);
    // Upper right lip
    digitalWrite(R5, HIGH);

    switchNextCol(C6, C7);
    digitalWrite(R2, HIGH);
    digitalWrite(R7, HIGH);

    switchNextCol(C7, C8);
    digitalWrite(R3, HIGH);
    digitalWrite(R4, HIGH);
    digitalWrite(R5, HIGH);
    digitalWrite(R6, HIGH);
}

void sadFace()
{
    switchNextCol(C8, C1);
    digitalWrite(R8, HIGH);

    switchNextCol(C1, C2);
    digitalWrite(R7, HIGH);

    switchNextCol(C2, C3);
    digitalWrite(R6, HIGH);

    switchNextCol(C3, C4);
    digitalWrite(R6, HIGH);

    switchNextCol(C4, C5);
    digitalWrite(R6, HIGH);

    switchNextCol(C5, C6);
    digitalWrite(R6, HIGH);

    switchNextCol(C6, C7);
    digitalWrite(R7, HIGH);

    switchNextCol(C7, C8);
    digitalWrite(R8, HIGH);
}

void switchNextCol(byte prevCol, byte nextCol)
{
    delay(REFRESH_RATE);
    digitalWrite(prevCol, HIGH);
    turnOffAllRows();
    digitalWrite(nextCol, LOW);
}

void turnOnAllRows()
{
    digitalWrite(R1, HIGH);
    digitalWrite(R2, HIGH);
    digitalWrite(R3, HIGH);
    digitalWrite(R4, HIGH);
    digitalWrite(R5, HIGH);
    digitalWrite(R6, HIGH);
    digitalWrite(R7, HIGH);
    digitalWrite(R8, HIGH);
}

void turnOffAllRows()
{
    digitalWrite(R1, LOW);
    digitalWrite(R2, LOW);
    digitalWrite(R3, LOW);
    digitalWrite(R4, LOW);
    digitalWrite(R5, LOW);
    digitalWrite(R6, LOW);
    digitalWrite(R7, LOW);
    digitalWrite(R8, LOW);
}

void turnOnAllColumns()
{
    digitalWrite(C1, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(C3, LOW);
    digitalWrite(C4, LOW);
    digitalWrite(C5, LOW);
    digitalWrite(C6, LOW);
    digitalWrite(C7, LOW);
    digitalWrite(C8, LOW);
}

void turnOffAllColumns()
{
    digitalWrite(C1, HIGH);
    digitalWrite(C2, HIGH);
    digitalWrite(C3, HIGH);
    digitalWrite(C4, HIGH);
    digitalWrite(C5, HIGH);
    digitalWrite(C6, HIGH);
    digitalWrite(C7, HIGH);
    digitalWrite(C8, HIGH);
}