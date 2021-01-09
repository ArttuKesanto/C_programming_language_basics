#include <stdio.h> // Courtesy of Metripolia UAS. Modifications made by Arttu K.

int main(void)
{
	float paino = 73.00;
	float *o_paino; // Init pointer.
	o_paino = &paino; // Assign memory-slot of paino-variable.

	/*Tulostetaan arvo ja osoite muuttujan avulla*/
	printf("paino = %.2f\n", paino);
	printf("&paino = %d\n\n", &paino);

	/*Sama siihen viittaavalla osoittimella*/ // EXAMPLES for PRINT.
	printf("*o_paino = %.2f\n", *o_paino);
	printf("o_paino = %d", o_paino);

	return 0;
}