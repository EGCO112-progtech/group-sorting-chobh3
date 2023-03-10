// selection sort function module in C
void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}
void display(int a[],int n){
    int i;
    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
}

void selectionSort(int a[], int n) { 
	int maxx, i, j;
  for(i = 0; i < n - 1; i++){
    maxx = i;
    for(j = i + 1; j < n; j++){
      if(a[maxx] < a[j]) maxx = j;
    }
    if(maxx != i) swap(&a[maxx], &a[i]);
    display(a,n);
    printf("\n");
  }
  printf("\n");
} 

void insertion(int a[], int n) {
  int i, j, insert;
  for(j=1; j<n; j++){
  int insert = a[j]; 
  for(i=j-1; i>=0; i--) {
      if(insert < a[i]) break;
      else a[i+1] = a[i];
      display(a,n);
  }
  a[i+1] = insert;
  display(a,n);
  printf("\n"); 
}
  printf("\n");  
}

void bubbleSort(int a[], int n) {

  int i, j;
  int sorted;
  for (i = n - 1; i > 0; i--) {
    sorted = 0;
    for (j = 0; j < i; j++) {
      if (a[j] < a[j + 1]) {
        swap(&a[j], &a[j + 1]);
        sorted = 1;
      }
      display(a, n);
    }
    printf("\n");
    if (sorted == 0)
      break;
  }
  display(a, n);
}




