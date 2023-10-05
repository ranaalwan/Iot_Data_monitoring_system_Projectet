#include <DHT.h>
#define Type DHT11
int sensePin=2; //Have to select pin 2 for the signal
DHT HT(sensePin,Type);
float tempC;
float humidity;
float dt=1000;

void setup()
{
Serial.begin(9600);
HT.begin();
}
void loop()
{
  tempC = HT.readTemperature();  
  humidity = HT.readHumidity();
  Serial.print(humidity);
  Serial.print("/");
  Serial.println(tempC);  
  delay(dt);
}