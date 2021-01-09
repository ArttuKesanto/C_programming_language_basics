#include <stdio.h> // Courtesy of Metropolia UAS, an example.

int main(void) 
{
	char kahvi;

	printf("Juotko kahvia? (k / e): ");
	kahvi = getchar(); // Could also use scanf("%c", &kahvi); getchar()-function expects an input from the user.

	if (kahvi == 'k' || kahvi == 'K')
		printf("Sinä juot kahvia!\n");

	else if (kahvi == 'e' || kahvi == 'E')
		printf("Et juo kahvia!\n");

	else
		printf("Vastaisitko kyllä tai ei?\n");

	return 0;
}