/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 3 
 * Questão 1
 * 
 * Algoritmo que inverte os bits de um valor inteiro dado do tamanho de 4 bytes;
 *
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
   int valorDado;
   short int contador;

   printf("Digite um valor inteiro qualquer:");
   scanf("%d",&valorDado);
   printf("Valor digitado %d\n", valorDado);
   printf("Organização dos bits antes da troca: ");
   for (contador = 31; contador >= 0; contador--)
   {
      if ((valorDado >> contador) & 1)
        printf("1");
      else
        printf("0");
   }
   printf("\n");
   /*Inverte todos os bits do valor;*/
   valorDado = ~valorDado;

   printf("Organização dos bits após da troca: ");
   for (contador = 31; contador >= 0; contador--)
   {
      if ((valorDado >> contador) & 1)
        printf("1");
      else
        printf("0");
   }
   printf("\n");

   printf("Valor com os bits invertidos %d\n", valorDado);
  
  
  return 0;
}