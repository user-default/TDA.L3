#include <stdio.h>
#include <string.h>

/*
Implemente a função strcat de string.h utilizando qualquer estrutura de repetição. 
A função strcat concatena o conteúdo de uma string em outra. DICA: Cuidado com o espaço em memória.
*/

int main()
{
    int i, len = 0;
    char s1[100];
    char s2[100];
    scanf(" %[^\n]s", s1);
    scanf(" %[^\n]s", s2); 
    len = strlen(s1);
    for(i = 0; i < strlen(s2); i++)
    {
      s1[len+i]= s2[i];
      printf("%c\n", s1[len+i]);
    }
    puts(s1);
}
