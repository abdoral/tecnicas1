/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 36
 * 
 * Calcular as raizes de uma equação do segundo grau, recebendo
 * os coeficientes a, b e c
 *
 * teste 1 => a=1, b=-1, c=-20, x'= -4, x'' = 5
 * teste 2 => a=1, b=-3, c=-4, x'= -1, x'' = 4
 * teste 3 => a=0, b=3, c=4, não é equação do segundo grau
 * teste 4 => a=1, b=2, c=0, x'=0, x''=-2
 * teste 5 => a=1, b=0, c=-4, x'=-2, x''=2
 * teste 5 => a=1, b=5, c=16, não existe para delta negativo
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main() {
  float a, b, c, delta;
 
  printf("Informe o valor do coeficiente a: ");
  scanf("%f", &a);
  if(a == 0) {
  	printf("Não é equação do segundo grau!\n");
  	return 0;
  }
  printf("Informe o valor do coeficiente b: ");
  scanf("%f", &b);
  printf("Informe o valor do coeficiente c: ");
  scanf("%f", &c);

  delta = pow(b,2.0) - 4*a*c;
  if(delta < 0 )
    printf("A função não está definida os números reais por possuir delta = %.2f\n", delta);
  else {
    printf("x' = %.2f e ", (-b-sqrt(delta))/(2*a));
    printf("x'' = %.2f \n", (-b+sqrt(delta))/(2*a));	
  }
  

  return 0;
}