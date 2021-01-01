#include <stdio.h>
// Practicing getting ints from user. Syntax specific to C.

int main(void){
  int number;
  printf("Give a number: ");
  scanf("%d", &number);
  printf("Luku oli: %d\n",number);
  return 0;
}