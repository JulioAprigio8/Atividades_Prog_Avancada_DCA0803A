#include <stdio.h>

struct alo{
  int a; //4
  char c,d,e;//1
  int f;//4
  char b; //1
};

int main(){
  struct alo a;
  a.a = 3;
  printf("tamanho = %d\n", sizeof(struct alo));
  printf("a.a = %d\n", a.a);
  
  return 0;
  }