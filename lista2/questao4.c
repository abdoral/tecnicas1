/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Lista de exercício 2 
 * Questão 4
 * 
 * Algoritmo para calcular a área do circulo a partir de um perímetro dado;
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416


int main() {
  
  float perimetro, raio;
  
  printf("----------------------------\n");
  printf("Informe o perimetro do círculo: ");
  scanf("%f", &perimetro);
  
  /*Descubro qual o raio*/
  raio = perimetro/(2.0*PI);
  printf("A área do cículo de perímetro %f é %f.\n", perimetro, pow(raio,2.0)*PI);
  printf("----------------------------\n");
  
  return 0;
}