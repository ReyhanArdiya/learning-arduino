// const byte TMP_IN = A4;
// const float sf = 0.01;

// void setup()
// {
//     pinMode(TMP_IN, INPUT);
//     Serial.begin(9600);
// }

// void loop()
// {
//     int tmpVal = analogRead(TMP_IN);
//     float volt = tmpVal * 5.0 / 1023.0;
//     float temp = volt / sf;

//     Serial.println(temp);
//     delay(500);
// }

const int lm35_pin = A4; /* LM35 O/P pin */

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int temp_adc_val;
    float temp_val;
    temp_adc_val = analogRead(lm35_pin); /* Read Temperature */
    temp_val = (temp_adc_val * 4.88);    /* Convert adc value to equivalent voltage */
    temp_val = (temp_val / 10);          /* LM35 gives output of 10mv/°C */
    Serial.print("Temperature = ");
    Serial.print(temp_val);
    Serial.print(" Degree Celsius\n");
    delay(250);
}