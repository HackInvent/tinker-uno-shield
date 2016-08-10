#include <tinkerlib.h>

#define TINKER_UNO_SHIELD   //on utilise le module TINKER_UNO_SHIELD
#define TINKER_BUTTON       //on utilise le module TINKER_BUTTON


TinkerLED maLed(D3); //définition de la LED sur le port D3 du TINKER UNO SHIELD

loop(){
  maLed.on();        //allumer la LED
  delay(1000);       //retarder le programme 1sec
  maLed.off();       //eteindre la LED
}
