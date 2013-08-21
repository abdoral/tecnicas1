/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 37
 * 
 * Calcular as raizes de uma equação do segundo grau, recebendo
 * os coeficientes a, b e c
 *
 * teste 1 => idade 15, peso 70, 40 gotas
 * teste 2 => idade 20, peso 50, 35 gotas
 * teste 3 => idade 1, peso 10, 5 gotas 
 */

#include <stdio.h>
#include <stdlib.h>


#define FAIXAPESOMAIOR12 60
#define FAIXAPESOMENOR1 5
#define FAIXAPESOMENOR2 9
#define FAIXAPESOMENOR3 16
#define FAIXAPESOMENOR4 24
#define FAIXAPESOMENOR5 30

#define GOTAPORMG 0.04 

int main() {
  short idade;
  float peso;
 
  printf("Informe a idade do paciente: ");
  scanf("%hd", &idade);
  printf("Informe o peso do paciente: ");
  scanf("%f", &peso);
  
  if(idade >= 12) {
    if(peso >=60)
      printf("O paciente deve tomar %d gotas \n", (int)(1000*GOTAPORMG));
    else
      printf("O paciente deve tomar %d gotas \n", (int)(875*GOTAPORMG));
  } else {
    if(peso < FAIXAPESOMENOR1)
      printf("Fora da faixa de peso para uso do remédio. Consulte o médico.\n");
    else if(peso >= FAIXAPESOMENOR1 && peso <= FAIXAPESOMENOR2)
      printf("O paciente deve tomar %d gotas \n", (int)(125*GOTAPORMG));
    else if(peso > FAIXAPESOMENOR2 && peso <= FAIXAPESOMENOR3)
      printf("O paciente deve tomar %d gotas \n", (int)(250*GOTAPORMG));
    else if(peso >= FAIXAPESOMENOR3 && peso <= FAIXAPESOMENOR4)
      printf("O paciente deve tomar %d gotas \n", (int)(375*GOTAPORMG));
    else if(peso >= FAIXAPESOMENOR4 && peso <= FAIXAPESOMENOR5)
      printf("O paciente deve tomar %d gotas \n", (int)(500*GOTAPORMG));
    else
      printf("O paciente deve tomar %d gotas \n", (int)(750*GOTAPORMG));

  }
    



  return 0;
}