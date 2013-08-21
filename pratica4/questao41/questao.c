/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 37
 * 
 * Imprime dias da semana pelo número correspondente
 *
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  char dia;
 
  printf("Informe o número do dia: ");
  scanf("%c", &dia);
  
  switch(dia) {
    case '1':
      printf("Domingo\n");
      break;
    case '2':
      printf("Segunda-feira\n");
      break;  
    case '3':
      printf("Terça-feira\n");
      break;  
    case '4':
      printf("Quarta-feira\n");
      break;
    case '5':
      printf("Quinta-feira\n");
      break;    
    case '6':
      printf("Sexta-feira\n");
      break;
    case '7':
      printf("Sábado\n");
      break;
    default:
      printf("Número inválido\n");      
  }

  

  return 0;
}