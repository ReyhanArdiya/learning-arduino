#define G 13
#define F 12
#define A 11
#define B 10
#define E 7
#define D 6
#define C 5
#define DP 4
#define DELAY 100

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
    turnOnNext(DP, A);
    turnOnNext(A, B);
    turnOnNext(B, C);
    turnOnNext(C, D);
    turnOnNext(D, E);
    turnOnNext(E, F);
    turnOnNext(F, G);
    turnOnNext(G, DP);
}

void turnOnNext(int prevPin, int nextPin)
{
    digitalWrite(prevPin, LOW);
    digitalWrite(nextPin, HIGH);
    delay(DELAY);
}