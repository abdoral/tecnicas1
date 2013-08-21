/*
Criar um programa que entre com valores inteiros para uma matriz m 3 x 3 e imprima
a matriz final, com 90º de inclinacao
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main (){

        int l, c;
        int m[3][3], mf[3][3];

        printf("CURSO DE ENGENHARIA DE TELEINFORMATICA\n\nDAVI CORDEIRO BARBOSA - TPE I \n\n");
        printf(".\n");
        printf("_______________________________________________________________________________\n\n\n");

        for(l = 0; l < 3; l++){
            for(c = 0; c < 3; c++){
                printf("Digite o valor do elemento L[%d]C[%d] da matriz:\n",l+1,c+1);
                //m[l][c] = l+c;
                scanf("%d", &m[l][c]);
            }
        }

        for(l=0;l<3;l++){
            for(c=0;c<3;c++){
                printf("%d ", m[l][c]);
            }
            printf("\n");
         }

         printf("Depois\n");

        for(l=0;l < 3;l++){
            for(c=0;c<3;c++){
                mf[c][3-l-1]=m[l][c];
            }
        }

        for(l=0;l<3;l++){
            for(c=0;c<3;c++){
                printf("%d ", mf[l][c]);
            }
            printf("\n");
         }


    return 0;
    }

