#include <stdio.h> // Courtesy of Metropolia UAS.

int main(void)
{
    char kahvi;
    char vastaus;

    printf("Juotko kahvia (k / e): ");
    kahvi = getchar();
    getchar(); // Handling getting "the ENTER-input; from the user, thus it won't wait "inside the program" to be used.

    if (kahvi == 'k' || kahvi == 'K')
    {
        printf("Laitatko kahviin maitoa? (k / e): ");
        vastaus = getchar();
        getchar();
        if (vastaus == 'k' || vastaus == 'K')
            printf("Pidät siis maitokahvista.\n");
        else if (vastaus == 'e' || vastaus == 'E')
            printf("Juot kahvisi sellaisenaan.\n");
        else
            printf("vastaisitko kyllä tai ei?\n", vastaus);
    }
    else if (kahvi == 'e' || kahvi == 'E')
    {
        printf("Juotko mieluummin teetä? (k / e)");
        vastaus = getchar();
        getchar();
        if (vastaus == 'k' || vastaus == 'K')
            printf("Juot siis teetä!\n");
        else if (vastaus == 'e' || vastaus == 'E')
        {
            printf("Juotko sitten mehua? (k / e)");
            vastaus = getchar();
            getchar();
            if (vastaus == 'k' || vastaus == 'K')
                printf("Juot siis mehua!\n");
            else if (vastaus == 'e' || vastaus == 'E')
                printf("Juot varmaankin vettä.\n");
            else
                printf("Vastauksesi hämmentää minua.\n");
        }
        else
        {
            printf("Vastaisitko oikein.\n");
        }
    }
    else
        printf("Älä viitsi vastata väärin.");

    return 0;
}