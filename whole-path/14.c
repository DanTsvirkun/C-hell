#include <stdio.h>	
#include <math.h>		
int Q;	
float progression(int Q) {	
	return ((pow(-1, Q+1))/(2*Q-1));	
}
int main() {
	int j;
	float x;	
	printf("Введіть кількість елементів прогресії: ");	
	scanf("%d", &Q);	
	for (j = 1; j <= Q; ++j) {
		x += progression(j); 	
}	
	printf("%f ", x);	
return 0;	
}	
