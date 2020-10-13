#include <stdio.h>
#include <string.h>

/* Implemente a função strcpy de string.h utilizando qualquer estrutura de repetição.
A função strcpy copia o conteúdo de uma string para outra. DICA: Cuidado com o espaço em memória.
*/

int main() 
{
  char str1[15];
  char str2[15];
  printf("Enter your name:\n");
  scanf(" %[^\n]s", str1);
  for(int i = 0; i <= strlen(str1); i++)
  {
    str2[i] = str1[i];
  }
  puts(str2);
  return 0;
}
