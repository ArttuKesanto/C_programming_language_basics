#include <stdio.h> // Pre-handler.
#include <stdlib.h>

void laske_ja_tulosta(int *, int);

int main(int argc, char *argv[])
{
  int x, summa=0, koko=5, taulukko[5];
  if(argc == 6){ 
  // The name of the program and the params given within the terminal-line.
    for(x=0;x<argc-1;x++){
      taulukko[x] = atoi(argv[x+1]);
    }
    laske_ja_tulosta(taulukko, koko);
  }else{
    printf("Virheellinen määrä komentoriviargumentteja\n");
  }
  return 0;
}

void laske_ja_tulosta(int *array, int total) {
    int total_sum = 0;

    printf("Taulukon alkiot: ");
    for (int i = 0; i < total ; i++)
    {
        total_sum += array[i];
        if (i == (total -1)) {
            printf("%d\n", array[i]);
        } else {
        printf("%d ", array[i]); // Creating wanted newlines if the last number in the array is printed.
        }
    }

    printf("Summa = %d\n", total_sum);
    
}