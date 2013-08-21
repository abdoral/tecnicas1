/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 20
 * 
 * Algoritmo que recebe dois números e imprime o quadrado do menor e a raiz quadrada do maior.
 * 
 * teste 1 => 2, 4 => 4, 2
 * teste 2 => 3, 5 => 9, 25
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  double numero1, numero2;

  printf("Digite um número qualquer: ");
  scanf("%lf", &numero1);
  printf("Digite um número qualquer: ");
  scanf("%lf", &numero2);
  if(numero1 > numero2)
    printf("O quadrado do menor é %lf e a raiz quadrada do maior é %lf.\n", pow(numero2,2.0), pow(numero1, 0.5));
  else
    printf("O quadrado do menor é %lf e a raiz quadrada do maior é %lf.\n", pow(numero1,2.0), pow(numero2, 0.5));
  
  return 0;
}