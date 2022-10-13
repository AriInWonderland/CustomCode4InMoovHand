#define LENGTH 40

void repeater(int i, char l, char c, char r){
    int a=1;

    Serial.print(l);
    for(; a<i; a++)
        Serial.print(c);
    Serial.print(r);
}

void print_pinout(){
    Serial.println("\n\n");
    repeater(LENGTH, '+','-','+');
    Serial.println("\n| PinOut:\t\t\t\t|");
    repeater(LENGTH,'+','-','+');
    Serial.println("\n|  2. Muñeca Derecha\t\t\t|");
    Serial.println("|  3. Meñique Derecha\t\t\t|");
    Serial.println("|  4. Anular Derecho.\t\t\t|");
    Serial.println("|  5. Mayor Derecho.\t\t\t|");
    Serial.println("|  6. Indice Derecho.\t\t\t|");
    Serial.println("|  7. Pulgar Derecho.\t\t\t|");
    Serial.println("| 14. Muñeca Izquierda.\t\t\t|");
    Serial.println("| 15. Meñique Izquierdo.\t\t| ");
    Serial.println("| 16. Anular Izquierdo.\t\t\t|");
    Serial.println("| 17. Mayor Izquierdo.\t\t\t|");
    Serial.println("| 18. Indice Izquierdo.\t\t\t|");
    Serial.println("| 19. Pulgar Izquierdo.\t\t\t|");
    repeater(LENGTH, '+','-','+');
    Serial.print("\n\n\n");
}

void profile_menu(){
    repeater(LENGTH, '+', '-', '+');
    Serial.println("\n| Choose a profile:\t\t\t|");
    repeater(LENGTH, '+', '-', '+');
    Serial.println("\n|  1. Right Hand\t\t\t|");
    Serial.println("|  2. Left Hand\t\t\t\t|");
    Serial.println("|  3. Dual Mode\t\t\t\t|");
    repeater(LENGTH, '+', '-', '+');
    Serial.print("\n");
    return;
}

void input_history(){
    repeater(LENGTH, '+','-','+');
    Serial.println("\n| Input History:\t\t\t|");
    repeater(LENGTH, '+','-','+');
    Serial.println("\n");
}