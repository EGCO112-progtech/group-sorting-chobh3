#include <stdio.h>
#include <string.h>
#include "sorting.h"
#include <stdlib.h>

int main(int argc,char *argv[]){
  int N = argc - 2;
  int *a;
  a = (int *)malloc(sizeof(int) * N);
  for(int i = 0;i<N;i++){
    a[i] = atoi(argv[i+2]);
  }
  display(a,N);

  if(!strcmp(argv[1],"insertion")){
    insertion(a,N);
  }
  else if(!strcmp(argv[1],"bubble")){
    bubbleSort(a,N);
  }
  else if(!strcmp(argv[1],"selection")){
    selectionSort(a,N);
  }
   display(a,N);
 return 0;
}


