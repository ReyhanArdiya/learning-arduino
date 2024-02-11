#include "Arduino.h"
#include <TimeOut.h>

// MODE CA
const String MODE = "CA"; // CA or CC
int low = HIGH;
int high = LOW;

const byte D1 = 1;
const byte D2 = 2;
const byte D3 = 3;
const byte D4 = 4;

const byte A = 6;
const byte B = 7;
const byte C = 8;
const byte D = 9;
const byte E = 10;
const byte F = 11;
const byte G = 12;
const byte DP = 13;

const byte DELAY = 3;
bool isHelo = true;
Interval changeIsHelo;

void toggleIsHelo()
{
    isHelo = !isHelo;
}

void setup()
{
    if (MODE == "CC")
    {
        low = LOW;
        high = HIGH;
    }

    pinMode(D1, OUTPUT);
    pinMode(D2, OUTPUT);
    pinMode(D3, OUTPUT);
    pinMode(D4, OUTPUT);

    pinMode(A, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(C, OUTPUT);
    pinMode(D, OUTPUT);
    pinMode(E, OUTPUT);
    pinMode(F, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(DP, OUTPUT);

    changeIsHelo.interval(1000, toggleIsHelo);
}

void loop()
{
    Interval::handler();
    if (isHelo == true)
    {
        helo();
    }
    else
    {
        love();
        digitalWrite(DP, high);
    }
}

void turnOffAll()
{
    digitalWrite(A, low);
    digitalWrite(B, low);
    digitalWrite(C, low);
    digitalWrite(D, low);
    digitalWrite(E, low);
    digitalWrite(F, low);
    digitalWrite(G, low);
    digitalWrite(DP, low);
}

void switchDigit(byte prev, byte next)
{
    delay(DELAY);
    digitalWrite(prev, LOW);
    digitalWrite(next, HIGH);
}

void letterH()
{
    turnOffAll();
    digitalWrite(B, high);
    digitalWrite(C, high);
    digitalWrite(E, high);
    digitalWrite(F, high);
    digitalWrite(G, high);
}

void letterE()
{
    turnOffAll();
    digitalWrite(A, high);
    digitalWrite(F, high);
    digitalWrite(G, high);
    digitalWrite(E, high);
    digitalWrite(D, high);
}

void letterO()
{
    turnOffAll();
    digitalWrite(A, high);
    digitalWrite(B, high);
    digitalWrite(C, high);
    digitalWrite(D, high);
    digitalWrite(E, high);
    digitalWrite(F, high);
}

void letterL()
{
    turnOffAll();
    digitalWrite(F, high);
    digitalWrite(E, high);
    digitalWrite(D, high);
}

void letterV()
{
    turnOffAll();
    digitalWrite(B, high);
    digitalWrite(C, high);
    digitalWrite(D, high);
    digitalWrite(E, high);
    digitalWrite(F, high);
}

void helo()
{
    // HELO
    switchDigit(D1, D4);
    letterH();
    switchDigit(D4, D3);
    letterE();
    switchDigit(D3, D2);
    letterL();
    switchDigit(D2, D1);
    letterO();
}

void love()
{
    // LOVE
    switchDigit(D1, D4);
    letterL();
    switchDigit(D4, D3);
    letterO();
    switchDigit(D3, D2);
    letterV();
    switchDigit(D2, D1);
    letterE();
}