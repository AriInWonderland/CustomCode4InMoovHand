void to_zero(Servo[]){
    int i;
    for(i=0; i<=NSERVOS; i++){
        servs[i].write(0);
        delay(250);
    }
}

void home_custom(Servo[]){
    int i;

    for(i=0;i<=NSERVOS; i++)
        servs[i].write(90);

    for(i=0; i<=NSERVOS; i++)
        servs[i].write(180);

    for(i=0; i<=NSERVOS; i++)
        servs[i].write(0);
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
}

void metallica(Servo[]){
    servs[wrist].write(90);
    delay(500);
    servs[pinky].write(0);
    delay(500);
    servs[anular].write(180);
    delay(500);
    servs[mayor].write(180);
    delay(500);
    servs[indice].write(0);
    delay(500);
    servs[pulgar].write(180);
    delay(500);
    servs[wrist].write(0);
    delay(500);
    servs[wrist].write(180);
}

void only_wrist(Servo[]){
    servs[wrist].write(90);
    servs[wrist].write(0);
    servs[wrist].write(180);
    servs[wrist].write(0);
}

void not_good(Servo[]){
    servs[pinky].write(180);
    delay(500);
    servs[anular].write(180);
    delay(500);
    servs[mayor].write(0);
    delay(500);
    servs[indice].write(180);
    delay(500);
    servs[pulgar].write(180);
}

void Otaku_O_Peronista(Servo[]){
    servs[pinky].write(180);
    delay(500);
    servs[anular].write(180);
    delay(500);
    servs[mayor].write(0);
    delay(500);
    servs[indice].write(0);
    delay(500);
    servs[pulgar].write(180);
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
}