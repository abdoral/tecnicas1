/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 1 
 * Questão 5
 * 
 * Algoritmo atribuir o valor de uma variável em outra e virse-versa;
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int var1, var2;
  
  printf("----------------------------------------\n");
  printf("Informe um valor inteiro:");
  scanf("%d", &var1);
  printf("Informe outro valor inteiro:");
  scanf("%d", &var2);
  printf("Os valores iniciais de var1 é %d e de var2 é %d\n", var1, var2);
  var1 = var1 ^ var2;
  var2 = var1 ^ var2;
  var1 = var1 ^ var2;
  printf("Os valores finais de var1 é %d e de var2 é %d\n", var1, var2);
  printf("----------------------------------------\n");
  
  return 0;
}