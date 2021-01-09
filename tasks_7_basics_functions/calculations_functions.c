#include <stdio.h>

void add(void); // Prototypes for pre-handler.
void reduce(void);
void multiply(void);

int main(void) {
    int valinta;

    do {
        printf("1: kahden luvun summa\n2: kahden luvun erotus\n3: kahden luvun tulo\n");
        printf("<0: ohjelman lopetus\n");
        printf("Valitse laskutoimitus: ");
        scanf("%d", &valinta);
        if (valinta < 0)
        {
            printf("Ohjelma lopetetaan...\n\n");
        }
        else if (valinta == 1)
        {
            add();
        }
        else if (valinta == 2)
        {
            reduce();
        }
        else if (valinta == 3)
        {
            multiply();
        }
        else
        {
            printf("Antamasi luku ei kelpaa. Valitse 1 - 3.\n\n");
        }
    } while (valinta > 0);

    return 0;
}

void add(void) // Implementing functions.
{ 
    int first_input, second_input, result;
    printf("Syötä ensimmäinen luku: ");
    scanf("%d", &first_input);

    printf("Syötä toinen luku: ");
    scanf("%d", &second_input);

    result = (first_input + second_input);
    printf("%d + %d = %d\n\n", first_input, second_input, result);

}

void reduce(void)
{
    int first_input, second_input, result;
    printf("Syötä ensimmäinen luku: ");
    scanf("%d", &first_input);

    printf("Syötä toinen luku: ");
    scanf("%d", &second_input);

    result = (first_input - second_input);
    printf("%d - %d = %d\n\n", first_input, second_input, result);

}

void multiply(void)
{
    int first_input, second_input, result;
    printf("Syötä ensimmäinen luku: ");
    scanf("%d", &first_input);

    printf("Syötä toinen luku: ");
    scanf("%d", &second_input);

    result = (first_input * second_input);
    printf("%d * %d = %d\n\n", first_input, second_input, result);

}