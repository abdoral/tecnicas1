/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 3
 * Questão 5.d
 * 
 * Algoritmo 256 tons de cinza, onde todas as componentes são iguais e a opacidade é nula.
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  unsigned int tonCinza;

  printf("Informe um valor decimal para o ton de cinza entre [0-255]: ");
  scanf("%d", &tonCinza);

  /*montar cor na forma 0x00RRGGBB pela expressão*/
  tonCinza = (tonCinza >> 8) /*00000000*/
             | (tonCinza << 16) /*00RR0000*/
             | (tonCinza << 8) /*0000GG00*/
             | tonCinza /*000000BB*/;

  printf("O ton de cinza é 0X%08X\n", tonCinza);
  
  return 0;
}