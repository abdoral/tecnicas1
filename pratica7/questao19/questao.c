/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Lista de exercício 7 
 * Questão 19
 * 
 * Remover espaços em branco que são excedentes deixando
 * apenas um espaço.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_FRASE 500
#define ESPACO ' '

void main() {
  
  char frase[TAMANHO_FRASE];
  unsigned short int contador=0, contadorAuxiliar;
  
  printf("Digite uma frase qualquer: ");
  scanf("%[^\n]", frase);
  getchar();/*Limpeza de buffer*/
  while(frase[contador]) {
    if(frase[contador] == ESPACO) {
      if(frase[contador+1] == ESPACO) {
        for(contadorAuxiliar = contador+1; contadorAuxiliar < TAMANHO_FRASE; contadorAuxiliar++)
          frase[contadorAuxiliar] = frase[contadorAuxiliar+1];
        continue;
      }
    }
    contador++;
  }
  printf("Frase sem espaços excedentes:\n%s\n", frase);
}