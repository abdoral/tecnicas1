#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM_MAX 1000000


typedef struct {
  unsigned char digito: 4;
  unsigned char vai_um: 1;
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
  if((parcela1.digito + parcela2.digito) >= 10) {
    soma->digito = ((parcela1.digito + parcela2.digito)%10);
    soma->vai_um = 1;
  } else {
    soma->digito = parcela1.digito + parcela2.digito;
    soma->vai_um = 0;
  }
  
  printf("%d + %d =  %d vai %d\n", parcela1.digito, parcela2.digito, soma->digito, soma->vai_um);
}

/*TODO: entrar com um carry nulo e a cada interação somar com o carry resultante da soma*/
big_num soma(big_num parcela1, big_num parcela2, big_num resultado) {
  
}

int soma_mesmo_sinal(big_num parcela1, big_num parcela2, big_num *resultado) {
  register int contador = 0 , carry_in = 0;
  if(abs(parcela1.sinal_qtd) >= abs(parcela1.sinal_qtd)) {
    for(;contador < abs(parcela2.sinal_qtd);contador++) {
      parcela1.numero[contador].digito += carry_in;
      somaDigito(parcela1.numero[contador], parcela2.numero[contador], &resultado->numero[contador]);
      carry_in = resultado->numero[contador].vai_um;
    }
    if(carry_in) {
      //resultado->numero[contador].digito += carry_in;
      if((resultado->numero[contador].digito == 9) && carry_in) {
	if(contador >= TAM_MAX) {
	 resultado->numero[contador].digito = 0;
	 return carry_in;
	} else {
	  resultado->numero[contador].digito = 0;
	  resultado->numero[contador+1].digito = carry_in;
	}
      } else if(contador >= TAM_MAX) {
	return carry_in;
      } else {
	resultado->numero[contador].digito += carry_in;
      }
    }
    
    if(parcela1.sinal_qtd > contador) {
      for(;contador <= parcela1.sinal_qtd, contador) {
	
      }
    }
}

big_num soma_sinais_opostos(big_num parcela1, big_num parcela2, big_num resultado) {
  
}

big_num geraRandomBigNum(int qtd_digitos) {
  big_num numero;
  register int contador = 0;
  numero.sinal_qtd = rand() % TAM_MAX + -TAM_MAX;
  numero.sinal_qtd = qtd_digitos;
  for(;contador < abs(numero.sinal_qtd); contador++) {
    numero.numero[contador].digito = rand() % 9 + 0;
  }
  
  return numero;
}

void imprimeBigNum(big_num numero) {
  register int contador = abs(numero.sinal_qtd);

  for(;contador >= 0; contador--)
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
  big_num num1, num2, soma_nums;
  num1 = geraRandomBigNum(7);
  num2 = geraRandomBigNum(5);
  //soma_nums = geraRandomBigNum(10);
  imprimeBigNum(num1);
  imprimeBigNum(num2);
  soma_mesmo_sinal(num1, num2, &soma_nums);
  imprimeBigNum(soma_nums);
  //imprimeBigNum(soma_nums);
  //parcela1.digito = parcela2.digito = 9;
  //somaDigito(parcela1, parcela2, &soma);
  //printf("A soma %d+%d é %d com vai um de %d\n", parcela1.digito, parcela2.digito, soma.digito, soma.vai_um);
  
  
  
}