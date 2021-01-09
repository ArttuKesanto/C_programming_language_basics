#include <stdio.h>
#include <string.h> // Pre-handlers.

int main(void)
{ // MAIN PROGRAM.

    struct henkilotiedot // Example of struct ("object, dictionary - OWN NOTES") and how to handle information.
    {
        char etunimi[15];
        char sukunimi[25];
        int ika;
        int paino;
    } henkilo_1;

    strcpy(henkilo_1.etunimi, "Matti");
    henkilo_1.ika = 12;

    printf("%d, %s\n", henkilo_1.ika, henkilo_1.etunimi);

    return 0;
}