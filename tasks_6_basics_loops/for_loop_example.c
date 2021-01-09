#include <stdio.h>

int main(void) { // MAIN program.
	int input, i; // Init variables.

    printf("Anna kokonaisluku:");
    scanf("%d", &input);
     
	for(i = 1; i <= input; i++) { 
        printf("%d\n", i); // Print with newline.
	}

    return 0;
}