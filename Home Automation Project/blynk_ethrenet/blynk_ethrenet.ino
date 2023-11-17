#define BLYNK_TEMPLATE_ID "TMPLetCQbN_L" 
#define BLYNK_DEVICE_NAME "Home Automation" 
#define BLYNK_AUTH_TOKEN "goRS6mQFG-RfSJRaz_PBn6r867ijgRr2"

#include <SPI.h>
#include <Ethernet.h>
#include <BlynkSimpleEthernet.h>

#define LED     2


char auth[] = BLYNK_AUTH_TOKEN;


BLYNK_WRITE(V0)
{
  int value = param.asInt();
  if (value)
  {
    digitalWrite(LED,1);
  }
  else
  {
    digitalWrite(LED,0);
  }
  
}

void setup() 
{
  pinMode(LED, OUTPUT);
  // put your setup code here, to run once:
  Blynk.begin(auth);
}

void loop() 
{
  // put your main code here, to run repeatedly:
   Blynk.run();

}
