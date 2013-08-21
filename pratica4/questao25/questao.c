/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 25
 * 
 * Classificação de idade em uma competição conforme tabela
 *
 *
 *   Categoria      Idade  
 *  ------------  | ---------------
 *  Infantil A    |  5-7 anos
 *  Infantil B    |  8-10 anos
 *  Juvenil A     |  11-13 anos
 *  Juvenil B     |  14-17 anos
 *  Sênior        |  Maiores de 18 anos
 *
 *
 * teste 1 => idade 3  => Não se encaixa em nenhuma modalidade.
 * teste 2 => idade 7  => Infantil A.
 * teste 3 => idade 9  => Infantil B.
 * teste 4 => idade 11  => Juvenil A.
 * teste 5 => idade 16  => Juvenil B.
 * teste 6 => idade 22  => Sênior.
 */

#include <stdio.h>
#include <stdlib.h>

#define INFANTILA 5
#define INFANTILB 8
#define JUVENILA  11
#define JUVENILB  14
#define SENIOR    18 

int main() {
  short idade;

  printf("Informe a idade do atleta: ");
  scanf("%hd", &idade);
  if(idade >= INFANTILA && idade < INFANTILB)
    printf("Infantil A.\n");  
  else if(idade >= INFANTILB && idade < JUVENILA)
    printf("Infantil B.\n");  
  else if(idade >= JUVENILA && idade < JUVENILB)
    printf("Juvenil A.\n");
  else if(idade >= JUVENILB && idade < SENIOR)
    printf("Juvenil B.\n");
  else if(idade >= SENIOR)
    printf("Sênior.\n");
  else
    printf("Não se encaixa em nenhuma modalidade\n");
  
  return 0;
}