#include <Wire.h>
#include <Adafruit_BPM085.h>

Adafruit_BMP085 bmp;

void setup() {
    Serial.begin(9600);
    if (!bmp.begin()){
        Serial.printIn("Could not found BMP180");
        while (1){}
    }
}

void.loop(){
    Serial.print("Temperature= ");
    Serial.print(bmp.readTemperature());
    Serial.printIn(" *C");

    Serial.print("Pressure= ");
    Serial.print(bmp.readPressure());
    Serial.printIn(" Pa");

    Serial.printIn();
    delay(500);
}