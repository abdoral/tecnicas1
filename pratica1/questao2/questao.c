/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 1 
 * Questão 2
 * 
 * Recebe nome e 5 notas de uma aluno, calcula a média e imprime junto com o nome.
 * 
 *Teste => Nome: Abdoral Timóteo de Sousa Neto, nota1 = 5, nota2 = 7, nota3 = 7, nota4 = 8.5, nota5 = 4.5 média = 6.4 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  char nomeAluno[200];
  float media,nota1, nota2, nota3, nota4, nota5;

  printf("Informe o nome do aluno:");
  //gets(nomeAluno);
  scanf("%[^\n]", nomeAluno);
  printf("Informe a nota 1:");
  scanf("%f", &nota1);
  printf("Informe a nota 2:");
  scanf("%f", &nota2);
  printf("Informe a nota 3:");
  scanf("%f", &nota3);
  printf("Informe a nota 4:");
  scanf("%f", &nota4);
  printf("Informe a nota 5:");
  scanf("%f", &nota5);

  media = (nota1+nota2+nota3+nota4+nota5)/5;

  printf("O aluno %s teve média %f\n", nomeAluno, media);


  
  return 0;
}