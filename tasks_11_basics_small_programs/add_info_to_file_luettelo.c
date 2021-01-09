#include <stdio.h> // Pre-handler.

int main(void) { // MAIN PROGRAM.

    char first_name[21], last_name[21], phone_number[21], file_name[] = "luettelo.txt"; // Init STRING-variables with limits.
    int total_info = 0;
    FILE *file; // Init FILE pointer.
    
    if ((file = fopen(file_name, "r")) == NULL) // Check if the file can be opened.
    {
        printf("There has been an error with opening the file! Make sure the file exists.\n");
        return 0; // Exit the program.
    }
    else
    {
        fscanf(file, "%d", &total_info);
        fclose(file); // Remember to close the file.

        //printf("\n%d\n", total_info); // DEBUGGING.
    }

    printf("Anna etunimi: ");
    scanf("%s", first_name); // No &-needed; not accessing a specified memory slot (?). Allocated as we go, with unspecified length of string (?).
    
    printf("Anna sukunimi: ");
    scanf("%s", last_name);

    printf("Anna puhelinnumero: ");
    scanf("%s", phone_number);

    if ((file = fopen(file_name, "a")) == NULL) // Check if the file can be opened. a means that we are adding to the bottom of the file.
    {
        printf("There has been an error with writing to the file OR opening the file! Make sure the file exists.\n");
        return 0; // Exit the program.
    }
    else
    {
        fprintf(file, "\n%s %s %s", first_name, last_name, phone_number);
        fclose(file); // Remember to close the file.

        //printf("\nTietojen tallennus onnistui.\n"); // DEBUGGING.
    }

    if ((file = fopen(file_name, "r+")) == NULL) // Check if the file can be opened. r+ means that we are writing to the start of the file.
    {
        printf("There has been an error with writing to the file OR opening the file! Make sure the file exists.\n");
        return 0; // Exit the program.
    }
    else
    {
        total_info++;
        fprintf(file, "%d", total_info);
        fclose(file); // Remember to close the file.

        printf("\nTietojen tallennus onnistui.\n"); // DEBUGGING.
    }

    return 0;
}