/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 3
 * Questão 5.b
 * 
 * Algoritmo lê do teclado cada componete de cor separadamente na base decimal e depois imprime
 * o valor de 32 bits no formato hexadecimal.
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  unsigned int cor;
  unsigned int opacidade, vermelha, verde, azul;

  printf("Informe a componente de opacidade [0-255]:");
  scanf("%d", &opacidade);
  cor = opacidade;
  
  printf("Informe a componente vermelha [0-255]:");
  scanf("%d", &vermelha);
  cor = (cor << 8) | vermelha;

  printf("Informe a componente verde [0-255]:");
  scanf("%d", &verde);
  cor = (cor << 8) | verde;

  printf("Informe a componente azul [0-255]:");
  scanf("%d", &azul);
  cor = (cor << 8) | azul;
  
  printf("A cor é 0x%08X\n", cor);

  
  return 0;
}