#include <stdio.h> /* Courtesy of Metropolia UAS. Priorities of operators. */

int main(void)
{
	printf("Seuraavissa 0 vastaa epätotta ja 1 totta.\n");
	
	printf("Väite \"412 < 6723\" on %d\n", 412 < 6723);
	printf("Väite \"412 > 6723\" on %d\n", 412 > 6723);
	
	printf("Väite \"(6 < 3) && (1 > 0)\" on %d\n", (6 < 3) && (1 > 0));
	printf("Väite \"(6 < 3) || (1 > 0)\" on %d\n", (6 < 3) || (1 > 0));
	
	return 0;
}