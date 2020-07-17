#include <stdio.h>	
float P = 3.14;
void circle(float r, float *area, float *perimeter) {	
	*area = P*(r*r);	
	*perimeter=2*P*r;
}	
int main (void) {	
	float r, area, perimeter;
	printf("Enter radius: ");	
	scanf("%f", &r);
	circle(r, &area, &perimeter);
	printf("r=%f area=%f peri=%f\n", r, area, perimeter);
	return 0;	
}