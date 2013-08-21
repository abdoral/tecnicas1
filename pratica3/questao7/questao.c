/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 3
 * Questão 7
 * 
 * Algoritmo para mostrar que deslocamento a esquerda é o mesmo que multiplicar por dois
 * e que deslocamento a direita é o mesmo que dividir por dois.
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
   
   int numero;
   printf("Informe um número inteiro qualquer\n");
   scanf("%d", &numero);
   
   printf("Multiplicado por dois %d\n", numero << 1);
   printf("Dividido por dois %d\n", numero >> 1);
  
   return 0;
}