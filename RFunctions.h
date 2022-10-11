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
        delay(500);
    }
    delay(2000);
    for(i=1; i<=NSERVOS; i++){
        servs[i].write(0);
        delay(500);
    }
    Serial.println("Done...");
}

void metallica(Servo[]){
    servs[Rwrist].write(90);
    delay(500);
    servs[Rpinky].write(0);
    delay(500);
    servs[Ranular].write(180);
    delay(500);
    servs[Rmayor].write(180);
    delay(500);
    servs[Rindice].write(0);
    delay(500);
    servs[Rpulgar].write(180);
    delay(500);
    servs[Rwrist].write(0);
    delay(500);
    servs[Rwrist].write(180);
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
    servs[Rpinky].write(180);
    delay(500);
    servs[Ranular].write(180);
    delay(500);
    servs[Rmayor].write(0);
    delay(500);
    servs[Rindice].write(180);
    delay(500);
    servs[Rpulgar].write(180);
    Serial.println("Done...");
}

void Otaku_O_Peronista(Servo[]){
    servs[Rpinky].write(180);
    delay(500);
    servs[Ranular].write(180);
    delay(500);
    servs[Rmayor].write(0);
    delay(500);
    servs[Rindice].write(0);
    delay(500);
    servs[Rpulgar].write(180);
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

void right_fingers(){
    int read = Serial.parseInt();
    int ang;
    if(read == -1)
        return;
    if(read){
        Serial.flush();
        while((ang = Serial.parseInt()) != -1)
            servs[read].write(ang);
        return;
    } 
}

void play_menu(){
    int check = 0;
    repeater(LENGTH, '+','-','+');
    Serial.println("\n| What do you want to move?");
    Serial.println("| -1. Salir.");
    Serial.println("|  2. Muñeca");
    Serial.println("|  3. Meñique");
    Serial.println("|  4. Anular");
    Serial.println("|  5. Mayor");
    Serial.println("|  6. Indice");
    Serial.println("|  7. Pulgar");
    repeater(LENGTH, '+','-','+');

    right_fingers();
    return;
}
