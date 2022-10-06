void right_input(){
    int read = Serial.parseInt();
        if(read)
            Serial.flush();
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
                case 6:
                    Serial.println("Miku, Miku, you can call me Miku");
                    Otaku_O_Peronista(servs);
                    break;
                case 7:
                    Serial.println("Slow motion");
                    config(servs);
                    break;
                default:
                    break; 
            }
}