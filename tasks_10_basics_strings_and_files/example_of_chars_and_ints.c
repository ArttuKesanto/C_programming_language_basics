#include <stdio.h> // Courtesy of Metropolia UAS. Modifications made by Arttu K.

void ask_for_user_info(void);

int main()
{
    char char_variable;
    char_variable = 'v'; // Checking ASCII-comparisons.

    char char_array[5] = {'a', 'u', 't', 'o', '\0'}; // The last one is a null pointer, marks the end of the array. \0 == 0 (ASCII).
    char char_array_different[5] = "auto";
    char automatic_compiler_array_with_ending[] = "auto";

    char merkit[] = "Viope C";

    printf("Number %d corresponds to %c.\nAlso; %s, %s, %s. And %c.\n", char_variable, char_variable, char_array, char_array_different, 
    automatic_compiler_array_with_ending, merkit[6]);

    ask_for_user_info(); // Executing the VOID function. TESTING.

    return 0;
}

void ask_for_user_info(void)
{
    char etunimi[10], sukunimi[20], puhelinnumero[15];

    printf("\nSyötä henkilön etu- ja sukunimi välilöynnein eroteltuna: ");
    scanf("%s %s", etunimi, sukunimi); // Can also type %s%s without a space.

    printf("Syötä %s:n puhelinnumero: ", etunimi);
    scanf("%s", puhelinnumero);

    printf("Syöttämäsi henkilö oli %s %s, puh: %s\n", etunimi, sukunimi, puhelinnumero);
}