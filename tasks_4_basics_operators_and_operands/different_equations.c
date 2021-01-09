#include <stdio.h>

int main(void) {   // MAIN program.
    int input_one, input_two, result_one, result_two, result_three;
    printf("Anna eka luku: ");
    scanf("%d", &input_one); // Asking for the first input.

    printf("Anna toka luku: "); // Asking for the second input.
    scanf("%d", &input_two);
    
    result_one = (input_one + input_two); // Saving the results to variables.
    result_two = (input_one - input_two);
    result_three = (input_one * input_two);

    printf("%d + %d = %d\n\
%d - %d = %d\n\
%d * %d = %d\n", input_one, input_two, result_one, input_one, input_two, result_two, 
                        input_one, input_two, result_three); // Creating newline after results are provided.
    
    return 0; // Exiting the program.
}