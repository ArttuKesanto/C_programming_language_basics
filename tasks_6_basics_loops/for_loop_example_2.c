#include <stdio.h>

int main(void) { // MAIN program.
	int input, i, result = 1; // Init variables. THIS program could be done with while as well.

    printf("Anna kokonaisluku: ");
    scanf("%d", &input);
     
	for(i = 1; i <= input; i++) { 
        result = result * i;

        if (i == input) {
            printf("Luvun %d kertoma on %d\n", input, result);
            break;
        }
	}

    return 0;
}