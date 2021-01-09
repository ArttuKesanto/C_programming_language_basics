#include <stdio.h>

void change_the_number(int x); // Prototyping the function.

int main(void)
{
	int x;
	
	printf("Anna luku x: ");
	scanf("%d", &x);

	printf("Pääohjelmassa: x = %d\n", x);
    change_the_number(x);

	printf("Pääohjelmassa: x = %d\n", x);

	return 0;
}

void change_the_number(int x) {
    printf("Aliohjelmassa: x = %d\n", (x + 3));
}