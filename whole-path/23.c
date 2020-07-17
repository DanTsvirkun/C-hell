#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
    char str[50];
  char k[50];
  printf("Введіть слово, яке хочете зашифрувати: ");
  gets(str);
  printf("Введіть слово, на яке потрібно зсунути текст: ");
  scanf("%s", k);
  int ind = 0;
  for (int i = 0; i < strlen(k); ++i)
  {
    k[i]=k[i]-'`';
  }
  for(int i=0; i <strlen(str); i++){
    if(isdigit(str[i])||isspace(str[i]))
      ; 
    else if ((isalpha(str[i]+k[ind])) == 0)
      str[i] = (str[i]-26)+k[ind];
    else str[i] += k[ind];
    if(ind==strlen(k)-1)
      ind = 0;
    else
      ind++;
  }
  puts(str);

  printf("Розшифрований текст: \n");
  ind = 0;
  for(int i=0; i <strlen(str); i++){
    if(isdigit(str[i])||isspace(str[i]))
      ; 
    else if ((isalpha(str[i]- k[ind])) == 0)
      str[i] = (str[i]+26)-k[ind];
    else str[i] -= k[ind];
    if(ind==strlen(k)-1)
      ind = 0;
    else
      ind++;
  }

  puts(str);

  return 0;
}