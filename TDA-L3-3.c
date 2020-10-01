#include<stdio.h>
#include<string.h>

/*
Implemente a função strcat de string.h utilizando qualquer estrutura de repetição. 
A função strcat concatena o conteúdo de uma string em outra. DICA: Cuidado com o espaço em memória.
*/

int main()
{
  char s0[10] = "Ola ";
  char s1[] = " ";
  int i;

  puts("Digite qualquer valor exceto 0 para iniciar:\n");
  scanf("%d", &i);
  printf("Digite seu nome:\n");
  for(;i != 0;)
  {
    //printf("Digite seu nome:\n");
    scanf("%s", s1);//No final do bloco o array s1 armazenava a ultima entrada na linha 27 e terminava por "passar por cima" do printf da linha 22. Solução: coloquei o printf na linha 19.
    strcat(s1, ", como vai? ");
    printf("%s\n", s1);
    puts("Digite outro nome para repetir ou 0 para terminar.\n");
    scanf("%d", &i);
    if(i == 0) break;
  }
  puts("Programa encerrado!\n");
}
