void right_menu();

void right_input(){
    static int check=0;
    if(check == -1){
        check = 0;
        return;
    }
    while(check == 0){
        switch(Serial.parseInt()){
            case -1:
                Serial.println("Exiting...\n\n");
                check = -1;
                return;
            case 1:
                Serial.println("Going to 0");
                to_zero(servs);
                break;
            case 2:
                Serial.println("Open and close function");
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
            case 6:
                Serial.println("Miku, Miku, you can call me Miku"); 
                Otaku_O_Peronista(servs);
                break;
            case 7:
                Serial.println("Slow motion");
                config(servs);
                break;
            case 8:
                Serial.println("Homing...");
                home_custom(servs);
                break;
            case 9:
                play_menu();
                right_menu();
                break;
            case 10:
                Serial.println("De chillllll");
                chill();
                break;
            case 11:
                Serial.println("A, B, C, D, EEEHHHHH");
                l_dedos();
                break;
            case 12:
                Serial.println("Pffff rlly bro?");
                elTiti();
                break;
            case 13:
                Serial.println("Todavia no pibe");
                break;
            case 14:
                Serial.println("Piedra");
                rock();
                break;
            case 15:
                Serial.println("Papel");
                paper();
                break;
            case 16:
                Serial.println("Tijera");
                Otaku_O_Peronista(servs);
                break;    
            case 17:
                Serial.println("Vamos a jugar!!!");
                seeno();
                break;

            default:
                break; 
        }
    }
    return;
}