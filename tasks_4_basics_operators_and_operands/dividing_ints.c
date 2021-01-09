#include <stdio.h>

int main(void) {   // MAIN program.
    int input_one, divident = 2; // Init two ints.
    printf("Anna kokonaisluku: ");
    scanf("%d", &input_one); // Asking for the input.

    printf("Luku on %d\n", (input_one % divident)); // New line after the output is provided.
    
    return 0; // Exiting the program.
}