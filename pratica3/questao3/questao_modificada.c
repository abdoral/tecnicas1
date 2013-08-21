/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 3 
 * Questão 3
 * 
 * Algoritmo lê um byte do teclado zera os bits 3 e 4 e inverte os valores 0 e 7, mostrar o resultado em hexadecimal;
 * 
 * teste1 '('(0010 1000) => 0xA1(1010 0001)
 * teste2 'n'(0110 1110) => 0xE7(1110 0111)
 * teste3 152(1001 1000) => 0x81(0000 0001)
 * teste4 25(0001 1001)  => 0x80(1000 0000)
 * teste5 1(0000 0001) => 0x80(1000 0000)
 * teste6 255(1111 1111) => 0x66(0110 0110)
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
   unsigned char valorDado;
   const unsigned char inverteZeroESete = 0x81/*1000 0001*/;
   char teste;

   printf("Para informar um caractere da tabela ASC digite 1\n");
   printf("Para informar um inteiro no intervalo 0-255 digite 2\n");
   scanf("%c", &teste);
   getchar();
   switch (teste) {
  	 case '1':
	    printf("Digite um caractere(byte) qualquer:");
        scanf("%c",&valorDado);
        getchar();
        printf("\nValor digitado %c\n", valorDado);
        break;
     case '2':
        printf("Digite um inteiro entre 0-255:");
        scanf("%d",&valorDado);       	   
        getchar();
        printf("\nValor digitado %d\n", valorDado);
        break;
     default:
        printf("Opção inválida.\n");
        return 0;   
   }

   /*zerando bits 3 e 4*/
   valorDado = (unsigned char)((unsigned char)((unsigned char)(valorDado >> 5) << 5) | (unsigned char)((unsigned char)(valorDado << 5) >> 5));
   /*printf("Bits 3 e 4 zerados %X\n", valorDado);*/

   /*invertendo 0 e 7*/
   valorDado = valorDado ^ inverteZeroESete;   
   printf("Bits 3 e 4 zerados e Bits 0 e 7 invertidos 0x%02X\n", valorDado);
   return 0;
}