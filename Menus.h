#define LENGTH 40

void repeater(int i, char l, char c, char r){
    int a=1;
    Serial.print(l);

    for(; a<i; a++)
        Serial.print(c);
    Serial.print(r);
}

void print_pinout(){
    repeater(LENGTH, '+','-','+');
    Serial.println("\n| PinOut Right Hand:\t\t|");
    repeater(LENGTH,'+','-','+');
    Serial.println("\n|  2. Wrist.\t\t\t\t|");
    Serial.println("|  3. Pinky.\t\t\t\t|");
    Serial.println("|  4. Anular.\t\t\t\t|");
    Serial.println("|  5. Mayor.\t\t\t\t|");
    Serial.println("|  6. Indice.\t\t\t\t|");
    Serial.println("|  7. Pulgar.\t\t\t\t|");
    Serial.println("| 14. ");
    repeater(LENGTH, '+','-','+');
    Serial.print("\n\n\n");
}

int profile_menu(){
    repeater(LENGTH, '+', '-', '+');
    Serial.println("| Choose a profile:\t\t|");
    repeater(LENGTH, '+', '-', '+');
    Serial.println("|  1. Right Hand\t\t|");
    Serial.println("|  2. Left Hand\t\t|");
    Serial.println("|  3. Dual Mode\t\t|");
    repeater(LENGTH, '+', '-', '+');
    return Serial.parseInt();
}

void input_history(){
    repeater(LENGTH, '+','-','+');
    Serial.println("\n| Input History:\t\t\t|");
    repeater(LENGTH, '+','-','+');
    Serial.println("\n");
}