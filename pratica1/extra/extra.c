/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 1 
 * Questão extra
 * 
 * Algoritmo que recebe três inteiros a,b e c e retorna a com valor de b, b com valor de c e c com valor de a
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int a,b,c;
  
  printf("----------------------------------------\n");
  printf("Informe o valor de a:");
  scanf("%d", &a);
  printf("Informe o valor de b:");
  scanf("%d", &b);
  printf("Informe o valor de c:");
  scanf("%d", &c);
  printf("a= %d, b=%d, c=%d ======> ",a,b,c);

  /*swap de b com a*/
  a = a^b;
  b = a^b;
  a = a^b;

  /*swap de b(com valor de a) com c*/
  b = b^c;
  c = b^c;
  b = b^c;
  printf("a= %d, b=%d, c=%d\n",a,b,c);
  printf("----------------------------------------\n");
  
  return 0;
}