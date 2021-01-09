#include <stdio.h>

int main(void) {   // MAIN program.
    int input_one, divident = 2; // Init two ints.
    
    printf("Anna kokonaisluku: ");
    scanf("%d", &input_one); // Asking for the input.
    
    if (input_one % divident == 0) {
        printf("Luku %d on parillinen.\n", input_one);
    } else if (!(input_one % divident == 0)) {
        printf("Luku %d on pariton.\n", input_one);
    } else {
        printf("Syötä kokonaisluku.\n"); // New line after the output is provided.
    }
    
    return 0; // Exiting the program.
}