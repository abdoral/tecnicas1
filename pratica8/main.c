/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488 - abdoral.neto@gmail.com
 * Lista de exercício 8 - Funções
 */



#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define PI 3.14
#define QTD_NOTAS 3

typedef enum {FALSE, TRUE} boolean;

typedef struct {float raiz1, float raiz2} raizes_equacao_2_grau;


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
  @param int qtd_numeros total de números a serem calculados
  @return float média aritimética calculada
*/
float mediaAritimetica(float *numeros, int qtd_numeros) {

    register int contador = qtd_numeros;
    float media = 0.0;
    while(contador--) {
        media += *(numeros++);
    }
    return media/qtd_numeros;
}


/*
  Calcula a média ponderada de uma lista de números e pesos dados;
  Caso o número de pesos seja menor que o o de números assume-se o peso igual a 1,
  do contrário assume-se número igual a 0;

  @param float *numeros endereço do vetor de números
  @param float *pesos endereço do vetor de pesos
  @param int qtd_numeros total de números a serem calculados
  @return float média ponderada calculada
*/
float mediaPonderada(float *numeros, int *pesos, int qtd_numeros) {

    int totalPesos = 0;
    float media = 0.0;

    while(qtd_numeros--) {
        totalPesos += (*pesos);
        media += *(numeros++) * *(pesos++);
    }
    return media/totalPesos;
}


/*
  Calcula a média harmonica de uma lista de números dados;

  @param float *numeros endereço do vetor de números
  @param int qtd_numeros total de números a serem calculados
  @return float média harmonica calculada
*/
float mediaHarmonica(float *numeros, int qtd_numeros) {

    register int contador = qtd_numeros;
    float media = 0.0;

    while(contador--) {
        media += 1 / *(numeros++);
    }
    return qtd_numeros/media;
}


/*
  Verifica se um numero inteiro dado é primo;

  @param int numero 
  @return boolean verdadeiro caso sera primo, falso do contrário
*/
boolean verificaPrimo(int numero) {

  register int contador, divisores;

  for (contador = 1; contador <= numero; contador++)
    if (numero % contador == 0)
      divisores++;
  
  return (divisores == 2) ? TRUE : FALSE;
}



/*
  Tira as raizes de uma equação

  @param int numero 
  @return boolean verdadeiro caso sera primo, falso do contrário
*/
raizes_equacao_2_grau baskara(float a, float b, float c) {

}




int main()
{
    float numeros[] = {13,13,13};
    int pesos[] = {1,1,1};
    printf("Média \n");
    printf("%d\n", verificaPrimo(37));
    return 0;
}

