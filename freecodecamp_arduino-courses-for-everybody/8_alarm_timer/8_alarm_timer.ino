#include <SevSeg.h>
#include <TimeOut.h>

// MODE CA
const String MODE = "CA"; // CA or CC
int low = HIGH;
int high = LOW;

const byte BUZZER_PIN = A2;
const byte D1 = 2;
const byte D2 = 3;
const byte D3 = 4;
const byte D4 = 5;
const byte A = 6;
const byte B = 7;
const byte C = 8;
const byte D = 9;
const byte E = 10;
const byte F = 11;
const byte G = 12;
const byte DP = 13;

int countdown;
bool timerStarted = false;

SevSeg sevseg;
Interval reduceCountdown;

const byte numDigits = 4;
const byte digitPins[] = {
    D4,
    D3,
    D2,
    D1,
};
const byte segmentPins[] = {A, B, C, D, E, F, G, DP};
const byte hardwareConfig = COMMON_ANODE;
const bool resistorsOnSegments = false;

void setup()
{
    if (MODE == "CC")
    {
        low = LOW;
        high = HIGH;
    }

    pinMode(BUZZER_PIN, OUTPUT);
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

    Serial.begin(115200);
    sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments, false, false);
    sevseg.setBrightness(90);

    reduceCountdown.interval(1000, reduceCountdownTime);
}

void loop()
{

    if (countdown == 0 && timerStarted == true)
    {
        reduceCountdown.cancel();
        sevseg.blank();
        playBuzzer();
        return;
    }

    if (timerStarted == false)
    {
        countdown = getUserInput();

        if (countdown < 0)
        {
            Serial.println("Countdown time must be from 0 to 9999. Please try again.");
            return;
        }

        timerStarted = true;
        Serial.println(countdown);
        sevseg.setNumber(countdown, 0);
    }

    reduceCountdown.handler();
    sevseg.refreshDisplay();
}

int getUserInput()
{
    Serial.println("Enter the countdown time in seconds (max 9999)");

    while (Serial.available() == 0)
    {
    }

    return Serial.parseInt();
}

void reduceCountdownTime()
{
    sevseg.setNumber(countdown, 0);
    countdown--;
}

void playBuzzer()
{
    digitalWrite(BUZZER_PIN, HIGH);
    delay(800);
    digitalWrite(BUZZER_PIN, LOW);
    delay(500);
}