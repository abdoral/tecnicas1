/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 2 
 * Questão 6
 * 
 * Algoritmo que receber um valor dado em segundos, e exibe no formato
 * h hora(s) m minuto(s) s segundo(s)
 * teste1 => entra 3666 sai 1 hora(s) 1 minuto(s) 6 segundo(s)  
 * teste1 => entra 91650 sai 25 hora(s) 27 minuto(s) 30 segundo(s)
 * teste3 => entra 600 sai 0 hora(s) 10 minuto(s) 0 segundo(s)
 * teste4 => entra 43 sai 0 hora(s) 0 minuto(s) 43 segundo(s)
 */

#include <stdio.h>
#include <stdlib.h>

#define HORA 3600
#define MINUTO 60

int main() {
  
  int segundo, minuto, hora;
  
  printf("----------------------------------------\n");
  printf("Informe o valor a ser calculado em segundos:");
  scanf("%d",&segundo);
  
  hora  = segundo/HORA;
  segundo = segundo - hora*HORA;

  minuto = segundo/MINUTO;
  segundo = segundo - minuto*MINUTO;
  
  printf("Pelo valor dado temos %d hora(s) %d minuto(s) %d segundo(s)\n", hora, minuto, segundo);
  printf("----------------------------------------\n");
  
  return 0;
}
