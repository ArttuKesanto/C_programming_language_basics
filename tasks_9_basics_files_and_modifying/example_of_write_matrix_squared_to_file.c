#include <stdio.h> // Courtesy of Metropolia UAS. Modifications made by Arttu K.
int main(void)
{
    int matriisi[5][4];
    int neliot[5][4];

    int x, y;

    FILE *luku_tied;
    FILE *kirj_tied;

    if ((luku_tied = fopen("matrix.txt", "r")) == NULL) // Keeps the file open for the ELSE-statement.
    {
        printf("Tiedoston avaus epäonnistui (matrix.txt).");
        return 0;
    }
    else
    {
        for (y = 0; y < 5; y++)
        {
            for (x = 0; x < 4; x++)
            {
                if (x == 3)
                {
                    fscanf(luku_tied, "%d", &matriisi[y][x]);
                }
                else
                {
                    fscanf(luku_tied, "%d,", &matriisi[y][x]); // Saving to a new matrix in the memory.
                }
            }
        }
    }

    fclose(luku_tied); // Close the file.

    for (y = 0; y < 5; y++)
    {
        for (x = 0; x < 4; x++)
        {
            neliot[y][x] = 0;
            neliot[y][x] = matriisi[y][x] * matriisi[y][x]; // Write squared amounts to the new matrix.
        }
    }

    if ((kirj_tied = fopen("squared.txt", "w")) == NULL)
    {
        printf("Tiedoston avaus epäonnistui (squared.txt).");
    }
    else
    {
        for (y = 0; y < 5; y++)
        {
            for (x = 0; x < 4; x++)
            {
                if (x == 3)
                {
                    fprintf(kirj_tied, "%d\n", neliot[y][x]);
                }
                else
                {
                    fprintf(kirj_tied, "%d, ", neliot[y][x]);
                }
            }
        }
    }

    fclose(kirj_tied);
    return 0;
}