/*PINOUT:
2 Mu;eca
3 Me;ique
4 Anular
5 Mayor
6 Indce
7 Pulgar
*/
#include <Servo.h>
#include "PinOut.h"
#include "Functions.h"

void print_menu();

void setup(){
    servs[wrist].attach(wrist);
    servs[pinky].attach(pinky);
    servs[anular].attach(anular);
    servs[mayor].attach(mayor);
    servs[indice].attach(indice);
    servs[pulgar].attach(pulgar);

    pinMode(8, INPUT_PULLUP);

    Serial.begin(9600);
    print_menu();
}

void loop(){
    int read = Serial.parseInt();
        switch(read){
            case -1:
                Serial.println("Homing...");
                home_custom(servs);
                break;
            case 1:
                Serial.println("Going to 0");
                to_zero(servs);
                break;
            case 2:
                Serial.println("Close_Open function");
                close_open(servs);
                break;
            case 3:
                Serial.println("The Unforgiven");
                metallica(servs);
                break;
            case 4:
                Serial.println("Only wrist");
                only_wrist(servs);
                break;
            case 5:
                Serial.println("Haha god.");
                not_good(servs);
                break;
            default:
                break;
       }
}