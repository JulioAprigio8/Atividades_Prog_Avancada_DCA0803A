
#include <stdio.h>
#include <stdlib.h>

int main(){
  int **x, nl=4, nc=5, i, j;
  int **y;

  // aloca o array auxiliar
  x = (int**) malloc(nl*sizeof(int*));
  // aloca as linhas
  for(i=0; i<nl; i++){
    x[i] = (int*) malloc(nc*sizeof(int));
  }

 printf("matriz x\n");
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = rand()%10+2;
    }
  }
for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }

    y = (int**) malloc(nl*sizeof(int*));
    for(i = 0;i<nl;i++){
        y[i] = (int*) malloc(nc*sizeof(int));
    }
    // usa a matriz
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      y[i][j] = x[i][j];
    }
  }
  y = x;
  printf("matriz y\n");

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ",y[i][j]);
    }
    printf("\n");
  }
  for(i=0; i<nl; i++){
    free(x[i]);
  }
  free(x);
for(i=0; i<nl; i++){
    free(y[i]);
  }
  free(y);
  return 0;
}
