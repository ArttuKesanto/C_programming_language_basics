#include <stdio.h> // Pre-handler.

int calculate_matrix_sum(int [][5]); // First param is not necessary.
void show_matrix_values(int [][5]);

int main(void) {
    int total_sum = 0, matrix[5][5] = // Init the desired matrix and variable for saving the sums.
        {
            4, 6, 25, 88, 5,
            34, 5, 300, 4, 65,
            78, 43, 11, 90, 125,
            98, 585, 12, 63, 21,
            45, 35, 9, 5, 1};

    // EDIT: made this to be its own function that gets the matrix as an argument.
    /* for (int y = 0; y < 5; y++) // Calculate the sum. Could be its own function which gets the matrix as an argument. 
    {
        for (int x = 0; x < 5; x++) {
            total_sum += matrix[y][x];
        }
    } */

    total_sum = calculate_matrix_sum(matrix); // Calculating the total sum with a function, prototyped above.

    printf("Taulukon:\n");

    // Made this to be its own function as well. See below the MAIN-program.
    /* for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 5; x++) {
            if (x == 4) {
                printf("%d\n", matrix[y][x]);
            } else {
                printf("%d ", matrix[y][x]);
            }
        }
        
    } */

    show_matrix_values(matrix);

    printf("\n\nalkioiden summa on %d\n", total_sum);
    

    return 0;
}

int calculate_matrix_sum(int matrix[][5]) { // All dimensions except the first one are necessary; needs to know how far along to increment EACH POINTER.
    int total_sum = 0;
    for (int y = 0; y < 5; y++) // Calculate the sum. Could be its own function which gets the matrix as an argument.
    {
        for (int x = 0; x < 5; x++) {
            total_sum += matrix[y][x];
        }
    }
    return total_sum;
}

void show_matrix_values(int matrix[][5]) {
    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 5; x++) {
            if (x == 4) {
                printf("%d \n", matrix[y][x]);
            } else {
                printf("%d ", matrix[y][x]);
            }
        }
    }
}