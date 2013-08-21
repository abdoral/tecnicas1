/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Lista de exercício 7 
 * Questão 15
 * 
 * Receber uma string e converter todos os carateres de minusculo para maiúsculo.
 * O programa trabalha EXCLUSIVAMENTE com careteres da tabela ASC padrão, ou seja
  não suporta caracteres do tipo ã, é, ó, ç e similares.
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


#define END_OF_STRING '\0' /*diretiva para determinar o fim da string*/
#define ZERA_BIT_CINCO 0xDF /*diretiva para máscara que zera o bit cinto 1101 1111*/
#define ESPACO_BRANCO ' ' /*diretiva para o caratere espaço em branco*/

int main() {

  /*Primeiro eu tenho um array de char que vai futuramente formar minha string(frase), coloquei
    500 pra poder ter uma frase de um tamanho bom, pode ser menos e pode ser mais. E vou declarar mais 
    de um para poder fazer de mais de uma forma diferente;
  */
  char frase[500], frase2[500];
  /*Por que unsigned short int? 
    Frescura mesmo, pra "economizar memória" então uso apenas 2 bytes que me serve e sobra pra contar
    todos os caracteres da string.
    Começa em zero pois representa o indice do primeiro caractere da string.
  */
  unsigned short int contador = 0;

  printf("Digite sua frase: ");

  /*aqui eu uso o gets invés do scanf por conta de o scanf ignorar espaços em branco, e como é uma frase 
    óbvio que vamos ter espaços em branco por tanto opto pelo gets
  */
  scanf("%[^\n]", frase);
  //gets(frase);
  /* Primeira solução:

       Consultando a tabela ASC é possível reparar que, o que difere um caractere do alfabeto minúsculo
       de um maiúsculo é o bit 5, para os maiúsculos ele é 0 e para os minúsculos ele é 1.
       A partir desse fato tudo que precisamos fazer para mudar de minúsculo para maiúsculo é zerar
       esse bit, e pra conseguir isso vamos usar uma querida amiga "máscara" de valor bin 1101 1111 
       hex DF dec 223 aplicando o operador & entre a máscara e cada CARACTERE da string. Vamos começar!
  */

  while(frase[contador] != END_OF_STRING) {
  	/*mesmo que frase[contador] = frase[contador] & ZERA_BIT_CINCO
      uma observação a ser feita no laço é que não podemos mexer nos caractere
      espaço em branco se aplicarmos a mascara nele ele vira '\0' e ai vai da pau
      portando devemos "continuar" o laço para o próximo caso o caractere frase[contador]
      seja igual ao espaço em branco;
  	*/
    if(frase[contador] == ESPACO_BRANCO) {
      contador++;
      continue; 
    }
  	frase[contador] &= ZERA_BIT_CINCO;
    contador++;
  } 

  printf("Frase em maiúsculo\n%s \n", frase);


  /*
    Segunda solução:
    
    Indo mais além, caso não se sinta seguro para isso não continue e entenda apenas a primeira solução
    Em C temos a biblioteca ctype.h, que serve para classificar e modificar caracteres individuais, uma
    dessas classificações e modificações é com relação a ser maiuscula e minuscula, mais informações no link
    http://www.cplusplus.com/reference/cctype/
  */
  contador = 0;/*inicializo o contador novamente*/
  printf("Informe uma outra, ou a mesma frase: ");
  getchar();//limpeza de buffer;
  scanf("%[^\n]", frase2);
  //gets(frase2);
  /*obs: procure entender pq e como esse laço funcionam, uma vez que eu fiz diferente do laço de cima
    A vantagem de usar essa função é que não precisamos nos preocupar com o caractere espaço nem com outros
    carecteres que não sejam letras do alfabeto, no caso de cima vai funcionar somente para letras. :) ;
  */

  while(frase2[contador]) {
    frase2[contador] = toupper(frase2[contador]);
    contador++;
  }

  printf("Frase em maiúsculo\n%s \n", frase2);
 
  return 0;
}