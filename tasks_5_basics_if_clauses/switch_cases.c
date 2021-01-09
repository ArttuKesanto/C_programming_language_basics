#include <stdio.h> // Courtesy of Metropolia UAS.
    
int main(void) 
{ 
	int numero; 

	printf("Syötä jokin numero väliltä 1 - 4: "); 
	scanf("%d", &numero); 

	switch(numero) { 
	case 1: 
		{ 
			printf("Painoit numeroa 1.\n"); 
			break; // Exit the switch-clause.
		} 
	case 2: 
		{  
			printf("Painoit numeroa 2.\n "); 
			break; 
		} 
	case 3: 
		{ 
			printf("Painoit numeroa 3.\n"); 
			break; 
		} 
	case 4: 
		{ 
			printf("Painoit numeroa 4.\n"); 
			break; 
		} 
	default: 
		printf("Antamasi syöte on arvoalueen ulkopuolella.\n"); 
                break;
	} 

	return 0; 
}
