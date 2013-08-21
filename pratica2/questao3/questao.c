/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 2 
 * Questão 3
 * 
 * Algoritmo para retornar o valor binário de um decimal
 * O número de entrada deve conter em um byte apenas, por tanto
 * a critério de limitação vamos tomar apenas os números positivos
 * de 0 a 255
 * teste1 => entra 143 sai 10001111
 * teste1 => entra 37  sai 00100101
 * teste3 => entra 214 sai 11010110
 */

#include <stdio.h>
#include <stdlib.h>

#define BASE 2

int main() {
  
  unsigned char dividendo, quociente;
  char bit0,bit1,bit2,bit3,bit4,bit5,bit6,bit7;
  
  printf("----------------------------------------\n");
  printf("Informe um valor entre 0-255:");
  scanf("%d",&dividendo);
  
  bit7 = dividendo%BASE;
  quociente = dividendo/BASE;
  dividendo = quociente;
  
  bit6 = dividendo%BASE;
  quociente = dividendo/BASE;
  dividendo = quociente;
  
  bit5 = dividendo%BASE;
  quociente = dividendo/BASE;
  dividendo = quociente;
  
  bit4 = dividendo%BASE;
  quociente = dividendo/BASE;
  dividendo = quociente;
  
  bit3 = dividendo%BASE;
  quociente = dividendo/BASE;
  dividendo = quociente;

  bit2 = dividendo%BASE;
  quociente = dividendo/BASE;
  dividendo = quociente;

  bit1 = dividendo%BASE;
  quociente = dividendo/BASE;
  dividendo = quociente;

  bit0 = dividendo%BASE;
  quociente = dividendo/BASE;
  dividendo = quociente;

  printf("O valor binário do número dado em binário é %d%d%d%d%d%d%d%d\n", bit0,bit1,bit2,bit3,bit4,bit5,bit6,bit7);  
  printf("----------------------------------------\n");
  
  return 0;
}
