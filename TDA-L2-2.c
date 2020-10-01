#include <stdio.h>
#include <string.h>

/*
Implemente a função strcmp de string.h utilizando qualquer estrutura de repetição. 
A função strcmp compara os conteúdos de duas strings e verifica se são iguais retornando 0.
*/

int main()
{
  char s1[6];
  int i = 1;
  while((i != 0))
  {
    printf("Digite exit para encerrar ou start para continuar:\n");
    scanf("%s", s1);
    if((strcmp(s1,"start")) == 0) printf("Hoje e um novo dia\n");
    else if((strcmp(s1, "exit")) == 0) break;
    else puts("Entrada inválida!\n");
  }
  puts("Programa encerrado!\n");
  return 0;
}
