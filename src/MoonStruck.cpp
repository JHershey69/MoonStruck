#include "MoonStruck.h"

MoonStruck::MoonStruck()
{
  //ctor
}



int MoonStruck::MoonStruck(char* _KEY, float _LAT, float _LON)
{
  int error_code;
  
  sprintf(moonURL, "https://api.ipgeolocation.io/astronomy?apiKey=%s&lat=%f&long=%f", _KEY, _LAT, _LON);
  
  HTTPClient http;
  http.begin(moonURL);

  int httpCode = http.GET();

  if (httpCode > 399)
  {
    if (httpCode == 404)
    {
      http.end();
      error_code += 4;
      return error_code;
    }
    else
    {
      http.end();
      error_code += 5;
      return error_code;
    }

  }

  DynamicJsonDocument doc(768);
  deserializeJson(doc, http.getString());

  location_latitude = doc["location"]["latitude"]; // 39.953728
  location_longitude = doc["location"]["longitude"]; // -74.197922

  date = doc["date"]; // "2020-12-28"
  current_time = doc["current_time"]; // "13:08:16.127"
  sunrise = doc["sunrise"]; // "07:17"
  sunset = doc["sunset"]; // "16:39"
  sun_status = doc["sun_status"]; // "-"
  solar_noon = doc["solar_noon"]; // "11:58"
  day_length = doc["day_length"]; // "09:22"
  sun_altitude = doc["sun_altitude"]; // 24.772448087739075
  sun_distance = doc["sun_distance"]; // 147116479.53624782
  sun_azimuth = doc["sun_azimuth"]; // 197.6059572088118
  moonrise = doc["moonrise"]; // "15:29"
  moonset = doc["moonset"]; // "05:56"
  moon_status = doc["moon_status"]; // "-"
  moon_altitude = doc["moon_altitude"]; // -18.923851294326536
  moon_distance = doc["moon_distance"]; // 397569.6133900794
  moon_azimuth = doc["moon_azimuth"]; // 33.592474665393695
  moon_parallactic_angle = doc["moon_parallactic_angle"]; // -17.897918830310246

  http.end();
  return 0;
}


MoonStruck::~MoonStruck()
{
  //dtor
}
