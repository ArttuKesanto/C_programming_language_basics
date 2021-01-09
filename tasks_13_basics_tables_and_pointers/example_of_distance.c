#include <stdio.h> // Courtesy of Metropolia UAS. Modifications made by Arttu K.

void different_comparison(void);

int main(void)
{
	int luvut[] = {2, 4, 5, 6};
	int *o_luvut_1, *o_luvut_2;
	int etaisyys;

	o_luvut_1 = &luvut[0]; // Memory_address.
    printf("%d\n", o_luvut_1); // DEBUGGING: IF *o_luvut_1, 2 will be displayed.
	o_luvut_2 = &luvut[2];

	etaisyys = o_luvut_2 - o_luvut_1;
	printf("%d\n", etaisyys);
    
    different_comparison();

	return 0;
}

void different_comparison(void) {
    int luvut[] = {4, 3, 2, 1};
    int *o_luvut_1, *o_luvut_2;
    int tosiko = 0;

    o_luvut_1 = &luvut[3];
    o_luvut_2 = &luvut[0];
    tosiko = o_luvut_1 > o_luvut_2; // So the first pointer is located after the first pointer in the memory-blocks.

    if (tosiko) {
        printf("TRUE\n");
    }
}