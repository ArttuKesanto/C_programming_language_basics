#include <stdio.h> // Pre-handler.

int main(void) { // MAIN PROGRAM.

    char first_name[16], last_name[21], file_name[13]; // Init STRING-variables with limits.
    FILE *file; // Init FILE pointer.
    
    // open = fopen(file, "w"); Can be written straight and directly to the IF-clause, and so is done below.

    printf("Ohjelma tallentaa etunimesi ja sukunimesi tiedostoon.\nSyötä etunimesi: ");
    scanf("%s", first_name); // No &-needed; not accessing a specified memory slot (?). Allocated as we go, with unspecified length of string (?).
    
    /* if (!first_name) { // Error-checking that the string has been saved correctly. If the variable is not true, something went wrong.
        printf("Nimi on liian pitkä. Yritä uudestaan.\n");
        printf("%s\n", first_name);
        return 0;
    } */ // TO-DO - should refine with C's manual. Does not work as in Java, for example.

    printf("Syötä sukunimesi: ");
    scanf("%s", last_name);

    printf("Tiedosto, johon haluat tallentaa nimen: ");
    scanf("%s", file_name);


    if ((file = fopen(file_name, "w+")) == NULL)
    {
        printf("There has been an error with creating / opening the file! Make sure the file name is max 11 characters long...\n");
        return 0; // Exit the program.
    }
    else
    {
        fprintf(file, "%s %s\n", first_name, last_name);
        //fclose(file); // Remember to close the file.

        printf("\nTallennus onnistui!\n");
    }
    fclose(file); // Remember to close the file.

    return 0;
}