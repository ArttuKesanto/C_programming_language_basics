#include <stdio.h> // Pre-handler and library in use.
 
int smallest(int, int, int); // Prototype of the function provided; name identical to the function below MAIN.
int biggest(int, int, int);
 
int main(void) { 
	int first_input, second_input, third_input; // Init variables.
    int smallest_of_three, biggest_of_three;

	printf("Anna 1. luku: ");  
	scanf("%d", &first_input);

    printf("Anna 2. luku: ");
    scanf("%d", &second_input);

    printf("Anna 3. luku: ");
    scanf("%d", &third_input);

    smallest_of_three = smallest(first_input, second_input, third_input);
    biggest_of_three = biggest(first_input, second_input, third_input); 
	
	printf("Syöttämistäsi luvuista suurin oli %d ja pienin %d.\n", biggest_of_three, smallest_of_three);

	return 0; // Exit the program.

}  


// FUNCTIONS used in MAIN.

int smallest(int first_input, int second_input, int third_input) { 
	int smallest = first_input;  

	if (second_input < first_input) {
        smallest = second_input;

        if (smallest > third_input) {
            smallest = third_input;
        }

    } else if (third_input < first_input) {
        smallest = third_input;
        }

	return smallest; // Returns the value from this function. Can be saved to a variable.
}

int biggest(int first_input, int second_input, int third_input) { 
	int biggest = first_input;  

	if (second_input > first_input) {
        biggest = second_input;

        if (biggest < third_input) {
            biggest = third_input;
        }

    } else if (third_input > first_input) {
        biggest = third_input;
        }

	return biggest; // Returns the value from this function. Can be saved to a variable.
}