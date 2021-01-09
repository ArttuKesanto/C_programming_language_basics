#include <stdio.h> // Courtesy of Metropolia UAS.

int main(void)  
{  
	int syotetty_luku, nelio;  

	do {  
		printf("Syötä jokin kokonaisluku (lopetus negatiivisella luvulla): ");  
		scanf("%d", &syotetty_luku);  
    
		nelio = syotetty_luku * syotetty_luku; 
    
		if(syotetty_luku > 0) {  
			printf("Antamasi luvun neliö: %d\n", nelio);  
		} else if(syotetty_luku < 0) {  
			printf("Ohjelma lopetetaan...\n"); 
    		}  
	} while(syotetty_luku > 0);
    
	return 0;
}