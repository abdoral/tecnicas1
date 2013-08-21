/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 16
 * 
 * Algoritmo recebe 3 números e os imprime em ordem decrescente;
 * 
 * teste 1 => 8, 54, 589 -> 589, 54, 8
 * teste 2 => 54, 8, 589 -> 589, 54, 8
 * teste 3 => 589, 54, 8 -> 589, 54, 8
 * teste 1 => 589, 8, 54 -> 589, 54, 8
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int maior, inter, menor;

  printf("Digite um número qualquer: ");
  scanf("%d", &inter);

  printf("Digite um número qualquer: ");
  scanf("%d", &menor);
  if(menor > inter) {
    menor = menor ^ inter;
    inter = menor ^ inter;
    menor = menor ^ inter;
  }

  printf("Digite um número qualquer: ");
  scanf("%d", &maior);
  if(maior < inter && maior > menor) {
    inter = maior ^ inter;
    maior = maior ^ inter;
    inter = maior ^ inter;
  } else if(maior < menor) {
    menor = maior ^ menor;
    maior = maior ^ menor;
    menor = maior ^ menor;

    inter = maior ^ inter;
    maior = maior ^ inter;
    inter = maior ^ inter;
  }

  printf("O maior %d, o inter %d e o menor %d. \n", maior, inter, menor);
  
  return 0;
}