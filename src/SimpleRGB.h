#include <Arduino.h>
#include <Adafruit_TCS34725.h>
#ifndef SENSORRGB_H
#define SENSORRGB_H
class SensorRGB {
   public:
     // ---- Constructors
     SensorRGB();
  
     // ---- Methods
     bool     begin();
     void     getRGBColor();
     uint16_t Red();
     uint16_t Green();
     uint16_t Blue();
     uint16_t Clear();
     float    Diff(uint16_t r, uint16_t g, uint16_t b);
     
   private:
     uint16_t  _r,
               _g,
               _b,
               _c;
     float     _red,
               _green,
               _blue;
     Adafruit_TCS34725 _tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);
 };
#endif
