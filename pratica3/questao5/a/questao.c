/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 3
 * Questão 5.a
 * 
 * Algoritmo lê do teclado uma cor no forma 0xAARRGGBB e imprime separadamente
 * cada componente.
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  unsigned int cor;

  printf("Informe a cor no formato hexadecimal(AARRGGBB):");
  scanf("%X", &cor);
  printf("Componente de opacidade = %02X\n", cor >> 24);
  printf("Componente vermelha = %02X\n", (cor << 8) >> 24);
  printf("Componente verde = %02X\n", (cor << 16) >> 24);
  printf("Componente azul = %02X\n", (cor << 24) >> 24);

  
  return 0;
}