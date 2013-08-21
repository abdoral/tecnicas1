/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 33
 * 
 * Receber um valor x e diga o valo de f(x) onde:
 *  f = 1, se x<=1
 *  f = 2, se 1<x<=2
 *  f = x², se 2<x<=3
 *  f = x³, se x>3
 *
 * teste 1 => x=0.5, f(x) = 1
 * teste 2 => 1.9, f(x) = 2
 * teste 4 => 2.5, f(x) = 6.25
 * teste 5 => 255, f(x) = 16581375
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main() {
  float x;
 
  printf("Informe o valor de x: ");
  scanf("%f", &x);

  if(x <= 1)
    printf("f(%.2f) = 1\n", x);
  else if(x > 1 && x <= 2)
    printf("f(%.2f) = 2\n", x);
  else if(x > 2 && x <= 3)
    printf("f(%.2f) = %.2f\n", x, pow(x,2.0));  
  else
    printf("f(%.2f) = %.2f\n", x, pow(x,3.0));  

  return 0;
}