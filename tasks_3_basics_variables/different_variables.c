#include <stdio.h>

int main(void) {   // The MAIN-program.
    int total_number; 
    float decimal_number;
    
    printf("Anna kokonaisluku: ");
    scanf("%d", &total_number); // Expecting a DECIMAL INTEGER -> "%d", other options are e, E, f, G, g... Just a reminder.

    printf("Anna desimaaliluku: ");
    scanf("%f", &decimal_number);

    printf("Syöttämäsi kokonaisluku: %d\n\
    Syöttämäsi desimaaliluku kahden desimaalin tarkkuudella: %.2f\n", total_number, decimal_number); // Creating newline after output is provided.
    
    return 0; // Exiting the program.
}