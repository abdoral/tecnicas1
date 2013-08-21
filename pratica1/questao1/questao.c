/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 1 
 * Questão 1
 * 
 * Calcula a velocidade média dado tempo e distancia a ser percorrida;
 *
 * Teste1: 350 km em 3,5 horas = 100km/h
 * Teste2: 700 km em 3.5 horas = 200km/h
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  float distancia, tempo;

  printf("Informe a distância a ser precorrida em quilometros:");
  scanf("%f", &distancia);
  printf("Informe o tempo em horas:");
  scanf("%f", &tempo);
  printf("O velocidade média no trecho deve ser de: %.2f km/h\n", distancia/tempo);

  
  return 0;
}