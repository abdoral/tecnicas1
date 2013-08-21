/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 15
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
  float numero1, numero2, numero3, maior, meio, menor;

  printf("Digite um número qualquer: ");
  scanf("%f", &numero1);
  
  meio = numero1;

  printf("Digite um número qualquer: ");
  scanf("%f", &numero2);
  if(numero2 > meio) {
    menor = meio;
    meio = numero2;
  } else
    menor = numero2;

  printf("Digite um número qualquer: ");
  scanf("%f", &numero3);
  if(numero3 > meio){
    maior = numero3;
  } else if(numero3 <= meio && numero3 > menor) {
    maior = meio;
    meio = numero3;
  } else {
     maior = meio;
     meio = menor;
     menor = numero3;
  }
  
  printf("Os números digitados foram %.2f, %.2f, %.2f em ordem decrescente %.2f, %.2f, %.2f\n", numero1, numero2, numero3, maior, meio, menor);
  
  
  return 0;
}