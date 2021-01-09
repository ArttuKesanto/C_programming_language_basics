#include <stdio.h> // Pre-handler.

int main(void) { // MAIN PROGRAM.

    char input[16]; // Init a String-variable with a limit. Last char will be \0 = 0, so thus 16 length with 15 possible chars.
    int total_vowel_amount = 0;

    printf("Ohjelma laskee vokaalien määriä.\nAnna sana: ");
    scanf("%s", input); // No &-needed; not accessing a specified memory slot (?). Allocated as we go, with unspecified length of string (?).
    
    for (int i = 0; i <=16; i++) {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || input[i] == 'y') {
            total_vowel_amount += 1;
        }
    }

    printf("Sanassa vokaaleja: %d\n", total_vowel_amount);

    return 0;
}