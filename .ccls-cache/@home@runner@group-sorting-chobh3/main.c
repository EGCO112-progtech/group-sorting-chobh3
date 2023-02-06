#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"


int main(int argc, char *argv[]) {
int *a,n,i,*prime;
  n=argc-1;
  a=(int*)malloc(sizeof(int)*n);
  prime=(int*)malloc(sizeof(int)*n);
  int j=0;
  for(i=0;i<n;i++) {
    a[i]=atoi(argv[i+1]);
    
  }
  
    
    bubbleSort(a,n);
    
    
     
    return 0;
  }


 
