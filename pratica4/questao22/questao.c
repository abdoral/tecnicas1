/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 22
 * 
 * Cálculo do valor do crédito concedido a um cliente baseado em seu saldo médio conforme tabela abaixo
 *
 *   Saldo Médio         Percentual  
 *  --------------   | --------------------------------
 *  De 0 a 500       |  Nenhum crédito
 *  De 501 a 1000    |  30% do valor do saldo médio
 *  De 1001 a 3000   |  40% do valor do saldo médio 
 *  Acima de 3001    |  50% do valor do saldo médio 
 *
 * 
 * teste 1 => saldo 100  => O cliente não possui nenhum crédito.
 * teste 2 => saldo 1000  => O cliente possui um crédito de 300.
 * teste 3 => saldo 2000  => O cliente possui um crédito de 800.
 * teste 4 => saldo 4000  => O cliente possui um crédito de 2000.
 */

#include <stdio.h>
#include <stdlib.h>

#define PERCENTUALCREDITO30 0.30
#define PERCENTUALCREDITO40 0.40 
#define PERCENTUALCREDITO50 0.50

#define SALDO500 500
#define SALDO1000 1000
#define SALDO3000 3000 

int main() {
  float saldo;

  printf("Digite o saldo médio do cliente: ");
  scanf("%f", &saldo);
  
  if(saldo <= SALDO500)
    printf("O cliente não possui nenhum crédito.\n");
  else if(saldo <= SALDO1000 && saldo > SALDO500)
    printf("O cliente possui um crédito de %.2f.\n", saldo*PERCENTUALCREDITO30);
  else if(saldo <= SALDO3000 && saldo > SALDO1000)
    printf("O cliente possui um crédito de %.2f.\n", saldo*PERCENTUALCREDITO40);
  else if(saldo > SALDO3000)
    printf("O cliente possui um crédito de %.2f.\n", saldo*PERCENTUALCREDITO50);
    
  return 0;
}