#include <stdio.h> // Pre-handler.

int main(void)
{
	int x = 0;
	int kokonaislukuja[3];
	float liukulukuja[3];

	printf("Taulukoiden alkioiden osoitteita:\n\n");

	for(x=0; x<3; x++) {
		printf("Kokonaislukutaulukon %d. alkion osoite: ", x+1);
		printf("%d\n", &kokonaislukuja[x]);
		printf("Liukulukutaulukon %d. alkion osoite: ", x+1);
		printf("%d\n", &liukulukuja[x]);
	}

    float kertoimia[4], *o_kertoimia;
    o_kertoimia = kertoimia; /* alustus taulukon nimellä */  // This means that the name of the array in itself points to the first allocated slot in the memory.
    printf("%d\n", o_kertoimia);
    o_kertoimia = &kertoimia[0]; /* alustus viittauksella haluttuun alkioon */ // Init with the first float in the array, its address.
    printf("%d\n", o_kertoimia);

	return 0;
}
