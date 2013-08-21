/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 37
 * 
 * Lê o mês atual e a placa do carro e informar se o IPVA do carro vendo no mês corrente;
 *
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  int placa, mes;
 
  printf("Informe o mês atual: ");
  scanf("%d", &mes);
  printf("Informe a placa do carro: ");
  scanf("%d", &placa);

  switch(placa%10) {
    case 1:
      if(mes == 1)
        printf("O IPVA do veiculo de placa %d vence esse mês\n", placa);
      else
        printf("O IPVA do veiculo de placa %d não vence esse mês\n", placa);
      break;
    case 2:
      if(mes == 2)
        printf("O IPVA do veiculo de placa %d vence esse mês\n", placa);
      else
        printf("O IPVA do veiculo de placa %d não vence esse mês\n", placa);
      break;  
    case 3:
      if(mes == 3)
        printf("O IPVA do veiculo de placa %d vence esse mês\n", placa);
      else
        printf("O IPVA do veiculo de placa %d não vence esse mês\n", placa);
      break;  
    case 4:
      if(mes == 4)
        printf("O IPVA do veiculo de placa %d vence esse mês\n", placa);
      else
        printf("O IPVA do veiculo de placa %d não vence esse mês\n", placa);
      break;
    case 5:
      if(mes == 5)
        printf("O IPVA do veiculo de placa %d vence esse mês\n", placa);
      else
        printf("O IPVA do veiculo de placa %d não vence esse mês\n", placa);
      break;    
    case 6:
      if(mes == 6)
        printf("O IPVA do veiculo de placa %d vence esse mês\n", placa);
      else
        printf("O IPVA do veiculo de placa %d não vence esse mês\n", placa);
      break;
    case 7:
      if(mes == 7)
        printf("O IPVA do veiculo de placa %d vence esse mês\n", placa);
      else
        printf("O IPVA do veiculo de placa %d não vence esse mês\n", placa);
      break;
    case 8:
      if(mes == 8)
        printf("O IPVA do veiculo de placa %d vence esse mês\n", placa);
      else
        printf("O IPVA do veiculo de placa %d não vence esse mês\n", placa);
      break;
    case 9:
      if(mes == 9)
        printf("O IPVA do veiculo de placa %d vence esse mês\n", placa);
      else
        printf("O IPVA do veiculo de placa %d não vence esse mês\n", placa);
      break;
    case 0:
      if(mes == 10)
        printf("O IPVA do veiculo de placa %d vence esse mês\n", placa);
      else
        printf("O IPVA do veiculo de placa %d não vence esse mês\n", placa);
      break;      
  }

  

  return 0;
}