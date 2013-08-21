/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 3
 * Questão 4
 * 
 * Algoritmo "criptografia" recebe um byte e troca os dois primeiros bits pelos dois últimos;
 * 
 * teste1 129(1000 0001) => 66 0x42(0100 0010)
 * teste2 128(1000 0000) => 2 0x2 (0000 0010)
 * teste3 115(0111 0011) => 241 0xF1(1111 0001)
 * teste4 ')'(0010 1001) => 104 0x68(0110 1000) que é o 'h'
 * teste5 'h'(0110 1000) => 41 0x29(0010 1001) que é o ')'
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
   unsigned char byte;
   char teste;

   printf("Para informar um caractere da tabela ASC digite 1\n");
   printf("Para informar um inteiro no intervalo 0-255 digite 2\n");
   scanf("%c", &teste);
   getchar();
   switch (teste) {
  	 case '1':
	    printf("Digite um caractere(byte) qualquer:");
        scanf("%c",&byte);
        getchar();
        printf("\nValor digitado %c\n", byte);
        break;
     case '2':
        printf("Digite um inteiro entre 0-255:");
        scanf("%d",&byte);       	   
        getchar();
        printf("\nValor digitado %d\n", byte);
        break;
     default:
        printf("Opção inválida.\n");
        return 0;   
   }
   
   /*Mesma idéia da primeira questão: ab00 0000 | 0000 00gh | 00cd ef00*/ 
   byte = (unsigned char)(byte << 6)
          | (unsigned char)(byte >> 6)
          | (unsigned char)((unsigned char)((unsigned char)((unsigned char)(byte >> 2) << 2) << 2) >> 2);

  printf("Byte criptografado DEC %d HEX 0x%02X\n", byte, byte);
  return 0;
}