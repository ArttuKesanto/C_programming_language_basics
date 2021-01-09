#include <stdio.h> // Pre-handler.

int main(void) {

    int number_one, number_two, number_three, number_four;
    FILE *open; // Init FILE pointer.
    
    // open = fopen("file_example.txt", "r"); Can be written straight and directly to the IF-clause.

    if ((open = fopen("numbers.txt", "r")) == NULL)
    {
        printf("There has been an error opening the file! Make sure the file exists...\n");
        return 0; // Exit the program.
    }
    else
    {
        fscanf(open, "%d %d %d %d", &number_one, &number_two, &number_three, &number_four);
        fclose(open); // Remember to close the file.
    }

    printf("Tiedostosta löytyneet luvut:\n\
%d, %d, %d ja %d\n\n", number_one, number_two, number_three, number_four);

    int total_sum = (number_one + number_two + number_three + number_four); // Init total_sum, add numbers.

    printf("Lukujen summa: %d\n", total_sum);

    return 0;
}