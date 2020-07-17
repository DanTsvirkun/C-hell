#include <stdio.h>		
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main() {		
	char str[100];
	printf("Enter some line/symbols: ");		
	gets(str);
	for (int i = 0; i < 100; ++i)
	{
		str[i] = toupper(str[i]);
	}
	printf("%s",str);	
return 0;	
}