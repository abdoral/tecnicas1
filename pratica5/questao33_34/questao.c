/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 33, 34
 * 
 * Entrar com dois numeros e fazer o resto/qouciente da divisao entre os dois atraves de subtrações sucessivas.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int dividendo, divisor, resto=0, quociente;

  while(1) {
     printf("Informe o dividendo: ");
     scanf("%d", &dividendo);
     printf("Informe o divisor: ");
     scanf("%d", &divisor); 
     if(divisor > dividendo) {
        system("clear");
        printf("Informe um divendo maior que o divisor.\n");
     } else
        break;
  }

  for(quociente = 0; dividendo >= quociente; quociente++) {
     resto = dividendo - divisor;
     dividendo = resto;
  }

  printf("Resto da divisão é : %d e o resultado: %d\n", resto, quociente);
  
  return 0;
}