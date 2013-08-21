/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 37
 * 
 * Verificar se o aluno foi aprovado ou não dado frequencia e nota
 *
 * teste 1 => idade 15, peso 70, 40 gotas
 * teste 2 => idade 20, peso 50, 35 gotas
 * teste 3 => idade 1, peso 10, 5 gotas 
 */

#include <stdio.h>
#include <stdlib.h>


#define FAIXAFREQUENCIAREPROVA 75 
#define FAIXANOTAREPROVA 3
#define FAIXANOTAEXAME 7 

int main() {
  float nota, frequencia;
 
  printf("Informe a frequencia do aluno: ");
  scanf("%f", &frequencia);
  if(frequencia < FAIXAFREQUENCIAREPROVA ) {
    printf("Aluno reproado por falta.\n");
    return 0;
  }

  printf("Informe a nota do aluno: ");
  scanf("%f", &nota);

  if(nota < FAIXANOTAREPROVA)
    printf("Reprovado\n");
  else if(nota >= FAIXANOTAREPROVA && nota < FAIXANOTAEXAME)
    printf("Exame\n");
  else
    printf("Aprovado\n");
  

  return 0;
}