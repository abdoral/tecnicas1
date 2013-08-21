/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Lista de exercício 7 
 * Questão 24
 * 
 * Coletar as inicias de um nome;
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define FIM_DA_STRING '\0' 
#define ESPACO_EM_BRANCO ' '

int main()
{
  char str1[200], str2[100];/*por que 100?*/
  unsigned short int i = 1, j=0;

  printf ("programa para apresentar na tela os primeiros caracteres do nome de uma pessoa\n Digite o nome da pessoa: ");
  gets (str1);

  str2[j] = str1[i-1]; /*a primeirla letra, melhorar isso, fica muito amarrado*/
  j++;
  while(str1[i]) {
    if(str1[i-1] == ESPACO_EM_BRANCO && str1[i] != ESPACO_EM_BRANCO && str1[i+1] != ESPACO_EM_BRANCO) {
      str2[j] = str1[i];
      j++;
    }
    i++;
  }

  str2[j] = FIM_DA_STRING;

  printf("O nome da pessoa é %s\n", str1);
  printf("Com as iniciais %s\n", str2);



  /*system("pause");*/
  return 0;
}