/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 3
 * Questão 5.c
 * 
 * Algoritmo que recebe o valor em hexadecimal e após isso deve realizar as seguintes operações:
 * 1 - receber um novo valor para opacidade e substituir ao que foi passado anteriormente;
 * 2 - receber um novo valor para a cor vermelha e substituir ao que foi passado anteriormente;
 * 3 - receber um novo valor para a cor verde e substituir ao que foi passado anteriormente;
 * 4 - receber um novo valor para a cor azul e substituir ao que foi passado anteriormente;
 * Feito isso imprimir o valor resultado da cor.
 * 
 * ATENÇÃO: Esse programa pode ser melhorado, quem quiser tentar ganha um sonho de valsa heheheh !
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
   unsigned int cor, modificador;
   char teste;

   printf("Informa uma cor no formado hexadecimal: ");
   scanf("%X", &cor);
   getchar();
   printf("Para trocar o valor da opacidade digite 1\n");
   printf("Para trocar o valor da cor vermelha digite 2\n");
   printf("Para trocar o valor da cor verde digite 3\n");
   printf("Para trocar o valor da cor azul digite 4\n");
   printf("A cor digitada foi 0x%08X\n", cor);
   scanf("%c", &teste);
   switch (teste) {
  	 case '1':
	    printf("Informe o valor que modifica a opacidade:");
	    scanf("%X", &modificador);
	    /*zera o valor do modificador*/
	    cor = (cor << 8) >> 8;
	    /*monta modificador na forma AA000000*/
	    modificador = modificador << 24;
	    /*00RRGGBB | AA000000*/
	    cor = cor | modificador;
	    printf("O valor da cor com a componente de opacidade modificada é 0x%08X\n",cor);
        break;
     case '2':
        printf("Informe o valor que modifica o vermelho:");
        scanf("%X", &modificador);
        /*zera o vermelho*/
        cor  = ((cor << 16) >> 16) | ((cor >> 24) << 24);
        /*monta modificador na forma 00RR0000*/
        modificador = modificador << 16;
        /*AA00GGBB | 00RR0000*/
        cor = cor | modificador;
        printf("O valor da cor com a componente vermelha modificada é 0x%08X\n",cor);
        break;
     case '3':
        printf("Informe o valor que modifica o verde:");
        scanf("%X", &modificador);
        /*zera o verde*/
        cor  = ((cor << 24) >> 24) | ((cor >> 16) << 16);
        /*monta modificador na forma 0000GG00*/
        modificador = modificador << 8;
        /*AARR00BB | 0000GG00*/
        cor = cor | modificador;
        printf("O valor da cor com a componente verde modificada é 0x%08X\n",cor);
        break;
     case '4':
        printf("Informe o valor que modifica o azul:");
        scanf("%X", &modificador);
        /*zera o azul*/
        cor  = ((cor >> 8) << 8);
        /*AARR00BB | 0000GG00*/
        cor = cor | modificador;
        printf("O valor da cor com a componente azul modificada é 0x%08X\n",cor);
        break;      
     default:
        printf("Opção inválida.\n");
        return 0;
   }

   return 0;
}