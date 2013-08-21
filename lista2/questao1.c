/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Lista de exercício 2 
 * Questão 1
 * 
 * Algoritmo para gerar a conta do restaurante passando o valor consumido e 
 * impriminto o valor mais os 10% consumido.
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  float valorConta, totalConta;
  
  printf("----------------------------------\n");
  printf("*****Restaurante Coma Bem*****\n");
  printf("Informe o valor da conta:");
  scanf("%f", &valorConta);
  totalConta = valorConta + valorConta*0.1;
  printf("Valor da conta %.2f\n", valorConta);
  printf("Taxa de servico %.2f\n", valorConta*0.1);
  printf("Total a ser pago %.2f\n", totalConta);
  printf("*****Obrigado pela Preferêcia*****\n");
  printf("----------------------------------\n");
  
  return 0;
}