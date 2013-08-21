/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 39
 * 
 * N-menores números primos;
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int numero, contador, primo=2, contadorPrimo;

  while(1) {
     printf("Informe um inteiro positivo: ");
     scanf("%d", &numero);
     if(numero < 0) {
        system("clear");
     } else
        break;
  }

  for(contador = 0; contador < numero; contador++) {
     printf("%d\n", primo);
     while(1) {
        primo++;
        for(contadorPrimo = 2; contadorPrimo < primo; contadorPrimo++) {
           if(!(primo%contadorPrimo))
              break;
        }
        if(contadorPrimo != primo)
          continue;
        break;
     }
  }

  return 0;
}