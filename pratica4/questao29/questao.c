/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 29
 * 
 * Receber três valores e verificar se esses valores podem representar os lados
 * de um triangulo
 *
 *
 * teste 1 => ladoA 5, ladoB 0, ladoC 4, não exite
 * teste 2 => ladoA 5, ladoB 3, ladoC 4, existe
 * teste 3 => ladoA 20, ladoB 3, ladoC 4, não existe
 * teste 4 => ladoA 5, ladoB 2, ladoC 2, não existe
 * teste 5 => ladoA 7, ladoB 3, ladoC 4, não existe
 * teste 6 => ladoA 0, ladoB 4, ladoC 4, não existe
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  float ladoA, ladoB, ladoC;

  printf("Informe o primeiro valor: ");
  scanf("%f", &ladoA);
  printf("Informe o segundo valor: ");
  scanf("%f", &ladoB);
  printf("Informe o terceiro valor: ");
  scanf("%f", &ladoC);

  if(abs(ladoB - ladoC) < ladoA && ladoB + ladoC > ladoA)
    printf("O triângulo de lados %.2f, %.2f e %.2f existe.\n", ladoA, ladoB, ladoC);
  else
    printf("O triângulo de lados %.2f, %.2f e %.2f não existe.\n", ladoA, ladoB, ladoC);
  
  return 0;
}