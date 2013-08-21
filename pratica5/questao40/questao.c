/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 40
 * 
 * MDC entre dois números dados;
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int numero, numero2, contador, primo=2, contadorPrimo;

  printf("Informe um inteiro positivo: ");
  scanf("%d", &numero);
  printf("Informe um inteiro positivo: ");
  scanf("%d", &numero2);
  

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