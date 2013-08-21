/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 2 
 * Questão 6
 * 
 * Algoritmo que receber um valor dado em segundos, e exibe no formato
 * g grau(s) m minuto(s) s segundo(s)
 * teste1 => entra 360 sai 1 grau(s) 0 minuto(s) 0 segundo(s)  
 * teste1 => entra 180 sai 0 grau(s) 3 minuto(s) 0 segundo(s)
 * teste3 => entra 600 sai 0 grau(s) 10 minuto(s) 0 segundo(s)
 * teste4 => entra 43 sai 0 grau(s) 0 minuto(s) 43 segundo(s)
 * teste5 => entra 3060 sai 8 grau(s) 3 minuto(s) 0 segundo(s)  
 */

#include <stdio.h>
#include <stdlib.h>

#define GRAU 360
#define MINUTO 60

int main() {
  
  int segundo, minuto, grau;
  
  printf("----------------------------------------\n");
  printf("Informe o valor a ser calculado em segundos:");
  scanf("%d",&segundo);
  
  grau  = segundo/GRAU;
  segundo = segundo - grau*GRAU;
  minuto = segundo/MINUTO;
  segundo = segundo - minuto*MINUTO;
  
  printf("Pelo valor dado temos %d grau(s) %d minuto(s) %d segundo(s)\n", grau, minuto, segundo);
  printf("----------------------------------------\n");
  
  return 0;
}
