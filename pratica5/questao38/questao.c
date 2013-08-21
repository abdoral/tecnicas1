/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 38
 * 
 * Verifica se um número dado N é primo ou não;
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int numero, contador;

  while(1) {
     printf("Informe um inteiro positivo: ");
     scanf("%d", &numero);
     if(numero < 0) {
        system("clear");
     } else
        break;
  }

  for(contador = 2; contador < numero; contador++) {
     if(!(numero%contador)) {
        printf("Não é primo\n");
        return 0;
     }
  }

  printf("É um número primo!\n");
  return 0;
}