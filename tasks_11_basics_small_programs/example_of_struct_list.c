#include <stdio.h> // Courtesy of Metropolia UAS. Modifications made by Arttu Kesanto.
int main(void)
{
    int i;
    FILE *kirj_tied;
    char rekisteri[] = "rekister.txt";

    struct henkilo
    {
        char etunimi[15];
        char sukunimi[25];
        int ika;
        int paino;
    };

    struct henkilo henkilo_lista[5];

    for (i = 0; i < 5; i++)
    {
        printf("Syötä etunimi, sukunimi, ikä ja paino välilyönnein eroteltuna:");
        scanf("%s%s%d%d", henkilo_lista[i].etunimi, henkilo_lista[i].sukunimi,
              &henkilo_lista[i].ika, &henkilo_lista[i].paino);
    }

    if ((kirj_tied = fopen(rekisteri, "w")) == NULL)
    {
        printf("Virhe tiedoston avaamisessa.");
        return 0;
    }
    else
    {
        for (i = 0; i < 5; i++)
        {
            fprintf(kirj_tied, "%s %s %d %d\n", henkilo_lista[i].etunimi,
                    henkilo_lista[i].sukunimi, henkilo_lista[i].ika, henkilo_lista[i].paino);
        }
    }
    fclose(kirj_tied);
    printf("Tietojen tallennus onnistui!\n");
    return 0;
}