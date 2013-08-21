/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 23
 * 
 * Classificação de idade em meno, maior e idoso(maior ou igual a 65) 
 *
 * teste 1 => idade 5  => Menor de idade.
 * teste 2 => idade 24  => Maior de idade.
 * teste 3 => idade 73  => Idoso.
 */

#include <stdio.h>
#include <stdlib.h>

#define MAORIDADE 18
#define IDOSO 65

int main() {
  short idade;

  printf("Informe a idade da pessoa: ");
  scanf("%hd", &idade);
  if(idade < MAORIDADE)
    printf("Menor de idade.\n");  
  else if(idade >= MAORIDADE && idade < IDOSO) 
    printf("Maior de idade.\n");
  else if(idade >= IDOSO)
    printf("Idoso.\n");
  return 0;
}