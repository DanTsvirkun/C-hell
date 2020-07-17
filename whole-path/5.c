#include <stdio.h>	
int main() {	
float i = 1;
float n;	
printf("Watch out! Here come a bunch of fractions! \n");	
while (i<30) {	
	i = i+1;
	n = 1/i;	
	printf("%f", n);}
printf(" That's all, folks!\n");	
return 0;	
}