/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 31
 * 
 * Receber três valores e verificar se esses valores podem representar os lados
 * de um triangulo, caso seja verdade classifique, como retangulo, acutangulo
 * e obtusangulo.
 *
 *
 * teste 1 => ladoA 5, ladoB 3, ladoC 4, existe, retangulo
 * teste 2 => ladoA 20, ladoB 3, ladoC 4, não existe
 * teste 3 => ladoA 5, ladoB 4, ladoC 4, existe, acutângulo 
 * teste 3 => ladoA 7, ladoB 4, ladoC 4, existe, obtusângulo
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main() {
  float ladoA;/*maior dos lados*/
  float ladoB, ladoC;/*menores dos lados*/
  float maior, meio, menor;
 
  /*ordenar os valores para saber o maior dos lados, caso exista o triangulo*/
  printf("Informe o primeiro valor: ");
  scanf("%f", &ladoA);
  meio = ladoA;

  printf("Informe o segundo valor: ");
  scanf("%f", &ladoB);
  if(ladoB > meio) {
    menor = meio;
    meio = ladoB;
  } else
    menor = ladoB;

  printf("Informe o terceiro valor: ");
  scanf("%f", &ladoC);
  if(ladoC > meio){
    maior = ladoC;
  } else if(ladoC <= meio && ladoC > menor) {
    maior = meio;
    meio = ladoC;
  } else {
     maior = meio;
     meio = menor;
     menor = ladoC;
  }
   
  ladoA = maior;
  ladoB = meio;
  ladoC = menor;  


  if(abs(ladoB - ladoC) < ladoA && ladoB + ladoC > ladoA) {
    /*verifica se o triangulo é retângulo*/
    if(pow(ladoA, 2.0) == pow(ladoB, 2.0) + pow(ladoC, 2.0))
      printf("O triângulo de lados %.2f, %.2f e %.2f existe e é retângulo.\n", ladoA, ladoB, ladoC);
    else if(pow(ladoA, 2.0) > pow(ladoB, 2.0) + pow(ladoC, 2.0))
      printf("O triângulo de lados %.2f, %.2f e %.2f existe e é obtusângulo.\n", ladoA, ladoB, ladoC);
    else
      printf("O triângulo de lados %.2f, %.2f e %.2f existe e é acutângulo.\n", ladoA, ladoB, ladoC);
  }
  else
    printf("O triângulo de lados %.2f, %.2f e %.2f não existe.\n", ladoA, ladoB, ladoC);
  
  return 0;
}