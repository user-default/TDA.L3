#include<stdio.h>
#include<string.h>

/*
Palíndromo é a frase ou palavra que se pode ler, indiferentemente, da esquerda para a direita ou vice-versa, como por exemplo a palavra ARARA ou o nome ANA.

Escreva um programa que receba do usuário um texto e informe se é palíndromo ou não. Desconsidere caracteres em maíusculo, por exemplo, o nome Ana deve ser identificado como palíndromo.
*/

int main()
{
  char palavra[16] = "";
  char palavra1[16] = "";
  char palavra2[16] = "";
  
  puts("Digite uma palavra para verificar se ela e um palindromo:\n");
  scanf("%s", palavra);
  printf("OBS: A string possui %lu caracteres\n\n",strlen(palavra));

  for(int i = 0; i < (strlen(palavra)); i++)
  {
    palavra1[i]= palavra[i];
    printf("[%i]%c\t",i, palavra[i]);
  }
  puts("\n");
  for(int i = (strlen(palavra)-1), j = 0;i >= 0; i-- && j++)
  {
    palavra2[j]= palavra[i];
    printf("[%i]%c\t", j, palavra[i]);
  }
  if (strcasecmp(palavra1, palavra2) != 0) printf("\nA palavra %s nao e um palindromo!\n", palavra);
  else printf("\nA palavra %s e um palindromo!\n", palavra);

  return 0;
}
