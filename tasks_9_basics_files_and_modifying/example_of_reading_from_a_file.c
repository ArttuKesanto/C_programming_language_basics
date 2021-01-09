#include <stdio.h> // Courtesy of Metropolia UAS. Modifications made by Arttu K.

int main(void)
{
    FILE *open; // Pointer to FILE.
    float number;

    if ((open = fopen("data.txt", "r")) == NULL)
    {
        printf("File not found!");
        return 0;
    }
    else
    {
        fscanf(open, "%f", &number); // & gets the address of "number", updates it with the read number.
        fclose(open);

        printf("Found a number in the file: %f\n", number);
    }
    return 0;
}