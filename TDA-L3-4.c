#include <stdio.h>
#include <string.h>

/*
Implemente a função strlen de string.h utilizando qualquer estrutura de repetição. 
A função strlen retorna a quantidade de caracteres em uma string. DICA: A string termina com o caractere especial '\0'.
*/

int main()
{
  int i = -1;
  char s0[] = "";
  puts("Digite uma palavra ou 0 para terminar:\n");
  while(i != 0)
  {
    scanf("%d", &i);
    if(i == 0) break;
    scanf("%s", s0);
    printf("A string possui %ld caracteres!\n", strlen(s0));
    puts("Digite outra palavra ou 0 para terminar:\n");
  }
  puts("Fim de execucao!\n");
  return 0;
}
