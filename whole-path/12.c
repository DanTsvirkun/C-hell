#include <stdio.h>
int main(void) {	
	int R;	
	printf("Ведіть свій бал за 100-бальною шкалою:\n");	
	scanf("%d", &R);	
if (R>=95 && R<=100)	
	printf("A за шкалою ЄКТС. Відмінно та зараховано за національною шкалою.\n");
else if (R>=85 && R<95)	
	printf("B за шкалою ЄКТС. Добре та зараховано за національною шкалою.\n");	
else if (R>=75 && R<85)	
	printf("C за шкалою ЄКТС. Добре та зараховано за національною шкалою.\n");	
else if (R>=65 && R<75)	
	printf("D за шкалою ЄКТС. Задовільно та зараховано за національною шкалою.\n");	
else if (R>=75 && R<65)	
	printf("E за шкалою ЄКТС. Задовільно та зараховано за національною шкалою.\n");	
else if (R<60 && R!=0)	
	printf("Fx за шкалою ЄКТС. Незадовільно та не зараховано за національною шкалою.\n");
else if (R == 0)	
	printf("F за шкалою ЄКТС. Не допущено та не зараховано за національною шкалою.\n");	
else 	
	printf("Будь-ласка, введіть свій справжній балл\n");	
return 0;	
}