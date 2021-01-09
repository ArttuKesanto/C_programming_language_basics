#include <stdio.h> // Courtesy of Metropolia UAS.

int main(void)
{
    int number; // init the switch_choice.
    int first_input, second_input, result;

    printf("1: vähennyslasku\n2: yhteenlasku\n3: kertolasku\nValitse toiminto: ");
    scanf("%d", &number);

    switch (number) {
    
    case 1: {
        printf("Anna eka luku: ");
        scanf("%d", &first_input);

        printf("Anna toka luku: ");
        scanf("%d", &second_input);

        result = (first_input - second_input);

        printf("%d - %d = %d", first_input, second_input, result);

        break; // Exit the switch-clause.
        
    } case 2: {
        printf("Anna eka luku: ");
        scanf("%d", &first_input);

        printf("Anna toka luku: ");
        scanf("%d", &second_input);

        result = (first_input + second_input);

        printf("%d + %d = %d", first_input, second_input, result);
        
        break;

    } case 3: {
        printf("Anna eka luku: ");
        scanf("%d", &first_input);

        printf("Anna toka luku: ");
        scanf("%d", &second_input);

        result = (first_input * second_input);

        printf("%d * %d = %d", first_input, second_input, result);
        
        break;

    } default: {
        printf("Syötä numero väliltä 1 - 3.\n");
        
        break;
    }
    
    }

    return 0;
}
