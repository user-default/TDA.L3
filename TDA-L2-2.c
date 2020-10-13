#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Implemente a função strcmp de string.h utilizando qualquer estrutura de repetição.
A função strcmp compara os conteúdos de duas strings e verifica se são iguais retornando 0.
*/

int main() 
{
  char str1[50];
  char str2[50];
  scanf(" %[^\n]s", str1);
  getchar();
  scanf(" %[^\n]s", str2);
  
  //Verifica se o tamanho das strings são iguais.
  if(strlen(str1) == strlen(str2) != 0)
  {
    for(int i = 0; i <= strlen(str1); i++)//Percorre os arrays até o tamanho das strings, verificando de um em um se são iguais.
    {
      //Assim que ele encontra caracteres diferentes ele sai do loop.
      if(str1[i] == str2[i] == 0) exit(0);
    }
    printf("As strings são iguais.\n");
  }
  else printf("As strings não são iguais.\n");
  
  return 0;
}
