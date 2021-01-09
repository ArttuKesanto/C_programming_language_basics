#include <stdio.h>

void kissa(void); // Prototypes for pre-handler.
void koira(void);
void lehma(void);

int main(void) {
    int valinta;

    do
    {
        printf("1:kissa\n2:koira\n3:lehmä\n");
        printf("Lopetus negatiivisella luvulla.\n");
        printf("Valitse eläin: ");
        scanf("%d", &valinta);
        if (valinta < 0)
        {
            printf("Ohjelma lopetetaan...\n\n");
        }
        else if (valinta == 1)
        {
            kissa();
        }
        else if (valinta == 2)
        {
            koira();
        }
        else if (valinta == 3)
        {
            lehma();
        }
        else
        {
            printf("Antamasi luku ei kelpaa.\n\n");
        }
    } while (valinta > 0);

    return 0;
}

void kissa(void)
{ // Implementing functions.
    printf("Kissa sanoo miau!\n\n");
}

void koira(void)
{
    printf("Koira sanoo hau-hau!\n\n");
}

void lehma(void)
{
    printf("Lehmä sanoo ammuu!\n\n");
}