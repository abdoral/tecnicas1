/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 21
 * 
 * Cálculo do IMC, dando como resposta em qual situação se encontra a pessoa dado os valores abaixo:
 *  IMC abaixo de 20 Abaixo do peso 
 *  IMC de 20 até 25 Peso Normal 
 *  IMC de 25 até 30 Sobre Peso 
 *  IMC de 30 até 40 Obeso
 *  IMC de 40 e acima Obeso Mórbido
 * 
 * teste 1 => peso 45 , altura 1.65 => IMC de 16.53. Você está abaixo do peso.
 * teste 2 => peso 62, altura 1.65 => IMC de 22.77. Você está com o peso normal.
 * teste 3 => peso 74, altura 1.65 => IMC de 27.18. Você está com o sobrepeso.
 * teste 4 => peso 90, altura 1.65 => IMC de 33.06. Você está obeso.
 * teste 5 => peso 120, altura 1.65 => IMC de 44.08. Você está com obesidade móbida.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  double peso, altura, imc;

  printf("Digite sua altura: ");
  scanf("%lf", &altura);
  printf("Digite peso: ");
  scanf("%lf", &peso);

  imc = peso/pow(altura,2.0);

  if(imc < 20)
    printf("IMC de %.2lf. Você está abaixo do peso.\n", imc);
  else if(imc < 25 && imc >= 20)
    printf("IMC de %.2lf. Você está com o peso normal.\n", imc);
  else if(imc < 30 && imc >= 25)
    printf("IMC de %.2lf. Você está com o sobrepeso.\n", imc);
  else if(imc < 40 && imc >=30)
    printf("IMC de %.2lf. Você está obeso.\n", imc);
  else if(imc >=40)
    printf("IMC de %.2lf. Você está com obesidade móbida.\n", imc);
    
  return 0;
}