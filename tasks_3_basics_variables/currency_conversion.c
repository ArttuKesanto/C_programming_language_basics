#include <stdio.h>

int main(void) {   // The MAIN-program.
    float euro_multi = 5.94573, currency_amount, currency_as_euros; // Init all the variables for memory-use.
    
    printf("Syötä jokin markkamäärä: ");
    scanf("%f", &currency_amount);

    currency_as_euros = (currency_amount / euro_multi); // Calculating the amount.

    printf("Markat euroina: %.2f\n", currency_as_euros); // Two DECIMALS wanted.
    
    return 0; // Exiting the program.
}