#include <stdio.h> // Courtesy if Metropolia UAS. Modifications by Arttu K.

int main(void)
{
    int eka_matriisi[5][5] = {{2, 34, 23, 21, 58}, // First matrix.
                              {3, 6, 56, 2, 9},
                              {76, 92, 2, 4, 77},
                              {1, 45, 45, 8, 33},
                              {99, 3, 34, 5, 78}};

    int toka_matriisi[5][5] = {{45, 3, 34, 6, 77}, // Second matrix.
                               {2, 45, 67, 3, 2},
                               {21, 23, 54, 67, 67},
                               {43, 2, 45, 99, 0},
                               {54, 76, 88, 63, 5}};

    int summa_matriisi[5][5];
    int y, x;

    for (y = 0; y < 5; y++)
    {
        for (x = 0; x < 5; x++)
        {
            summa_matriisi[y][x] = eka_matriisi[y][x] + toka_matriisi[y][x];

            if (x == 4)
            {
                printf("%d\n", summa_matriisi[y][x]);
            }
            else
            {
                printf("%d\t", summa_matriisi[y][x]);
            }
        }
    }

    return 0;
}