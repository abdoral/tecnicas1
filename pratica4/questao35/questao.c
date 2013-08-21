/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 35
 * 
 * Receber um valor x e diga o valo de f(x) onde:
 *  f(x) = 5x+3/sqrt(x² - 16)
 *
 * teste 1 => -4<=x<4 , f(x) não é definida
 * teste 2 => x=5, f(x) = 9.33
 * teste 5 => x=6, f(x) = 7.38
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main() {
  float x;
 
  printf("Informe o valor de x: ");
  scanf("%f", &x);

  if(x <= 4 && x >= -4)
    printf("A função não está definida para x = %.2f\n", x);
  else 
    printf("f(%.2f) = %.2f\n", x, (5*x+3)/sqrt(pow(x,2.0)-16));

  return 0;
}