/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 3 
 * Questão 1
 * 
 * Algoritmo que inverte os bits de um valor inteiro dado do tamanho de 1 byte;
 * obs1: mesmo havendo uma restrição para números positivos de [0-255] o algoritmo também
 * funciona para números entre [-128-127]
 *
 * teste1 1(0000 0001) =>128(1000 0000)
 * teste2 128(1000 0000) => 1(0000 0001)
 * teste3 2(0000 0010) => 64(0100 0000)
 * teste4 3(0000 0101) => 192(1010 0000)
 * teste5 129(1000 0001) => 129(1000 0001)
 * teste6 16(0000 1000) => 8(0001 0000)
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
   unsigned char valorDado;
   short int contador;

   printf("Digite um valor inteiro qualquer entre 00-FF:");
   scanf("%X",&valorDado);
   printf("Valor digitado %02X\n", valorDado);
   printf("Organização dos bits antes da troca: ");

   /*somente imprime a representação do valor dado em binário*/
   for (contador = 7; contador >= 0; contador--)
   {
      if ((valorDado >> contador) & 1)
        printf("1");
      else
        printf("0");
   }
   printf("\n");

   /*Esse tracing ele executa passo a passo a idéia, que é fomar a expressão logo abaixo Exp.*/
   /*tracing
   printf("%d\n", ((unsigned char)(valorDado << 7)));
   printf("%d\n", ((unsigned char)((unsigned char)((unsigned char)(valorDado >> 1) << 7) >> 1)));
   printf("%d\n", ((unsigned char)((unsigned char)((unsigned char)(valorDado >> 2) << 7) >> 2)));
   printf("%d\n", ((unsigned char)((unsigned char)((unsigned char)(valorDado >> 3) << 7) >> 3)));
   printf("%d\n", ((unsigned char)((unsigned char)((unsigned char)(valorDado >> 4) << 7) >> 4)));
   printf("%d\n", ((unsigned char)((unsigned char)((unsigned char)(valorDado >> 5) << 7) >> 5)));
   printf("%d\n", ((unsigned char)((unsigned char)((unsigned char)(valorDado >> 6) << 7) >> 6)));
   printf("%d\n", ((unsigned char)(valorDado >> 7)));*/
   
   /*Exp => hgfedcba = a000 0000 | 0b00 0000 | 00c0 0000 | 000d 0000 | 0000 e000 | 0000 0f00 | 0000 00g0 | 0000 000h*/ 
   /* O motivo pelo qual sempre forço o tipo ser unsigned char é pelo comportamento do tipo char quando temos um deslocamento
      a esquerda nessa seguinte situação:

        var = 0010 1111  << 3;
      Teóricamente deveriamos ter var = 0111 1000 certo?! Ai que ocorre a merda, no caso do char, 
      ele é "promovido"  a um inteiro no caso: var = 0000 0000 0000 0000 0000 0001 0111 1000, com isso
      minha operção vai dá errado, pra entender melhor seria interessante fazer um teste do tipo:
      var = 1000 0000 (128), desloque um bit e imprima o resultado e veja a "mágica acontecer".


   */
   valorDado = (((unsigned char)(valorDado << 7))
                               | ((unsigned char)((unsigned char)((unsigned char)(valorDado >> 1) << 7) >> 1))
                               | ((unsigned char)((unsigned char)((unsigned char)(valorDado >> 2) << 7) >> 2))
                               | ((unsigned char)((unsigned char)((unsigned char)(valorDado >> 3) << 7) >> 3))
                               | ((unsigned char)((unsigned char)((unsigned char)(valorDado >> 4) << 7) >> 4))
                               | ((unsigned char)((unsigned char)((unsigned char)(valorDado >> 5) << 7) >> 5))
                               | ((unsigned char)((unsigned char)((unsigned char)(valorDado >> 6) << 7) >> 6))
                               | ((unsigned char)(valorDado >> 7)));

   printf("Organização dos bits após da troca: ");

   /*somente imprime a representação do valor dado em binário*/
   for (contador = 7; contador >= 0; contador--)
   {
      if ((valorDado >> contador) & 1)
        printf("1");
      else
        printf("0");
   }
   printf("\n");

   printf("Valor com os bits invertidos %02X\n", valorDado);
  
  
  return 0;
}