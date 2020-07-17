#include <stdio.h>
#include <math.h>
int main()
{
	float C;
	printf("Please, enter the temperature in Celsius:\n ");
	scanf("%f", &C);
	float F;
	F = (C - 32) * (5.0 / 9);
	printf("This temperature in Fahrenheit is equal to %f", F);
	return 0;
}