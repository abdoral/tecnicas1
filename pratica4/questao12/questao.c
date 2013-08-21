/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4
 * Questão 12
 * 
 * Algoritmo verifica se a prestação de um emprestimo a 30% do salario bruto,
 * se for maior impedir o emprestimo.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define TAXA_MAXIMA 0.30

int main() {
  
  float prestacao, salario;
  
  printf("Informe o salario bruto do funcionario: ");
  scanf("%f", &salario);
  printf("Informe o valor da prestação: ");
  scanf("%f", &prestacao);
  if(prestacao/salario >= TAXA_MAXIMA)
  	printf("Emprestimo não pode ser consedido pois excede os 30 por cento do salario do funcionario.\n");
  else
  	printf("Emprestimo consedido com sucesso.\n");


  return 0;
}