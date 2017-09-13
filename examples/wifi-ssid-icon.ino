/*
 __          ___ ______ _                 
 \ \        / (_)  ____| |                
  \ \  /\  / / _| |__  | |_   _  ___ _ __ 
   \ \/  \/ / | |  __| | | | | |/ _ \ '__|
    \  /\  /  | | |    | | |_| |  __/ |   
     \/  \/   |_|_|    |_|\__, |\___|_|   
                           __/ |          
                          |___/           

  https://wiflyer.wordpress.com
  https://github.com/wiflyer

*/

#include <ESP8266WiFi.h> 

char wifiap_ssid_1[32] = {'W','i','F','l','y','e','r',' ' ,0xF0,0x9F,0x98,0x83 ,0x00}; // SMILING FACE WITH OPEN MOUTH
char wifiap_ssid_2[32] = {'W','i','F','l','y','e','r',' ' ,0xF0,0x9F,0x92,0xAC ,0x00}; // SPEECH BALLOON

void setup() {
  WiFi.persistent(false);
  WiFi.mode(WIFI_AP_STA); 
  WiFi.softAP(wifiap_ssid_1); 
}

void loop() {
  WiFi.softAP(wifiap_ssid_1); delay(1000);
  WiFi.softAP(wifiap_ssid_2); delay(1000);
}
