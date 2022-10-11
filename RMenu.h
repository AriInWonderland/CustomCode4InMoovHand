void right_menu(){
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
    Serial.println("|  8. Let's play.");
    repeater(LENGTH, '+','-','+');
    Serial.print("\n\n\n");   

    right_input();

    return;
}