/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 6
 * 
 * Algoritmo recebe um número e imprime sua raiz quadrada caso seja positivo
 * senão imprime seu quadrado;
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
  int numero;
  printf("Digite um número inteiro qualquer: ");
  scanf("%d", &numero);
  if(numero >= 0)
  	printf("%lf\n", pow(numero,0.5));
  else 
  	printf("%lf\n", pow(numero,2.0));
  
  return 0;
}