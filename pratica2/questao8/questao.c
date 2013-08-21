/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 2 
 * Questão 6
 * 
 * Algoritmo que receber um valor dado em centimetros, e exibe no formato
 * m metro(s) d decimentro(s) c centimetro(s)
 * teste1 => entra 3125 sai 31 metro(s) 2 decimentro(s) 5 centimetro(s)  
 * teste1 => entra 150 sai 1 metro(s) 5 decimentro(s) 0 centimetro(s)
 * teste3 => entra 639 sai 6 metro(s) 3 decimentro(s) 9 centimetro(s)
 * teste4 => entra 43 sai 0 metro(s) 4 decimentro(s) 3 centimetro(s)
 */

#include <stdio.h>
#include <stdlib.h>

#define METRO 100
#define DECIMENTRO 10

int main() {
  
  int centimetro, decimentro, metro;
  
  printf("----------------------------------------\n");
  printf("Informe o valor a ser calculado em centimetros:");
  scanf("%d",&centimetro);
  
  metro  = centimetro/METRO;
  centimetro = centimetro - metro*METRO;

  decimentro = centimetro/DECIMENTRO;
  centimetro = centimetro - decimentro*DECIMENTRO;
  
  printf("Pelo valor dado temos %d metro(s) %d decimentro(s) %d centimetro(s)\n", metro, decimentro, centimetro);
  printf("----------------------------------------\n");
  
  return 0;
}
