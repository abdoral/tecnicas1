/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Lista de exercício 1 
 * Questão 2
 * 
 * Algoritmo para ler um inteiro decimal e imprimir na tela no formato haxadecimal;
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int inteiroX;
  
  printf("-----------------------------\n");
  printf("Entre com o valor: ");
  scanf("%d", &inteiroX);
  printf("Hexadecimal: %X \n", inteiroX);
  printf("-----------------------------\n");
  
  return 0;
}