void right_menu(){
    repeater(LENGTH, '+','-','+');
    Serial.println("\n| Menu:\t\t\t\t\t|");
    repeater(LENGTH,'+','-','+');
    Serial.println("\n| -1. Exit.\t\t\t\t|");
    Serial.println("|  1. Go to 0 (Closes the hand).\t|");
    Serial.println("|  2. Open and close the hand.\t\t|");
    Serial.println("|  3. Metallica horns.\t\t\t|");
    Serial.println("|  4. Move the wrist.\t\t\t|");
    Serial.println("|  5. Bad hand.\t\t\t\t|");
    Serial.println("|  6. Otaku o peronista??.\t\t|");
    Serial.println("|  7. Slowwwwwww home.\t\t\t|");
    Serial.println("|  8. Home\t\t\t\t|");
    Serial.println("|  9. Individual.\t\t\t\t|");
    Serial.println("| 10. De chill.\t\t\t\t|");
    Serial.println("| 11. RKT.\t\t\t\t\t|");
    Serial.println("| 12. El titi\t\t\t\t|");
//    Serial.println("| 13. Comisteee\t\t\t\t|");
    Serial.println("| 14. Piedra\t\t\t\t|");
    Serial.println("| 15. Papel\t\t\t\t|");
    Serial.println("| 16. Tijera\t\t\t\t|");
    Serial.println("| 17. Game\t\t\t\t|");
    repeater(LENGTH, '+','-','+');
    Serial.print("\n\n\n");   

    right_input();
}