/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Lista de exercício 7 
 * Questão 26
 * 
 * Imprimir uma tabela com o número de ocorrencias de cada caractere de uma string;
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAMANHO_FRASE 200
#define ESPACO_EM_BRANCO ' '

int main()
{
  char letras[TAMANHO_FRASE][1], frase[TAMANHO_FRASE];
  int total[TAMANHO_FRASE][1];
  unsigned short int contador=0, contadorAuxiliar;

  printf("Digite uma frase qualquer: \n");
  scanf("%[^\n]", frase);

  while(frase[contador]) {
    letras[contador][1] = frase[contador];
    total[contador][1] = 0;
    contadorAuxiliar = contador + 1;
    while(frase[contadorAuxiliar]) {
      if(letras[contador][1] == frase[contadorAuxiliar])
        total[contador][1]++;
      contadorAuxiliar++;
    }
    contador++;
  }

  contador = 0;
  while(total[contador]) {
    printf("A letra %c aparece %d vezes. \n", letras[contador][1], total[contador][1]);
    contador++;
  }
  
  return 0;
}