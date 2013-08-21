/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 3
 * Questão 6
 * 
 * Algoritmo desloca 4 bits a direita com sinal, e desloca 4 sem sinal;
 *  
 * teste1 1024 => 4
 * teste2 -1024 => -4
 * teste3 128 => 0
 * teste4 -128 => -1
 *
 * ATENÇÂO: Essa questão tem uma situação bastante interessante também, faça o teste de trocar o numero de int
 * para unsigned int e verifique o que ocorre no caso de vc passar um número negativo, caso não entenda me procure 
 * que eu explico melhor;
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  int numero;
  int contador;

  printf("Informe um valor inteiro:\n");
  scanf("%d", &numero);
  printf("Organização dos bits antes do deslocamento: ");
  for (contador = 31; contador >= 0; contador--)
  {
     if ((numero >> contador) & 1)
       printf("1");
     else
       printf("0");
  }
  printf("\n");
  
  numero = (numero >> 4) >> 4;
  
  printf("Organização dos bits depois do deslocamento: ");
  for (contador = 31; contador >= 0; contador--)
  {
     if ((numero >> contador) & 1)
       printf("1");
     else
       printf("0");
  }
  printf("\n");
  printf("%d\n", numero);
  
  return 0;
}