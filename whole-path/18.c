#include <stdio.h>	
#include <ctype.h>	
int main() {
	char c;
	int y = 1;
	printf("Press Ctrl+C to quit\n");
	while(1){

		if(y){
			printf("Type a symbol:\n");	
		}

		scanf("%c",&c);

		if(isalpha(c)){
			printf("Entered symbol %c is alphabetic\n\n", c);
			y = 1;
		}
		else if(isspace(c)){
			y = 0;
		}
		else{
			printf("Entered symbol %c isn`t alphabetic\n\n", c);
			y=1;
		}

	}
}