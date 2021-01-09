#include <stdio.h> // Courtesy of Metropolia UAS.

int main(void) { 
	int i, parillinen_vai_pariton; 
     
	for(i = 1; i < 11; i++) { 
		parillinen_vai_pariton = i % 2; 

		if(parillinen_vai_pariton != 0) { 
			continue; 
		} else { 
			printf("%d\n", i); 
		}  
	}
    return 0;
}