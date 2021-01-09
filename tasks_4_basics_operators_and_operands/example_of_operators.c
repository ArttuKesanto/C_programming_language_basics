#include <stdio.h> // This example is courtesy of Metropolia UAS.

int main(void) 
{
	int luku, luku2;

	printf("Syötä jokin kokonaisluku: ");
	scanf("%d", &luku);

	luku2 = luku;
	printf("Muuttujan \"luku\" arvo on %d ja muuttuja \"luku2\" arvo on %d\n", luku, luku2);
	
	/* Example of how incrementing works with before and AFTER the operand. */
	printf("Arvot nyt: \"luku\" == %d ja \"luku2\" == %d\n", ++luku, luku2++);

	printf("ja nyt \"luku\" == %d ja \"luku2\" == %d\n", luku, luku2);
	return 0;
}