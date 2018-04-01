#include "SensorRGB.h"
//                [ ---- Constructor ---- ]
SensorRGB::SensorRGB(){};

//                [ ---- Methods ---- ]
bool SensorRGB::begin(){
  return _tcs.begin();
}  // void begin()

void SensorRGB::getRGBColor() {
  _tcs.setInterrupt(false);
  delay(60);
  _tcs.getRawData(&_r, &_g, &_b, &_c);
  _tcs.setInterrupt(true);
  
  // Convert the values obtained to valid RGB values (0-255)
  _red = _r; _red /= _c; _red *= 256;
  _green = _g; _green /= _c; _green *= 256;
  _blue = _b; _blue /= _c; _blue *= 256;
}  // void getRGBColor()

uint16_t SensorRGB::Red(){
  return (uint16_t)_red;
}  // uint16_t Red()

uint16_t SensorRGB::Green(){
  return (uint16_t)_green;
}  // uint16_t Green()

uint16_t SensorRGB::Blue(){
  return (uint16_t)_blue;
}  // uint16_t Blue()

uint16_t SensorRGB::Clear(){
  return _c;
}  // uint16_t Clear()

// ---- Calculate the Euclidean distance of the detected color 
//      with the color RGB passed as a parameter
float SensorRGB::Diff(
  uint16_t r, uint16_t g, uint16_t b
) {
  return sqrt( sq(_red - r) + sq(_green - g) + sq(_blue - b));  
} // float Diff()
