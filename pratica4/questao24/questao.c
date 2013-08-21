/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 24
 * 
 * Classificação de idade em não eleitor(abaixo de 16), eleito obrigatorio [18-65) e 
 * facultativo 16 a 18 e acima de 65
 *
 * teste 1 => idade 5  => Não eleitor.
 * teste 2 => idade 17  => Eleitor Facultativo.
 * teste 3 => idade 73  => Eleitor Facultativo.
 * teste 3 => idade 37  => Eleitor Obrigatorio.
 */

#include <stdio.h>
#include <stdlib.h>

#define PRIMEIROVOTO 16
#define VOTOOBRIGATORIO 18
#define IDOSO 65

int main() {
  short idade;

  printf("Informe a idade da pessoa: ");
  scanf("%hd", &idade);
  if(idade < PRIMEIROVOTO)
    printf("Não eleitor.\n");  
  else if((idade >= PRIMEIROVOTO && idade < VOTOOBRIGATORIO) || idade >= IDOSO)
    printf("Eleitor Facultativo.\n");  
  else if(idade >= VOTOOBRIGATORIO && idade < IDOSO)
    printf("Eleitor Obrigatorio.\n");
  return 0;
}