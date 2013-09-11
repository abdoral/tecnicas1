#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM_MAX 100000

typedef struct {
  long int sinal_qtd;
  int numero[TAM_MAX];
} big_num;


void zeraBigNum(big_num *numero) {
  register int contador = 0;
  
  for(;contador < TAM_MAX; contador++) {
    numero->numero[contador] = 0;
  }
    
}

big_num soma(big_num parcela1, big_num parcela2, big_num resultado) {
  
}

big_num soma_mesmo_sinal(big_num parcela1, big_num parcela2, big_num resultado) {
  register int contador;
}

big_num soma_sinais_opostos(big_num parcela1, big_num parcela2, big_num resultado) {
  
}

big_num geraRandomBigNum() {
  big_num numero;
  register int contador = 0;
  numero.sinal_qtd = rand() % TAM_MAX + -TAM_MAX;
  for(;contador < abs(numero.sinal_qtd); contador++) {
    numero.numero[contador] = rand() % 9 + 0;
  }
  
  return numero;
}

void imprimeBigNum(big_num numero) {
  register int contador = abs(numero.sinal_qtd);

  for(;contador > 0; contador--)
    printf("%d", numero.numero[contador]);
  printf("\n");
    
}

unsigned long int fatorial (int n)
{
    if(n==1 || n==0) 
        return n;
    return fatorial(n-1) * n;          
}

void main()
{
  big_num numero = geraRandomBigNum();
  zeraBigNum(&numero);
  imprimeBigNum(numero);
  
}