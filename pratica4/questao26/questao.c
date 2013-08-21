/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 26
 * 
 * Preços do plano de saúde apartir da idade
 *
 *
 *   Idade                        Valor  
 *  -------------------------  | ---------------
 *  Até 10 anos                |  R$ 30.00
 *  Acima de 10 até 29 anos    |  R$ 60.00
 *  Acima de 29 até 45 anos    |  R$ 120.00
 *  Acima de 45 até 59 anos    |  R$ 150.00
 *  Acima de 59 até 65 anos    |  R$ 250.00
 *  Acima de 65 anos           |  R$ 400.00
 *
 *
 * teste 1 => idade 10  => R$ 30.00
 * teste 2 => idade 25  => R$ 60.00
 * teste 3 => idade 30  => R$ 120.00
 * teste 4 => idade 55  => R$ 150.00
 * teste 5 => idade 64  => R$ 250.00
 * teste 6 => idade 65  => R$ 400.00
 */

#include <stdio.h>
#include <stdlib.h>

/*faixas de idades*/
#define FAIXA1 10
#define FAIXA2 29
#define FAIXA3 45
#define FAIXA4 59
#define FAIXA5 65 

/*preço por faixa de idade*/
#define PRECOFAIXA1 30.00
#define PRECOFAIXA2 60.00
#define PRECOFAIXA3 120.00 
#define PRECOFAIXA4 150.00 
#define PRECOFAIXA5 250.00 
#define PRECOFAIXA6 400.00 

int main() {
  short idade;

  printf("Informe a idade da pessoa: ");
  scanf("%hd", &idade);
  if(idade <= FAIXA1)
    printf("O valor do plano será de R$%.2f\n", PRECOFAIXA1);
  else if(idade <= FAIXA2)
    printf("O valor do plano será de R$%.2f\n", PRECOFAIXA2);
  else if(idade <= FAIXA3)
    printf("O valor do plano será de R$%.2f\n", PRECOFAIXA3);
  else if(idade <= FAIXA4)
    printf("O valor do plano será de R$%.2f\n", PRECOFAIXA4);
  else if(idade <= FAIXA5)
    printf("O valor do plano será de R$%.2f\n", PRECOFAIXA5);
  else
    printf("O valor do plano será de R$%.2f\n", PRECOFAIXA6);
  
  return 0;
}