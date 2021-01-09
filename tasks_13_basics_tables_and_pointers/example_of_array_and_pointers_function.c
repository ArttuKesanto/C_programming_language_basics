#include <stdio.h> // Courtesy of Metropolia UAS. Modifications made by Arttu Kesanto.

void tulostaja(int *luvut, int x); // Prototype the function; accepts pointer for one argument, int for another.

int main(void)
{
	int total = 4;
	int array[] = {1, 4, 22, 91};
	tulostaja(array, total);

	return 0;
}

void tulostaja(int *numbers, int x)
{
	int i;
	for(i=0; i<x; i++) {
		printf("%d\n", numbers[i]);
	}
}

//  int taulukko[3];
//  int *o_taulukko = taulukko; /* osoitin on nyt kohdistettu taulukon ekaan alkioon*/
//  o_taulukko += 2; /* nyt osoitin osoittaa viimeiseen alkioon */
//  o_taulukko -= 2; /* ja jälleen ensimmäiseen */    // Possible to do this, but kind of redundant.
//  