#include <stdio.h>

int main(void)  
{  
	float input = 0, total_sum = 0; // Doing conversions in order to get floats out of GPA.
    int i = 0;  
    float gpa;

    printf("Ohjelma laskee syötettyjen arvosanojen keskiarvon.\n\
Lopetus negatiivisella kokonaisluvulla.\n");
	
    while (input >= 0) {  
        
        printf("Anna arvosana (4-10): ");  
		scanf("%f", &input); 

        i++;
		total_sum += input;
     
       /*  if (!(input >= 4 && input <= 10)) { // Error handling.
            printf("Anna arvosana välillä 4 - 10, tai anna kokonaisluku negatiivisena ohjelman lopettamiseksi.\n");
            continue;
        }  */ // TO-DO: could refine this at some point, Viope accepts the basic core.

		if(input < 0) {
            i--; // Getting the amount of grades back to the correct amount.
            total_sum -= input; // Getting back the negative to the total sum.
            gpa = (total_sum / i);
			printf("Ohjelmaan syötetty %d arvosanaa.\n", i); 
            printf("Arvosanojen keskiarvo: %.2f\n", gpa);
            break;
    	}
	}
    
	return 0;
}