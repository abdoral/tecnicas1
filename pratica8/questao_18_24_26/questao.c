#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM_MAX 100000


typedef struct {
  unsigned int digito: 4;
  unsigned int vai_um: 1;
} algarismo;

typedef struct {
  long int sinal_qtd;
  algarismo numero[TAM_MAX];
} big_num;


void zeraBigNum(big_num *numero) {
  register int contador = 0;
  
  for(;contador < TAM_MAX; contador++) {
    numero->numero[contador].digito = 0;
  }
    
}

void somaDigito(algarismo parcela1, algarismo parcela2, algarismo *soma) {
  
  if((parcela1.digito + parcela2.digito) > 10) {
    soma->digito = ((parcela1.digito + parcela2.digito)%10);
    soma->vai_um 1;
  }
  soma->digito = parcela1.digito + parcela2.digito;
  soma->vai_um = 0;
    
}

big_num soma(big_num parcela1, big_num parcela2, big_num resultado) {
  
}

int soma_mesmo_sinal(big_num parcela1, big_num parcela2, big_num *resultado) {
  register int contador;
  if(abs(parcela1.sinal_qtd) >= abs(parcela1.sinal_qtd)) {
    for(;contador < abs(parcela2.sinal_qtd);contador++) {
      
    }
  }
}

big_num soma_sinais_opostos(big_num parcela1, big_num parcela2, big_num resultado) {
  
}

big_num geraRandomBigNum() {
  big_num numero;
  register int contador = 0;
  numero.sinal_qtd = rand() % TAM_MAX + -TAM_MAX;
  for(;contador < abs(numero.sinal_qtd); contador++) {
    numero.numero[contador].digito = rand() % 9 + 0;
  }
  
  return numero;
}

void imprimeBigNum(big_num numero) {
  register int contador = abs(numero.sinal_qtd);

  for(;contador > 0; contador--)
    printf("%d", numero.numero[contador].digito);
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
  algarismo parcela1, parcela2, soma;
  parcela1.digito = parcela2.digito = 9;
  printf("A soma %d+%d é %d com vai um de %d\n", parcela1.digito, parcela2.digito, soma.digito, somaDigito(parcela1, parcela2, &soma));
  
}