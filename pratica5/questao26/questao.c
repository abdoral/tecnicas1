/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 26
 * 
 * Ler o limite superior e o inferior, e imprima os pares juntamente com seu somatorio.
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  unsigned int superior, inferior, somaPares = 0;

  printf("Informe limite inferior: ");
  scanf("%u", &inferior);
  printf("Informe limite superior: ");
  scanf("%u", &superior);
 
  for (inferior; inferior <= superior; inferior++)
  {
    if(!(inferior%2)) {
      printf("%u\n", inferior);
      somaPares += inferior;
    }
      
  }

  printf("A soma dos números pares é  %d\n", somaPares);
  
  return 0;
}