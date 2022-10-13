void pre(){
    for(int i=0; i<=NSERVOS; i++)
        servs[i].write(180);
}

void to_zero(Servo[]){
    int i;
    for(i=0; i<=NSERVOS; i++){
        servs[i].write(0);
        delay(250);
    }
    Serial.println("Done...");
}

void home_custom(Servo[]){
    int i;

    for(i=0;i<=NSERVOS; i++)
        servs[i].write(90);

    for(i=0; i<=NSERVOS; i++)
        servs[i].write(180);

    for(i=0; i<=NSERVOS; i++)
        servs[i].write(0);
    Serial.println("Done...");
}
void close_open(Servo[]){
    int i;

    for(i=1; i<=NSERVOS; i++){
        servs[i].write(180);
        delay(100);
    }
    delay(1000);
    for(; i>=0; i--){
        servs[i].write(0);
        delay(100);
    }
    Serial.println("Done...");
}

void metallica(Servo[]){
    servs[Rwrist].write(90);
    servs[Rpinky].write(180);
    servs[Ranular].write(0);
    servs[Rmayor].write(0);
    servs[Rindice].write(180);
    servs[Rpulgar].write(0);
    servs[Rwrist].write(180);
    servs[Rwrist].write(0);
    Serial.println("Done...");
}

void only_wrist(Servo[]){
    servs[Rwrist].write(90);
    servs[Rwrist].write(0);
    servs[Rwrist].write(180);
    servs[Rwrist].write(0);
    Serial.println("Done...");
}

void not_good(Servo[]){
    pre();
    delay(250);
    servs[Rpinky].write(0);
    servs[Ranular].write(0);
    servs[Rmayor].write(180);
    servs[Rindice].write(0);
    servs[Rpulgar].write(0);
    Serial.println("Done...");
}

void Otaku_O_Peronista(Servo[]){
    pre();
    delay(250);
    servs[Rpinky].write(0);
    servs[Ranular].write(0);
    servs[Rmayor].write(180);
    servs[Rindice].write(180);
    servs[Rpulgar].write(0);
    Serial.println("Done...");
}

void config(Servo[]){
    int i;
    for(i=0; i<=9; i++){
        servs[i].write(90);
        delay(1000);
    }
    delay(2500);
    for(i=0; i<=9; i++){
        servs[i].write(0);
        delay(1000);
    }    
    delay(2500);
    for(i=0; i<=9; i++){
        servs[i].write(180);
        delay(1000);
    }
    delay(2500);
    for(i=0; i<=9; i++){
        servs[i].write(0);
        delay(1000);
    }
    Serial.println("Done...");
}

int finger_switch(){
    int r, check = 0;
    Serial.println("\n\n");
    repeater(LENGTH, '+', '-', '+');
    r = Serial.parseInt(); 
    if(r!=0)
        while(check = 0)
            switch(r){
                case -1:
                    check = r;
                    return r;
                case 2:
                    Serial.println("Muñeca");
                    check = r;
                    return r;
                case 3:
                    Serial.println("Meñique");
                    check = r;
                    return r;
                case 4:
                    Serial.println("Anular");
                    check = r;
                    return r;
                case 5:
                    Serial.println("Mayor");
                    check = r;
                    return r;
                case 6:
                    Serial.println("Indice");
                    check = r;
                    return r;
                case 7:
                    Serial.println("Pulgar.");
                    check = r;
                    return r;
                default:
                    break;
    }
    repeater(LENGTH, '+', '-', '+');
    return r;
}

void right_fingers(){
    int ang, read = 0, check = 1;
    //Elegir un dedo en un switch...
    read = finger_switch();
    //moverlo con grados
    while((ang = Serial.parseInt()) >= 0){
        if(ang > 0 && ang <= 180){
            Serial.println(ang);
            delay(100);
            servs[read].write(ang);
        }
    } 
    Serial.println("Saliendo...");
    delay(250);
    return;
}

void play_menu(){
    repeater(LENGTH, '+','-','+');
    Serial.println("\n| Que queres mover?\t\t\t|");
    repeater(LENGTH, '+','-','+');
    Serial.println("\n| -1. Salir.\t\t\t\t|");
    Serial.println("|  2. Muñeca\t\t\t\t|");
    Serial.println("|  3. Meñique\t\t\t\t|");
    Serial.println("|  4. Anular\t\t\t\t|");
    Serial.println("|  5. Mayor\t\t\t\t|");
    Serial.println("|  6. Indice\t\t\t\t|");
    Serial.println("|  7. Pulgar\t\t\t\t|");
    repeater(LENGTH, '+','-','+');

    right_fingers();
    return;
}