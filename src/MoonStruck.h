#ifndef MOONSTRUCK_H
#define MOONSTRUCK_H

#include <Arduino.h>
#include <ArduinoJson.h>
#include <HTTPClient.h>

class MoonStruck
{
  public:
    MoonStruck();
    virtual ~MoonStruck();
  
    int parseMoonStruck(char* _KEY, float _LAT, float _LON);

    //Variables
    float location_latitude; // 39.953728
    float location_longitude; // -74.197922

    const char* date; // "2020-12-28"
    const char* current_time; // "13:08:16.127"
    const char* sunrise; // "07:17"
    const char* sunset; // "16:39"
    const char* sun_status; // "-"
    const char* solar_noon; // "11:58"
    const char* day_length; // "09:22"
    float sun_altitude; // 24.772448087739075
    float sun_distance; // 147116479.53624782
    float sun_azimuth; // 197.6059572088118
    const char* moonrise; // "15:29"
    const char* moonset; // "05:56"
    const char* moon_status; // "-"
    float moon_altitude; // -18.923851294326536
    float moon_distance; // 397569.6133900794
    float moon_azimuth; // 33.592474665393695
    float moon_parallactic_angle; // -17.897918830310246


  protected:

  private:
  
char moonURL[200];

};

#endif // MOONSTRUCK_H
