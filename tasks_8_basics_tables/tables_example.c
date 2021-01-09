#include <stdio.h> // Courtesy of Metropolia UAS. Modifications by Arttu K.

int main()
{
	int luvut[100]; // Init a "100-allocated" table. Indexes go from 0 - 99.
	int indeksi;

	for (indeksi=0; indeksi<100; indeksi++) {
		printf("Syötä %d. numero: ", indeksi+1);
		scanf("%d", &luvut[indeksi]);
	}

	printf("Numerot käänteisenä: ");
	
	for (indeksi=99; indeksi >= 0; indeksi--) {
		if (indeksi == 0) {
            printf("%d\n", luvut[indeksi]);
        } else {
        printf("%d ", luvut[indeksi]);
        
        }
	}

	return 0; // Exiting the program.
}