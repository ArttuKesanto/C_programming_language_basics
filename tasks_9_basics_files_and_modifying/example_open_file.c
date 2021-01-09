#include <stdio.h> // Courtesy of Metropolia UAS. Modifications made by Arttu Kesanto.
int main(void)
{
    FILE *open; // Init avaus.
    open = fopen("file_example.txt", "w");

    if (open == NULL)
    {
        printf("There has been an error opening the file!");
        return 0; // Exit the program.
    }
    else
    {
        fprintf(open, "Arttu Kesanto - CODE something.");
        fclose(open); // Remember to close the file.
    }
    return 0;
}

/* OWN NOTES (in Finnish, different modes for FILEs.):
r	Tiedosto avataan lukemista varten.	fopen() palauttaa arvon NULL.	 
w	Tiedosto avataan kirjoittamista varten.	Tiedosto luodaan.	Tiedoston sisältämä tieto tuhotaan.
a	Tiedosto avataan lisäämistä varten.	Tiedosto luodaan.	Uusi tieto lisätään tiedoston loppuun.
r+	Tiedosto avataan lukemista ja kirjoittamista varten.	Tiedosto luodaan.	Uusi tieto kirjoitetaan vanhan tiedon päälle tiedoston alkuun.
w+	Tiedosto avataan lukemista ja kirjoittamista varten.	Tiedosto luodaan.	Uusi tieto kirjoitetaan vanhan päälle.
a+	Tiedosto avataan lukemista ja lisäämistä varten.	Tiedosto luodaan.	Uusi tieto lisätään tiedoston loppuun. 
*/

/*  int x;
 int *p;  // * is used in the declaration:
          // p is a pointer to an integer, since (after dereferencing),
          // *p is an integer
 x = 0;
 // now x == 0
 p = &x;  // & takes the address of x
 // now *p == 0, since p == &x and therefore *p == x
 *p = 1;  // equivalent to x = 1, since p == &x
 // now *p == 1 and x == 1 */  // Notes from pointers and dereferencing.