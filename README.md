# MoonStruck
## MoonStruck Library for ESP32 to find everything LUNAR

### Requires ArduinoJson, HTTPClient (this is IN the ESP32 just include it)

#### Get a kay here: https://app.ipgeolocation.io/
<hr></hr>
<br>####Variables
 
 float location_latitude; // 39.953728<br>
 float location_longitude; // -74.197922<br>
 const char* date; // "2020-12-28"<br>
 const char* current_time; // "13:08:16.127"<br>
 const char* sunrise; // "07:17"<br>
 const char* sunset; // "16:39"<br>
 const char* sun_status; // "-"<br>
 const char* solar_noon; // "11:58"<br>
 const char* day_length; // "09:22"<br>
 float sun_altitude; // 24.772448087739075<br>
 float sun_distance; // 147116479.53624782<br>
 float sun_azimuth; // 197.6059572088118<br>
 const char* moonrise; // "15:29"<br>
 const char* moonset; // "05:56"<br>
 const char* moon_status; // "-"<br>
 float moon_altitude; // -18.923851294326536<br>
 float moon_distance; // 397569.6133900794<br>
 float moon_azimuth; // 33.592474665393695<br>
 float moon_parallactic_angle; // -17.897918830310246<br>
<br>
### #include <MoonStruck.h>
<br> MoonStruck MS; <---Invokde
<br> MS.variableName; <--- use variables
<br> MS.MoonStruck(char key, float latitude, float longitude); <-- call API
