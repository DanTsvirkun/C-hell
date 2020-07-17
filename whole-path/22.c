#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void) {
  char str[50];
  int k;
  printf("Введіть слово, яке хочете зашифрувати: ");
  gets(str);
  printf("Введіть величину, на яку потрібно зсунути текст: ");
  scanf("%d", &k);

  for(int i; i <strlen(str); i++){
    if(isdigit(str[i]))
      ; 
    else if ((isalpha(str[i]+k)) == 0)
      str[i] = (str[i]-26)+k;
    else str[i] += k;
  }
  puts(str);

  printf("Розшифрований текст: \n");

  for(int i; i <strlen(str); i++){
    if(isdigit(str[i])||isspace(str[i]))
      ; 
    else if ((isalpha(str[i]- k)) == 0)
      str[i] = (str[i]+26)-k;
    else str[i] -= k;
  }

  puts(str);

  return 0;
} 