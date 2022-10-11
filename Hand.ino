/*PINOUT Derecha:
2 Mu;eca
3 Me;ique
4 Anular
5 Mayor
6 Indce
7 Pulgar

PinOut Izquierda:
14 Mue;ca
15 Me;ique
16 Anular
17 Mayor
18 Indice
19 Pulgar
*/
#include <Servo.h>
#include "PinOut.h"
#include "Menus.h"
#include "RFunctions.h"
#include "RFlow.h"
#include "RMenu.h"

void setup(){
    attachServos();
    pinMode(8, INPUT_PULLUP);

    Serial.begin(9600);
    print_pinout();
    //input_history();
    profile_menu();
}

void loop(){
    switch(Serial.parseInt()){
        case 1:
            Serial.println("Right Hand");
            right_menu();
            break;
        case 2:
            Serial.println("Left Hand");
            break;
        case 3:
            Serial.println("Dual");
            break;
        default:  
            break;
    } 
}