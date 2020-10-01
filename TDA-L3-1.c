#include <stdio.h>
#include <string.h>

/*Implemente a função strcpy de string.h utilizando qualquer estrutura de repetição. 
A função strcpy copia o conteúdo de uma string para outra. DICA: Cuidado com o espaço em memória.
*/

int main()
{
  char s0[] = "Boa noite!\n";
  char s1[12];
  int i = 1;
  while((i > 0) && (i == 1))
  {
    printf("Digite 0 para encerrar ou 1 para continuar:\n");
    scanf("%d", &i);
    strcpy(s1, s0);
    printf("s1[] == %s", s1);

  }
  puts("Programa encerrado!\n");
  return 0;
}
