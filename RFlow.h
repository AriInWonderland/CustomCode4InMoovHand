void right_input(){
    int check=0;
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
                break;
            default:
                break; 
        }
    }
    return;
}