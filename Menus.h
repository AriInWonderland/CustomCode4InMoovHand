/* Some ascii characters to help!!!
╔═╗
    ║
╚═╝
╠ ╣
╬
[*/
#define LENGTH 40

void repeater(int i, char l, char c, char r){
    int a=1;
    Serial.print(l);

    for(; a<i; a++)
        Serial.print(c);
    Serial.print(r);
}

void print_menu(){
    repeater(LENGTH, '+','-','+');
    Serial.println("\n| Menu:\t\t\t\t\t|");
    repeater(LENGTH,'+','-','+');
    Serial.println("\n| -1. Home.\t\t\t\t|");
    Serial.println("|  1. Go to 0.\t\t\t\t|");
    Serial.println("|  2. Close and open the hand.\t\t|");
    Serial.println("|  3. Metallica horns.\t\t\t|");
    Serial.println("|  4. Move the wrist.\t\t\t|");
    Serial.println("|  5. Bad hand.\t\t\t\t|");
    Serial.println("|  6. Otaku o peronista??.\t\t|");
    Serial.println("|  7. Slowwwwwww home.\t\t\t|");
    repeater(LENGTH, '+','-','+');
    Serial.print("\n\n\n");
}

void print_pinout(){
    repeater(LENGTH, '+','-','+');
    Serial.println("\n| PinOut:\t\t\t\t|");
    repeater(LENGTH,'+','-','+');
    Serial.println("\n|  2. Wrist.\t\t\t\t|");
    Serial.println("|  3. Pinky.\t\t\t\t|");
    Serial.println("|  4. Anular.\t\t\t\t|");
    Serial.println("|  5. Mayor.\t\t\t\t|");
    Serial.println("|  6. Indice.\t\t\t\t|");
    Serial.println("|  7. Pulgar.\t\t\t\t|");
    repeater(LENGTH, '+','-','+');
    Serial.print("\n\n\n");
}

void input_history(){
    repeater(LENGTH, '+','-','+');
    Serial.println("\n| Input History:\t\t\t|");
    repeater(LENGTH, '+','-','+');
    Serial.println("\n");
}