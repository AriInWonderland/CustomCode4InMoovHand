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
#include "RMenu.h"
#include "RFunctions.h"
#include "RFlow.h"
#include "Menus.h"

void setup(){
    servs[wrist].attach(wrist);
    servs[pinky].attach(pinky);
    servs[anular].attach(anular);
    servs[mayor].attach(mayor);
    servs[indice].attach(indice);
    servs[pulgar].attach(pulgar);

    pinMode(8, INPUT_PULLUP);

    Serial.begin(9600);
    print_pinout();
    profile_menu();
    //input_history();
}

void loop(){
    switch(profile_menu()){
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