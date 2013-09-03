/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488 - abdoral.neto@gmail.com
 * Lista de exercício 8 - Funções
 */



#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define PI 3.14

typedef enum {FALSE, TRUE} boolean;


/*
  Calcula o volume da esfera

  @param float raio da esfera
  @return double volume da esfera
*/
double volumeEsfera (float raio) {
    return (4/3)*PI*pow(raio,3.0);
}



/*
  Calcula a média aritimética de uma lista de números dados;

  @param float *numeros endereço do vetor de números
  @return float média aritimética calculada
*/
float mediaAritimetica(float *numeros) {

    register int contador = 0;
    float media = 0.0;

    while(*numeros) {
        media += *(numeros++);
        contador++;
    }
    return media/contador;
}


/*
  Calcula a média ponderada de uma lista de números e pesos dados;
  Caso o número de pesos seja menor que o o de números assume-se o peso igual a 1,
  do contrário assume-se número igual a 0;

  @param float *numeros endereço do vetor de números
  @param float *pesos endereço do vetor de pesos
  @return float média ponderada calculada
*/
float mediaPonderada(float *numeros, int *pesos) {

    register int totalPesos = 0, contador = 0;
    float media = 0.0;

    while(*numeros) {
        printf("tamanho do peso %d \n", sizeof(*pesos));
        printf("teste pesos peso[%d] -> %d == %d -> %d \n", contador, *pesos, *pesos, (*pesos ? *pesos : 3));
        totalPesos += (*pesos ? *pesos : 1);
        media += *(numeros++) * (*pesos ? *pesos : 1);
        pesos++;
        contador++;
    }
    printf("Soma pesos %d\n", totalPesos);
    printf("Contador %d\n", contador);
    printf("%f\n", media);
    return media/totalPesos;
}




int main()
{
    float raio[] = {2,10,2,4,54,878.668,841,85};
    int pesos[] = {1,1,10,1,1,1,1,1,1,1,1,1};
    printf("Média \n");
    printf("%f", mediaPonderada(raio, pesos));
    return 0;
}

