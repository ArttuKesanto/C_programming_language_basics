#include <stdio.h>

// Could prototype functions here that would / could be used with calculating table-elements.

int main(void) {
    
    int input, i; // Init variables.
    float hours, total_hours = 0, average_hours;
    float hours_table[30]; // Init an allocated table for 30 elements.

    printf("Ohjelma laskee yhteen haluamasi ajanjakson aikana\n\
tehdyt työtunnit sekä keskimääräisen työpäivän pituuden.\n\n");
    printf("Kuinka monta päivää: ");
    scanf("%d", &input);

    for (i = 0; i < input; i++) { // Asking the desired amount of hours and saving them to the list (array). Indexing starts from 0.
        if (i == (input - 1)) {
            printf("Anna %d. päivän työtunnit: ", (i+1)); // Creating the desired newlines after last input.
            scanf("%f", &hours);

            hours_table[i] = hours;

        } else {
            printf("Anna %d. päivän työtunnit: ", (i+1));
            scanf("%f", &hours);

            hours_table[i] = hours;

        }
    }

    for (int i = 0; i < input; i++) { // Calculating the total hours from the array. COULD be its own function.
        total_hours += hours_table[i];
    }

    average_hours = (total_hours / input); // Calculating the average hours from the array. COULD BE its own function.

    printf("\nTehdyt työtunnit yhteensä: %.1f\n", total_hours);
    printf("Keskimääräinen työpäivän pituus: %.1f\n", average_hours);
    printf("Syötetyt tunnit: ");

    for (int index = 0; index < input; index++) {
        if (index == (input - 1)) {
            printf("%.1f\n", hours_table[index]); // Creating newline after the last hour is shown.

        } else {
            printf("%.1f ", hours_table[index]);

        }
    } 
    
    return 0;
}

/* float calculate_table_total_hours(float table[], int size) { Would need some documentation-reading to get this working. Passing the size as a param as well?
    for (int i = 0; i < size; i++)
    {
        // TO-DO: CODE.
        // return the total hours as a float-type.
    }
    
} */