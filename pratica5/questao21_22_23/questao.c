/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 21, 22 e 23
 * 
 * Ler um numero, depois ler mais numero inteiros quaisquer e imprimir o maior deles e o menor;
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int quantidade, maior, numero, menor;

  printf("Informe a quantidade de numeros que deseja inserir: ");
  scanf("%d", &quantidade);
  maior = menor = 0;
  for (quantidade; quantidade > 0; --quantidade)
  {
    printf("Informe um número inteiro positivo: ");
    scanf("%u", &numero);
    if(numero > maior)
      maior = numero;
    else if(numero <= menor)
      menor = numero;
  }

  printf("O maior dos numeros passados foi %d, e o menor %d\n", maior, menor);
  
  return 0;
}