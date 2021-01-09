#include <stdio.h> 

int *smallest_number_function(int *numbers, int x); // Prototyping the function; accepts pointer for one argument, int for another.
                                                    // Returns a pointer.

int main(void)
{
	int total = 5;
	int array[] = {21, 55, 5, 3, 43};
	
    int *smallest = smallest_number_function(array, total); // Conveying the array to the function as a POINTER.

    printf("Taulukon pienin luku on: %d.\n", *smallest);

	return 0;
}

int *smallest_number_function(int *numbers, int x)
{
    int *smallest_subprogram = &numbers[0]; // Pointer int that points to the address of the value found in numbers[0].
	
    for(int i=0; i<x; i++) {
		if (*smallest_subprogram > numbers[i]) {
            *smallest_subprogram = numbers[i];
        }
	}
    return smallest_subprogram; // Returning the POINTER, no need for explicitly state that it is a pointer.
}