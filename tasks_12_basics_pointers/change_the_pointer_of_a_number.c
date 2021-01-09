#include <stdio.h>

void change_the_number(int *x); // Prototyping the function. Receiving the pointer for the number.

int main(void)
{
	int x;
	
	printf("Anna luku x: ");
	scanf("%d", &x);

	printf("Pääohjelmassa: x = %d\n", x);
    change_the_number(&x); // Giving the address for x.

	printf("Pääohjelmassa: x = %d\n", x);

	return 0;
}

void change_the_number(int *x) {
    *x = *x + 3; // Receive the value from a pointer, add 3 to the value.
    printf("Aliohjelmassa: x = %d\n", (*x)); // Only x would be the pointer to the memory-slot.
}