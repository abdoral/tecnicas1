/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 28
 * 
 * Receber 200 numeros e imprimir quantos sao pares e quantos sao impares.
 * 
 */

#include <stdio.h>
#include <stdlib.h>



#define NUMEROSLIDOS 200

int main() {
  
  unsigned int aleatorio, qtdPares = 0, qtdImpares = 0, contador = 0;

  for (contador; contador <= NUMEROSLIDOS; contador++)
  {
    aleatorio = rand() % 10000;
    printf("%d\n", aleatorio);
    if(aleatorio%2)
      qtdImpares++;
    else
      qtdPares++;
  }

  printf("O total de números pares é  %d e dos ímpares é %d\n", qtdPares, qtdImpares);
  
  return 0;
}