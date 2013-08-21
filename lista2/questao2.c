/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Lista de exercício 2 
 * Questão 2
 * 
 * Algoritmo para calcular o consumo médio de um carro;
 * 
 */


#include <stdio.h>

int main() {
  float kmInicial, kmFinal, litrosConsumidos;
  
  printf("---------------------------------------\n");
  printf("*****Consumo médio*****\n");
  printf("Informe a quilometragem inicial: ");
  scanf("%f", &kmInicial);
  printf("Informe a quilometragem final: ");
  scanf("%f", &kmFinal);
  printf("Informe o consumo: ");
  scanf("%f", &litrosConsumidos);
  printf("O consumo médio foi: %f Litros/Por KM \n", litrosConsumidos/(kmFinal-kmInicial));
  printf("---------------------------------------\n");

  return 0;

  
}