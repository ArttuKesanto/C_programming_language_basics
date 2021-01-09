#include <stdio.h> // Pre-handler.
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 65 // Given as instructions. No more than 65 chars at the given line.

int main()
{ // MAIN PROGRAM.

    struct person
    {
        char first_name[21];
        char last_name[21];
        char phone_number[21];
    };

    /* struct person
    {
        char whole_information[65];
    }; */

    // struct person person_list[total_info]; Put this below the first read input.

    char file_name[] = "luettelo.txt"; // Init STRING-variables with limits.
    int total_info = 0;
    int total_info_at_the_start = total_info; // Total number of information details in the file.
    FILE *file;                               // Init FILE pointer.
    unsigned int line_count = 0;              // Line count init.
    char line[MAX_LINE_LENGTH] = {0};         // Start point.
    //char line_different = 0;
    //char difference[MAX_LINE_LENGTH];
    char first_name_input[21], last_name_input[21]; // INIT variables. USER input.
    int i = 0;                                 // INIT the first index used.

    printf("Anna etunimi: ");
    scanf("%s", first_name_input);

    printf("Anna sukunimi: ");
    scanf("%s", last_name_input);

    if ((file = fopen(file_name, "r")) == NULL) // Check if the file can be opened.
    {
        printf("There has been an error with opening the file! Make sure the file exists.\n");
        return 0; // Exit the program.
    }
    else
    {
        fscanf(file, "%d", &total_info);
        total_info_at_the_start = total_info;
        fclose(file); // Remember to close the file. THIS informaton can be used later.

        // printf("\n%d\n", total_info); // DEBUGGING.
    }

    struct person person_list[total_info]; // Creating a list of person' information based on the total number at the start of the file.
                                           // Used in a later exercise.

    FILE *file_different = fopen(file_name, "r"); // Opening the file again with pointer file_different.

    //char buffer[190];                   // Disregarding the int "something" at the start of the file.
    //fgets(buffer, 190, file_different); // Reading and discarding the first line. READ the first line with max. 1024 chars, already read.

    while (fgets(line, MAX_LINE_LENGTH, file_different)) // Max length put to 51. // TO:DO - FIX THIS. Without buffer, some issues! Works for VIOPE.
    {
        //int i = 0;
        fscanf(file_different, "%s %s %s", person_list[i].first_name, person_list[i].last_name, person_list[i].phone_number);
        //fscanf(file_different, "%s", person_list[i].whole_information);
        i++;
        //printf("%s", person_list[i]);
    }
    fclose(file_different);

    FILE *open_saving = fopen(file_name, "w");
    for (int index = 0; index < total_info; index++)
    {
        // TO_DO : if strcmp != 0 do this!
        // Comparing if the specified array includes first and last_name identical to the person requested.
        if (strcmp(person_list[index].last_name, last_name_input) == 0 && strcmp(person_list[index].first_name, first_name_input) == 0)
        {
            total_info_at_the_start--;
            /* FILE *open_another = fopen(file_name, "r+");
            fprintf(open_another, "%d\n", total_info_at_the_start);
            fclose(open_another); */
            continue;
        }
        else
        {
            if (index == (total_info - 1)) {
                fprintf(open_saving, "%s %s %s", person_list[index].first_name, person_list[index].last_name, person_list[index].phone_number);
            } else {
                fprintf(open_saving, "%s %s %s\n", person_list[index].first_name, person_list[index].last_name, person_list[index].phone_number);
            }
        }
    } // TO-DO: Save later with the actual amount to the FILE. Works the way it is now, but deletes some chars at the start of the second name.

    fclose(open_saving);

    FILE *open_another = fopen(file_name, "r+");
    fprintf(open_another, "%d\n", total_info_at_the_start);
    fclose(open_another);

    if (total_info_at_the_start == total_info)
    {
        printf("Etsimääsi henkilöä ei löytynyt luettelosta.\n");
    }
    else
    {
        printf("Tiedot poistettu luettelosta.\n");
    }

    /* char test[] = "test";
    printf("%s\n", test); */

    return 0;
}