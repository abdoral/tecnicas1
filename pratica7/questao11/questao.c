/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Lista de exercício 7 
 * Questão 11
 * 
 * Ler n strings e ordená-las em ordem alfabética;
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOTAL_PALAVRAS 5
#define TAMANHO_PALAVRA 20

void main() {

  char palavras[TOTAL_PALAVRAS][TAMANHO_PALAVRA];
  char auxiliar[TAMANHO_PALAVRA];
  unsigned short int palavra = 0, contador;
 
  do {
    printf("Informe a %dª palavra: \n", palavra + 1);
    scanf("%[^\n]", palavras[palavra]);
    getchar();/*limpeza de buffer*/
    palavra++;
  } while(palavra < TOTAL_PALAVRAS);

  /*"InsertionSort" com strings*/
  for(palavra = 1; palavra < TOTAL_PALAVRAS; palavra++) {
    contador = palavra;
    while((contador != 0) && (strcmp(palavras[contador], palavras[contador-1]) < 0 )) {
      strcpy(auxiliar, palavras[contador]);
      strcpy(palavras[contador], palavras[contador-1]);
      strcpy(palavras[contador-1], auxiliar);
      contador--;
    }
  }

  printf("As palavras em ordem alfabética: \n");
  for(contador = 0; contador < TOTAL_PALAVRAS; contador++) {
    printf("%d - %s\n", contador+1, palavras[contador]);
  }

}