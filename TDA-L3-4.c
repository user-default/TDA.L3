#include <stdio.h>

/*
Implemente a função strlen de string.h utilizando qualquer estrutura de repetição. 
A função strlen retorna a quantidade de caracteres em uma string. DICA: A string termina com o caractere especial '\0'.
*/

int main() 
{
  char s1[100];
  int j = 1, count = -1;
  scanf(" %[^\n]s", s1);
  getchar();
  for (int i = 0; j != '\0'; i++)
  {
    j = s1[i];
    count++;
  }
  printf("Quantidade de elementos = %d\n", count);
  return 0;
}
