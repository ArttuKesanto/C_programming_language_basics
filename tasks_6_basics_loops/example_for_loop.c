#include <stdio.h> // Courtesy of Metropolia UAS.
   
int main(void) 
{ 
	int luku, i;
	
	printf("Anna positiivinen kokonaisluku: ");
	scanf("%d", &luku);

	
	for(i = 1; i <= luku; ++i) { 
		if (i == luku)
			printf("%d\n", i);
		else
			printf("%d, ", i);
	}
	
	return 0; 
}