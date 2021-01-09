#include <stdio.h> // Courtesy of Metropolia, UAS. Modifications made by Arttu K.

static float pii = 3.14159; // Cannot be changed, static, used by all the functions.
 
float laske_ala(float sade); // Prototype of the function provided; name identical to the function below MAIN.
 
int main(void)     
{ 
	float ympyran_ala, ympyran_sade; 

	printf("Anna ympyrän säde: ");  
	scanf("%f", &ympyran_sade);  

	ympyran_ala = laske_ala(ympyran_sade);  
	
	printf("Ympyrän pinta-ala on: %.2f\n", ympyran_ala);

	return 0; // Exit the program.
}  

float laske_ala(float sade)  
{ 
	float pinta_ala;  

	pinta_ala = pii * sade * sade;

	return pinta_ala; // Returns the value from this function. Can be saved to a variable.
}