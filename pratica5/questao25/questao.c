/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 25
 * 
 * Ler 10 inteiros imprimir o maior e o segundo maior;
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int quantidade, maior, numero, segundoMaior;

  printf("Informe a quantidade de numeros que deseja inserir: ");
  scanf("%d", &quantidade);
  maior = segundoMaior = 0;
  for (quantidade; quantidade > 0; --quantidade)
  {
    printf("Informe um número inteiro positivo: ");
    scanf("%u", &numero);
    if(numero > maior)
      maior = numero;
    else if(numero < maior && numero >= segundoMaior)
      segundoMaior = numero;
  }

  printf("O maior dos numeros passados foi %d, e o segundo maior %d\n", maior, segundoMaior);
  
  return 0;
}