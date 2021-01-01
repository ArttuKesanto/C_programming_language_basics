#include <stdio.h>

int main(void) {   // CMD + SHIFT + F -> Auto-indent with C.
    int number, squared;
    printf("Anna kokonaisluku: ");
    scanf("%d", &number); // Expecting a DECIMAL INTEGER -> "%d", other options are e, E, f, G, g...

    squared = (number * number);
    printf("Antamasi luvun neliö on %d\n", squared); // Creating newline after output is provided.
    
    return 0; // Exiting the program.
}