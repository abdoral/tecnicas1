/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Lista de exercício 1 
 * Questão 1
 * 
 * Algoritmo que declara e imprime de variáveis do tipo char, int e float.
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  char  variavelChar  = 'A';
  int   variavelInt   = 153214;
  float variavelFloat = 23.326; 
  
  printf("As váriaveis declaradas e inicializadas são char: %c, int: %d e float: %0.3f \n", variavelChar, variavelInt, variavelFloat);
  
  return 0;
}
