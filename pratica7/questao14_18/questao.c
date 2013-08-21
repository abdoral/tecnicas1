/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Lista de exercício 7 
 * Questão 14 e 18
 * 
 * A partir de cinco letras dadas imprimir o número de vezes 
 * cada uma aparece seguindo o seguinte exemplo:
 *   a :  ******
 *   e :  ***
 *   i :  ***
 *   o :  **
 *   u :  *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_FRASE 500
#define QTD_LETRAS 5
#define ASTERISCO "*"

void main() {
  
  char letras[QTD_LETRAS], contadorLetras[QTD_LETRAS][TAMANHO_FRASE], frase[TAMANHO_FRASE];
  unsigned short int contador=0, contadorFrase=0;

  for(contador; contador < QTD_LETRAS; contador++) {
    printf("%d - Informe uma letra: ", contador + 1);
    scanf("%c", &letras[contador]);
    getchar();/*Limpeza de buffer*/
  }
  
  printf("Digite uma frase qualquer: ");
  scanf("%[^\n]", frase);
  getchar();/*Limpeza de buffer*/

  contador = 0;
  while(contador < QTD_LETRAS) {
    while(frase[contadorFrase]) {
      if(frase[contadorFrase] == letras[contador])
        strcat(contadorLetras[contador], ASTERISCO);
      contadorFrase++;
    }
    printf("%c: %s\n", letras[contador], contadorLetras[contador]);
    contadorFrase = 0;
    contador++;
  }

}