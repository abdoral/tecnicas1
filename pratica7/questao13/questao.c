/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Lista de exercício 7 
 * Questão 13
 * 
 * Ler um caractere, e após isso ler frases e para cada frase
 * mostrar o número de ocorrências do caractere informado, encerrar
 * o programa com a palavra "fim";
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_FRASE 500
#define FIM "fim"

void main() {
  
  char letra, frase[TAMANHO_FRASE];
  unsigned short int contador=0, ocorrencias=0;

  printf("Informe um caractere: ");
  scanf("%c", &letra);
  getchar();/*Limpeza de buffer*/
  
  for(;;) {
    printf("Digite uma frase qualquer: ");
    scanf("%[^\n]", frase);
    getchar();/*Limpeza de buffer*/
    
    while(frase[contador]) {
      if(frase[contador] == letra)
        ocorrencias++;
      contador++;
    }
    
    if(!strcmp(frase,FIM))
      break;
    
    printf("Na frase:\n%s\nExitem %d ocorrências de %c.\n", frase, ocorrencias, letra);
    contador = ocorrencias = 0;
  }
}