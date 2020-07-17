#include <stdio.h>	
#include <math.h>	
int main() {	
	float a;	
	float b;	
	float c;
	printf("Введіть коефіцієнт а\n");	
	scanf("%f", &a);
	printf("Введіть коефіцієнт b\n");	
	scanf("%f", &b);	
	printf("Введіть коефіцієнт c\n");	
	scanf("%f", &c);	
float x1 = ((-b) + ((sqrt((b*b) - 4*a*c))))/(2*a);
float x2 = ((-b) - ((sqrt((b*b) - 4*a*c))))/(2*a);	
if ((((b*b) - 4*a*c))>0)
	printf("Your roots are: %f, %f", x1, x2);	
if ((((b*b) - 4*a*c))<0)
	printf("Дискримінант менший від нуля");	
if ((((b*b) - 4*a*c))==0)	
	printf("Your roots are: %f, %f", x1, x2);
return 0;
}