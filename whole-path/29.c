#include <stdio.h>
#define DIM 10
#define SWAP(a, b) {int tmp; tmp=a; a=b; b=tmp;}
void sort_change(int a[], int dim);
void sort_choose(int a[], int dim);
void sort_hoor(int a[], int left, int right);
void sort_shell(int a[], int dim);
int main (void)
{
int n;
int left;
int right;
int a[4][10] = { {-22, -4, 5, 8, 0, 23, 1, -9, 2, 35},
           {-13, 5, 6, 9, 1, 0, 0, 0, 1, -13},  
           {12, 10, 8, 6, 15, -3, -3, 0, -3, 1},  
           {0, -45, 3, 12, 2, 0, -9, -7, 23, 21} }; 

for (int i=0; i<4; i++){
  for(int j=0; j<10; j++){
    printf("%d ", a[i][j]);
    }
    printf("\n"); 
  } // Вывод массива
  printf("\n");
printf("Оберіть вид сортування: \n");
printf("1. Change 2. Choose\n");
printf("3. Hoor 4. Shell\n");
scanf("%d", &n);
printf("\n");


switch (n){
  case 1:
    for(int i=0; i<4; i++)
      sort_change(a[i], DIM);
break;
    
  case 2:
    for(int i=0; i<4; i++)
      sort_choose(a[i], DIM);
break;
    
  case 3:
    for(int i=0; i<4; i++)
      sort_hoor(a[i], 0, DIM-1);
break;
    
  case 4:  
    for(int i=0; i<4; i++)
      sort_shell(a[i], DIM);  
break;
}

for (int i=0; i<4; i++){
  for(int j=0; j<10; j++){
    printf("%d ", a[i][j]);
    }
    printf("\n");
  } // Вывод нового массива
return 0;
}



void sort_change(int a[], int dim) {
  for (int i =0; i<dim; i++) {  
    for (int j=dim-1; j>0; j--){
      if (a[j-1] > a[j]) {  
        SWAP(a[j-1], a[j]);  
      }
    }
  }
}


void sort_choose(int a[], int dim) {
	int k; int i;
  for (i=0; i<dim; i++) {
  	k = i;  
    for (int j=i+1; j<dim; j++){
      if (a[j] < a[k]) {  
        k = j;
    }  
  }
    SWAP(a[k], a[i]);
  }
}


void sort_hoor(int a[], int left, int right){
 int i = left, j = right, step = -1, condition = 1;
 if(left >= right) return;
 do {
  if(condition == (a[i] > a[j])) {
   int temp = a[i];
   a[i] = a[j];
   a[j] = temp;

   temp = j;
   j = i;
   i = temp;

   step *= -1;
   condition = !condition;
  }
  j += step;
 } while(j != i);
 sort_hoor(a, left, i-1);
 sort_hoor(a, i+1, right);
}


void sort_shell(int a[], int dim){  
  for (int gap=dim/2; gap>0; gap/=2) {  
    for (int i=gap; i<dim; i++){  
      for (int j=i-gap; j>=0 && a[j]>a[j+gap]; j-=gap){  
        SWAP(a[j], a[j+gap]);  
      }
    }
  }
}