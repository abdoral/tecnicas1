/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Lista de exercício 7 
 * Questão 20

Implemente um programa que receba um nome completo de uma pessoa e apresente de acordo com os exemplos abaixo:
Exemplo 01:
Entrada: Manuel Francisco Teixeira Duarte 
Saída: DUARTE, F. T. Manuel
Exemplo 02:
Entrada: Joaquim José da Silva Xavier 
Saída: XAVIER, J. J. da Silva (observar os casos em que aparecem, por exemplo, o “da”)
 * 

 LEIAM!!!!!!!!!!!!!!!!

 Pessoal essa questão eu acho improvável de cai na prova por que ela emgloba MUITAS situações, 
 dentre essas situações seria o caso do usuário digitar anomalias do tipo:
 "   asddfre      fr fvff      l,   fdfl,   !@@E "(exagerei, mas querendo ou não é um nome e posse ser passado pelo teclado),
 para questão em específico caso o Sobral cobre na prova de hoje é muito provável que restringa apenas para nomes 
 escritos corretos, e para isso vamos ver os seguintes casos:

 1 - Jose Maria de Alves Lima => LIMA, J. M. de Alves

 2 - Carlos Santos => CARLOS, Santos;

 3 - Maria Pereira Santos => SANTOS, M. Pereira;

 4 - Marcos da Silva Oliveira => OLIVEIRA, M. da Silva;

 5 - Pedro de Alcântara Francisco António 
     João Carlos Xavier de Paula Miguel 
     Rafael Joaquim José Gonzaga Pascoal
     Cipriano Serafim de Bragança e Bourbon


  Uma escrotice é esse "da", "de", "dos" e "e";


 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTD_NOMES 500
#define TAM_NOME 500
#define ESPACO ' '

void main() {

  char nomes[QTD_NOMES][TAM_NOME], nome[TAM_NOME];
  
}