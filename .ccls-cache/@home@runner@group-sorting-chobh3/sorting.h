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
} 



void insertion(int a[],int n){


}


void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how may pair to compare?
for(j=1;j<=n-1;j++){
 
  display(a,n);
 }
  
}




