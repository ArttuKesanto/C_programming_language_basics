#include <stdio.h> // Modifications made by Arttu K.
int main(void)
{
    FILE *open; // Pointer to FILE.
    float n1, n2, n3, n4;
    if ((open = fopen("example_of_numbers_with_comma.txt", "r")) == NULL)
    {
        printf("File not found!");
        return 0;
    }
    else
    {
        fscanf(open, "%f, %f, %f, %f ", &n1, &n2, &n3, &n4);
        fclose(open);
        printf("Found numbers: %f, %f, %f and %f\n", n1, n2, n3, n4);
    }
    return 0;
}