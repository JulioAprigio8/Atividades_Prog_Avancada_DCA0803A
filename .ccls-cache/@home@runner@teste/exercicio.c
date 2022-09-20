#include <stdio.h>

int main(void){
  unsigned int mais_um = 1;
  int menos_um = -1;
  printf("%u\n", menos_um);
  if(mais_um < menos_um){
    printf("1 < -1");
  }else{
    printf("alou!");
  }
  return 0;
  }