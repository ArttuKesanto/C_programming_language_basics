#include <stdio.h> // Pre-handler.
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 50 // Given as instructions. No more than 50 chars at the given line.

int main()
{ // MAIN PROGRAM.

    struct henkilo
    {
        char etunimi[21];
        char sukunimi[21];
        char phone_number[21];
    };

    // struct henkilo henkilo_lista[total_info]; Put this below the first read input.

    char file_name[] = "luettelo.txt"; // Init STRING-variables with limits.
    int total_info = 0;                // Total number of information details in the file.
    FILE *file;                        // Init FILE pointer.
    unsigned int line_count = 0;       // Line count init.
    char line[MAX_LINE_LENGTH] = {0};  // Start point.
    //char line_different = 0;
    //char difference[MAX_LINE_LENGTH];

    if ((file = fopen(file_name, "r")) == NULL) // Check if the file can be opened.
    {
        printf("There has been an error with opening the file! Make sure the file exists.\n");
        return 0; // Exit the program.
    }
    else
    {
        fscanf(file, "%d", &total_info);
        fclose(file); // Remember to close the file. THIS informaton can be used later.

        // printf("\n%d\n", total_info); // DEBUGGING.
    }

    struct henkilo henkilo_lista[total_info]; // Creating a list of persons' information based on the total number at the start of the file.
                                              // Used in a later exercise.

    FILE *file_different = fopen(file_name, "r"); // Opening the file again with pointer file_different.

    char buffer[1024];                   // Disregarding the int something at the start of the file.
    fgets(buffer, 1024, file_different); // Reading and discarding the first line. READ the first line with max. 1024 chars, already read.

    while (fgets(line, MAX_LINE_LENGTH, file_different)) // Max length put to 51.
    {
        printf("%s", line);
        /* Add a trailing newline to lines that don't already have one */
        if (line[strlen(line) - 1] != '\n')
        {
            printf("\n");
        }
        // fclose(file_different);
    }
    fclose(file);

    return 0;
}