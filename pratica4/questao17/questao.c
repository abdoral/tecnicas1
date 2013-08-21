/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 17
 * 
 * Algoritmo um numero e informa se ele é divisivel por 10, por 5, por 2 ou por nenhum deles
 * 
 * teste 1 => 35 divisivel por 5
 * teste 2 => 54 divisivel por 2
 * teste 3 => 90 divisivel por 10, 5, 2
 * teste 1 => 589 não é divisivel nem por 10, nem por 5 nem por 2
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int numero;

  printf("Digite um número qualquer: ");
  scanf("%d", &numero);
  if(!(numero % 10))
    printf("O número %d é divisivel por 2, 5 e 10\n", numero);
  else if(!(numero % 5))
    printf("O número %d é divisivel apenas por 5 \n", numero);
  else if(!(numero % 2))
    printf("O número %d é divisivel apenas por 2\n", numero);
  else
    printf("O número %d não é divisivel por 2, 5 e 10\n", numero);
  
  return 0;
}