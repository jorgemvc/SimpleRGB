# Simple RGB
Simple usage of [Adafruit TCS34725](https://www.adafruit.com/product/1334)

## Author
Jorge Villalobos - Jun.2017

## Requires
Prior installation of the Adafruit TCS34725 library

## Usage
```
#include <SensorRGB.h>

// ---- Variables
SensorRGB rgb;

void setup() {
  Serial.begin(9600);
  Serial.println("Simple RGB");
  Serial.println("Jorge Villalobos C. - v1.0 - Jun.2017");
  Serial.println("");

  Serial.println(rgb.inicio() ? "Sensor TCS34725 found": "TCS34725 Sensor NOT FOUND !!!");
}  // void setup();

void loop() {
  // Do the color reading
  rgb.getRGBColor();
  Serial.print("Detected color: ");
  
  // Displays the RGB composition of the detected color
  Serial.print(" | R:"); Serial.print(rgb.Red());
  Serial.print(" - G:"); Serial.print(rgb.Green());
  Serial.print(" - B:"); Serial.print(rgb.Blue());
  Serial.println("");
  delay(300);
}  // void loop()
```

## Methods

Method | Description
------ | -----------
begin() | Initialize the TCS34725 sensor
getRGBColor() | Do the reading
Red() | Red value read
Green() | Green value read
Blue() | Blue value read
Clear() | Clear value read
Diff(r, g, b) | Calculate the Euclidean distance of the detected color with the color RGB passed as a parameter

## License
Released under **MIT License**
