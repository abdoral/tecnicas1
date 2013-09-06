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
#define SEGUNDOS_HORA 3600
#define SEGUNDOS_MINUTO 60
#define QTD_FATORES 1000000

typedef enum {FALSE, TRUE} boolean;

typedef struct {double raiz1; double raiz2; char *erro;} raizes_equacao_2_grau;

typedef struct {int hora; int minuto; int segundo;} tempo;



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
  register int contador, divisores=0;

  for (contador = 1; contador <= numero; contador++) {
    if (numero % contador == 0)
      divisores++;
  }
  return (divisores == 2) ? TRUE : FALSE;
}


/*
 * Retorna o n-ésimo número primo
 * 
 * @param double numero
 * @return int primo, obs: o cast é forçado;
 */

int nesimoPrimo(int numero) {
  register int primo = 1;
  while(numero) {
    if(verificaPrimo(primo)) {
      primo++;
      numero--;
    } else
      primo++;
  }
  return primo-1;  
}

/*
 * Cálcula o delta para uma equação do segundo grau;
 * 
 * @param float a coeficente
 * @param float b coeficente
 * @param float c coeficente
 * @return float delta
 */
float calculaDelta(float a, float b, float c) {
  return b*b-4*a*c;
}


/*
  Tira as raizes de uma equação

  @param int numero 
  @return boolean verdadeiro caso sera primo, falso do contrário
*/
raizes_equacao_2_grau baskara(float a, float b, float c) {
  
  raizes_equacao_2_grau raizes;
  if(calculaDelta(a,b,c) < 0.0) {
    raizes.erro = "Delta negativo! \nA equação não possui raízes reais.";
  } else {
    raizes.raiz1 = (-b + pow(calculaDelta(a,b,c),0.5))/(2*a);
    raizes.raiz2 = (-b - pow(calculaDelta(a,b,c),0.5))/(2*a);
    raizes.erro = "Raizes calculadas";
  }
  return raizes;
}


/*
 * Receber um valor em segundos e retorna em horas, minuto e segundos
 * 
 * @param int segundos
 * @return tempo em hora minuto e segundos
 */
tempo formataTempo(int segundos) {
  tempo tempo_formatado;
  
  tempo_formatado.hora = segundos/SEGUNDOS_HORA;
  segundos %= SEGUNDOS_HORA;
  tempo_formatado.minuto = segundos/SEGUNDOS_MINUTO;
  tempo_formatado.segundo = segundos%SEGUNDOS_MINUTO;
  
  return tempo_formatado;
}


int idadeEmDias(tempo idade) {
}


/*
 * Retorna um vetor com os fatores primos de um número;
 * 
 * @param int numero;
 * @return int fartores primos sem repetição;
 */
int* multiplosPrimos(int numero) {
  register int contador=0, teste=0;
  int fatores[QTD_FATORES];
  fatores[contador] = 2;//inicio com o primeiro primo
  while(1) {
    if(!numero%fatores[contador]) {
      printf("fator primo %d \n", fatores[contador]);
      printf("resto divisão %d \n", numero%fatores[contador]);
      if(numero%fatores[contador])
      numero = numero/fatores[contador];
      printf("numero %d \n", numero);
      //break;
      //if(numero == 1)
        //break;
      //print("numero %d \n", numero);
      //break;
      //numero == 1 ? break : continue;
    }
    else
      fatores[++contador] = nesimoPrimo(contador+1);
    
    if(numero == 1)
      break;
  }
  fatores[contador+1] = '\0';
  printf("contador %d \n", contador);
  /*while(fatores[teste]) {
     printf("fator primo %d \n", fatores[teste]);
     teste++;
  }*/  
   
  return fatores;
}  


/*
 * Verifica se o número é perfeito;
 * 
 * @param int numero
 * @return boolean TRUE para é perfeito ou FALSE caso contrário
 */
boolean numeroPerfeito(int numero) {
  register int contador;
  int soma = 0;
  
  for(contador = 1; contador < numero; contador++) {
    if(!numero%contador)
      soma += contador;
  }
  printf("soma é %d\n", soma);
  return (soma == numero) ? TRUE : FALSE; 
}

int main()
{
    float numeros[] = {13,13,13};
    int pesos[] = {1,1,1};
    int numero = 6;
    //raizes_equacao_2_grau raizes = baskara(1,-2,7);
    //tempo tempo_formatado = formataTempo(3670);
    printf("numero %d é %d\n", numero,numeroPerfeito(numero));
    return 0;
}

