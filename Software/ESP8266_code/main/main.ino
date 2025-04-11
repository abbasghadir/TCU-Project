#include <ESP8266WiFi.h>
const char * SSID = "AccessPoint";
const char * PASSWORD = "Password";


void setup() {
  Serial.begin(115200);
  WiFi.begin(SSID,PASSWORD);
  while (WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(500);
  }
  Serial.println("");
  Serial.println("WiFi is Connected!");
  Serial.print("IP address is: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:

}
