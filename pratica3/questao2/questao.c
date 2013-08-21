/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 3
 * Questão 2
 *
 * Algoritmo que recebe um byte, inverte o bit mais significativo
 * e zera os 3 últimos menos significativos.
 *
 * teste1 => '7'(0011 0111) => 48,30,'0'(0011 0000) => 176(1011 0000), B0, 'não asc'
 * teste2 => 'S'(0101 0011) => 80,50,'P'(0101 0000) => 208(1101 0000), D0, 'não asc'
 * teste3 => 0(0000 0000) => 0,0,''(0000 0000) => 128(1000 0000), 80, 'não asc'
 * teste4 => 128(1000 0000) => 128,80,'não asc'(1000 0000) => 0(0000 0000),0,''
 * teste5 => 141(1000 1111) => 136,88,'X'(1000 1000) => 8(0000 1000),8,'BS'
 * teste6 => 175(1010 1111) => 168,A8,'não asc'(1010 1000) => 40(0010 1000),28,'('
 * teste7 => 255(1111 1111) => 248, F8, 'não asc'(1111 1000) => 120(0111 1000), 78, 'x'
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
   const unsigned char zeraTresUltimos = 248; /*11111000*/
   const unsigned char trocaPrimeiro = 128; /*10000000*/
   //unsigned char valorDado;
   unsigned short int valorDado;
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
   
   /*zera os três últimos bits*/
   valorDado = valorDado & zeraTresUltimos;
   printf("Valor com os três últimos zerados: DEC %d HEX %X ASC %c\n", valorDado, valorDado, valorDado);
   /*inverte valor do bit mais significativos*/
   valorDado = valorDado ^ trocaPrimeiro;
   printf("Valor com o primeiro trocado e o três últimos zerados DEC %d HEX %X ASC %c\n", valorDado, valorDado, valorDado);
   
   return 0;
}
