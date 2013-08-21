/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 27
 * 
 * Ler duas medias bimestrais e tirar a média, a partir daí julgar o aluno segundo os critérios
 *
 *
 *   Nota               Situação  
 *  ---------------   | ------------
 *  media >= 7        |  Aprovado
 *  7 < media <= 3    |  Exame
 *  media < 3         |  Reprovado
 *
 * teste 1 => nota1 10 nota2 10 media 10  => Aprovado
 * teste 2 => nota1 10 nota2 4 media 7   => Aprovado
 * teste 3 => nota1 3.8 nota2 10 media 6.9 => Exame
 * teste 4 => nota1 2 nota2 4 media 3   => Exame
 * teste 5 => nota1 1 nota2 4.8 media 2.9 => Reprovado
 * teste 6 => nota1 0 nota2 0 media 0   => Reprovado
 */

#include <stdio.h>
#include <stdlib.h>

/*faixas de medias*/
#define APROVADO 7
#define REPROVADO 3

int main() {
  float nota1, nota2, media;

  printf("Informe a primeira nota: ");
  scanf("%f", &nota1);
  printf("Informe a segunda nota: ");
  scanf("%f", &nota2);
  media = (nota1+nota2)/2;
  if(media >= APROVADO)
    printf("Média %.2f. Aprovado\n", media);
  else if(media >= REPROVADO)
    printf("Média %.2f. Exame\n", media);
  else
    printf("Média %.2f. Reprovado\n", media);
  
  
  return 0;
}