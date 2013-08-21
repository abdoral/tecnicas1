/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 3 
 * Questão 3
 * 
 * Algoritmo lê um byte do teclado zera os bits 3 e 4 e troca o bit 0 pelo bit 7, mostrar o resultado em hexadecimal;
 * 
 * teste1 '('(0010 1000) => 0x20(0010 0000)
 * teste2 'n'(0110 1110) => 0x66(0110 0110)
 * teste3 152(1001 1000) => 0x1(0000 0001)
 * teste4 25(0001 1001)  => 0x80(1000 0000)
 * teste5 1(0000 0001) => 0x80(1000 0000)
 * teste6 255(1111 1111) => 0xE7(1110 0111)
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
   unsigned char valorDado;
   char teste;

   printf("Para informar um caractere da tabela ASC digite 1\n");
   printf("Para informar um inteiro no intervalo 0-255 digite 2\n");
   scanf("%c", &teste);
   getchar();
   /*Esse switch serve para meio que montar um 'menu' do meu programa, para trabalhar com um 
     caractere(1 byte) ou um inteiro no intervalo 0-255(1 byte), é uma boa saída para quando vc precisa ter
     tipos diferentes a serem manipulados
    */
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

   /*trocando 0 por 7 e 7 por 0, obeservar que aqui segue a mesma ideia da primeira questão*/
   valorDado = (unsigned char)((unsigned char)(valorDado << 7) 
                                | (unsigned char)(valorDado >> 7)
                                | (unsigned char)((unsigned char)((unsigned char)(valorDado >> 1) << 2) >> 1));   
   printf("Bits 3 e 4 zerados e Bits 0 e 7 trocados 0x%02X\n", valorDado);
   return 0;
}