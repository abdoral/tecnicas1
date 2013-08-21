/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 34
 * 
 * Receber um valor x e diga o valo de f(x) onde:
 *  f(x) = 8/(2-x)
 *
 * teste 1 => x=2 , f(x) não é definida
 * teste 2 => x= -2, f(x) = 2
 * teste 4 => x=0, f(x) = 4
 * teste 5 => x=1, f(x) = 8
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main() {
  float x;
 
  printf("Informe o valor de x: ");
  scanf("%f", &x);

  if(x == 2)
    printf("A função não está definida para x = %.2f\n", x);
  else
    printf("f(%.2f) = %.2f\n", x, 8/(2-x));

  return 0;
}