#include <stdio.h> // Pre-handler.

int main(void) {
	char kahvi_vai_tee;
    int amount;

	printf("Juotko kahvia vai teetä (k / t)? ");
	kahvi_vai_tee = getchar(); // Could also use scanf("%c", &kahvi); getchar()-function expects an input from the user.
    getchar(); // Handling Enter-input.

	if (kahvi_vai_tee == 'k' || kahvi_vai_tee == 'K') {
		printf("Montako kuppia juot päivässä: ");
        scanf("%d", &amount);
        
        if (amount >= 0 && amount <=2) {
            printf("Et taida juoda paljoa kahvia.\n");
        } else if (amount >= 3 && amount <= 20) {
            printf("Juotpa paljon kahvia!\n");
        } else {
            printf("Ohjelmassa on tapahtunut virhe!\n");
        }

    } else if (kahvi_vai_tee == 'T' || kahvi_vai_tee == 't') {
		printf("Montako kuppia juot päivässä: ");
        scanf("%d", &amount);

        if (amount >= 0 && amount <=2) {
            printf("Et taida juoda paljoa teetä.\n");
        } else if (amount >= 3 && amount <= 20) {
            printf("Juotpa paljon teetä!\n");
        } else {
            printf("Ohjelmassa on tapahtunut virhe!\n");
        }

    } else {
        printf("Montako kuppia juot päivässä: ");
        scanf("%d", &amount); // Asking for the amount here as well, since Viope wants it. Error-handling due to incorrect input.

		printf("Ohjelmassa tapahtunut virhe!\n");
    }

	return 0;
}