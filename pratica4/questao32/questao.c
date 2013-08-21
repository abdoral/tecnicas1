/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 32
 * 
 * Receber três valores e verificar se esses valores podem representar os lados
 * de um triangulo e se é um triangulo retangulo, caso seja verdade determine
 * o valor dos seus ângulos;
 *
 *
 * teste 1 => ladoA 1.41421356237(raiz de 2), ladoB 1, ladoC 1, existe, retangulo, angulos, 90,45,45
 * teste 2 => ladoA 8.66025403784(5*raiz de 3), ladoB 5, ladoC 10, existe, , retangulo, angulos, 90,30,60
 * teste 4 => ladoA 7, ladoB 4, ladoC 4, existe, não retangulo
 * teste 5 => ladoA 200, ladoB 4, ladoC 4, não existe
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

#define RADIANO 57.2957795
#define ANGULOA 90
#define ANGULOSABC 180

int main() {
  long double ladoA;/*maior dos lados*/
  long double ladoB, ladoC;/*menores dos lados*/
  long double maior, meio, menor;
  long double anguloB, anguloC;
 
  /*ordenar os valores para saber o maior dos lados, caso exista o triangulo*/
  printf("Informe o primeiro valor: ");
  scanf("%Lf", &ladoA);
  meio = ladoA;

  printf("Informe o segundo valor: ");
  scanf("%Lf", &ladoB);
  if(ladoB > meio) {
    menor = meio;
    meio = ladoB;
  } else
    menor = ladoB;

  printf("Informe o terceiro valor: ");
  scanf("%Lf", &ladoC);
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
    /*verifico se ladoA é um valor válido de hipotenusa*/
    if(ladoA = hypotl(ladoB, ladoC)) {
      printf("O triângulo de lados %.6Lf, %.6Lf e %.6Lf existe e é retângulo.\n", ladoA, ladoB, ladoC);
      /*ladoC/ladoA é o cosseno, tiro o valor do angulo em radianos e passo para graus*/
      anguloB = acos(ladoC/ladoA)*RADIANO;/*outra saida asen(ladoB/ladoA)*RADIANO seria*/
      /*soma dos ângulos é 180, e um deles já é 90*/
      anguloC = ANGULOSABC - ANGULOA - anguloB;
      printf("Seus ângulos são %d, %Lf e %Lf\n", ANGULOA, anguloB, anguloC);
    }
    else
      printf("O triângulo de lados %.6Lf, %.6Lf e %.6Lf existe mas não é retângulo.\n", ladoA, ladoB, ladoC);
  }
  else
    printf("O triângulo de lados %.6Lf, %.6Lf e %.6Lf não existe.\n", ladoA, ladoB, ladoC);
  
  return 0;
}