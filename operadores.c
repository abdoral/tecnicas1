/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - abdoral.neto@gmail.com - 357488
 * 
 *  Usos de operadores bit-a-bit.
 *  Exemplos e explicações de como funciona cada operador e algumas aplicações
 *
 *  COMPILE E EXECUTE ANTES DE LER ESSE CÓDIGO!
 *  USO RECOMENDADO PARA LINUX e/ou MAC OS!
 * 
 */

#include <stdio.h>
#include <stdlib.h>

/*Aqui eu vou definir algumas diretivas de compilação para tornar o meu código mais didático,
  mas nada impede que se faça dessa forma na prova, o Sobral por até gostar disso. Lembrando
  que a diretiva de compilação #define é um "nome" que eu vou usar e sempre que esse nome for 
  escrito no meu código ele vai substituir por algo, como segue abaixo
*/

#define COMPLEMENTO ~
#define AND &
#define OR |
#define XOR ^
#define DESLOCAESQUERDA <<
#define DESLOCADIREITA >>  

/* Ex: 1 AND 0 = 0, o teu compilador vai trocar o AND por & e vai funcionar a operação*/

int main(){

   /*variáveis auxiliares*/
  int contador, pulaNibble = 0;

  /*variáveis para complemento*/
  int var1 = 32; /*0000 0000 0000 0000 0000 0000 0010 0000*/ 
  int complementoVar1, complementoDeDoisVar1;

  /*variáveis para o operador AND(&)*/
  int andVar1 = 32, andVar2 = 36, resultadoAndVa1AndVar2;
  int andVar3 = 45, andVar4 = 516, restoDivisaoAndVar3, restoDivisaoAndVar4;

  /*variáveis para o operador OR(|)*/
  int orVar1 = 316, orVar2 = 24, resultadoOrVar1AndVar1;
  int opacidade = 0XFF000000, vermelho = 0X00AA0000;
  int verde = 0X0000BB00, azul = 0X000000CC;
  int cor;

  /*variáveis para o operador XOR(^)*/
  int xorVar1 = 3215, xorVar2 = 1535;

  /*variáveis deslocamento a direita*/
  char varDireitaChar = 'A', varDireitaCharComoIntPositivo = 32, varDireitaCharComoInt = -32;
  unsigned char varDireitaUnsignedCharComoIntPositivo = 210, varDireitaUnsignedCharComoInt;


  printf("\n*********** Aplicações Operador ~ ***********\n");
  printf("\nFuncionamento do operador de complemento de 1 ~ : \n");
  printf("Número dado é %d e seu binário ", var1);
  
  /*somente imprime a representação do valor dado em binário, mais a frente
    quandor for falar de deslocamento de bits explicarei melhor essa parte do código
  */
   for (contador = 31; contador >= 0; contador--)
   {
      if ((var1 >> contador) & 1)
        printf("1");
      else
        printf("0");
      /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
      if(++pulaNibble == 4) {
        printf(" ");
        pulaNibble = 0;
      }
        
   }
   printf("\n");

   /*Aqui eu utilizo a diretiva COMPLEMENTO, lembrando que o compilador ao encontrar essa palavra substitui pelo operador ~*/
   complementoVar1 = COMPLEMENTO var1;  
   printf("O complemento de %d  é %d e seu binário é ", var1, complementoVar1);
  
  /*somente imprime a representação do valor dado em binário, mais a frente
    quandor for falar de deslocamento de bits explicarei melhor essa parte do código
  */
   for (contador = 31; contador >= 0; contador--)
   {
      if ((complementoVar1 >> contador) & 1)
        printf("1");
      else
        printf("0");
      /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
      if(++pulaNibble == 4) {
        printf(" ");
        pulaNibble = 0;
      }
        
   }
   printf("\n");

   printf("\n\n");


   /*Aqui eu vou aplicar o operador ~ para tirar o valor de complemento de dois de um número*/
   printf("\nFuncionamento do operador de complemento de 1 ~ aplicado para calcular o complemento de 2 de um valor: \n");
   printf("Número dado é %d e seu binário ", var1);
  
  /*somente imprime a representação do valor dado em binário, mais a frente
    quandor for falar de deslocamento de bits explicarei melhor essa parte do código
  */
   for (contador = 31; contador >= 0; contador--)
   {
      if ((var1 >> contador) & 1)
        printf("1");
      else
        printf("0");
      /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
      if(++pulaNibble == 4) {
        printf(" ");
        pulaNibble = 0;
      }
        
   }
   printf("\n");
   
   complementoDeDoisVar1 = COMPLEMENTO var1 + 1;/*lembrar da aula de PLD de como tirar o complemento de dois*/  
   printf("O complemento de dois de %d é %d e em binário ", var1, complementoDeDoisVar1);
  
  /*somente imprime a representação do valor dado em binário, mais a frente
    quandor for falar de deslocamento de bits explicarei melhor essa parte do código
  */
   for (contador = 31; contador >= 0; contador--)
   {
      if ((complementoDeDoisVar1 >> contador) & 1)
        printf("1");
      else
        printf("0");
      /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
      if(++pulaNibble == 4) {
        printf(" ");
        pulaNibble = 0;
      }
        
   }
   printf("\n\n");
   printf("********************************************\n\n");


   /*Fim da parte do operador ~*/


   /*Trabalhos com o operador AND &*/
   
   /*Funcionamento geral do operador & AND é exatamente o mesmo da porta lógica AND.
     Nesse primeiro caso vamos entrar com dois valores e aplicar o operador AND para verificar como 
     sairá o resultado.
   */
   printf("*********** Aplicações Operador & ***********\n\n");
   printf("Amostra do funcionamento do operador & AND \n");  
   printf("Número %d em binário ", andVar1);  
   /*somente imprime a representação do valor dado em binário, mais a frente
    quandor for falar de deslocamento de bits explicarei melhor essa parte do código
  */
   for (contador = 31; contador >= 0; contador--)
   {
      if ((andVar1 >> contador) & 1)
        printf("1");
      else
        printf("0");
      /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
      if(++pulaNibble == 4) {
        printf(" ");
        pulaNibble = 0;
      }
        
   }
   printf("\n");

   printf("Número %d em binário ", andVar2);  
   /*somente imprime a representação do valor dado em binário, mais a frente
    quandor for falar de deslocamento de bits explicarei melhor essa parte do código
  */
   for (contador = 31; contador >= 0; contador--)
   {
      if ((andVar2 >> contador) & 1)
        printf("1");
      else
        printf("0");
      /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
      if(++pulaNibble == 4) {
        printf(" ");
        pulaNibble = 0;
      }
        
   }
   printf("\n");
   
   /*aplicação do operador*/
   resultadoAndVa1AndVar2 = andVar1 AND andVar2;

   printf("Número %d AND %d é %d e em binário ", andVar1, andVar2, resultadoAndVa1AndVar2);  
   /*somente imprime a representação do valor dado em binário, mais a frente
    quandor for falar de deslocamento de bits explicarei melhor essa parte do código
  */
   for (contador = 31; contador >= 0; contador--)
   {
      if ((resultadoAndVa1AndVar2 >> contador) & 1)
        printf("1");
      else
        printf("0");
      /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
      if(++pulaNibble == 4) {
        printf(" ");
        pulaNibble = 0;
      }
        
   }
   printf("\n\n");

   /*Aplicação para tirar o resto da divisão por 2*/

   printf("Aplicação do uso da porta & AND para obter o resto da divisão por 2\n");

   printf("Número %d em binário ", andVar3);
   /*somente imprime a representação do valor dado em binário, mais a frente
    quandor for falar de deslocamento de bits explicarei melhor essa parte do código
  */
   for (contador = 31; contador >= 0; contador--)
   {
      if ((andVar3 >> contador) & 1)
        printf("1");
      else
        printf("0");
      /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
      if(++pulaNibble == 4) {
        printf(" ");
        pulaNibble = 0;
      }
        
   }
   printf("\n");

   /*resto divisão por 2 seria variavel & 1, isso funciona pelo simples fato de "testarmos"
      o último bit, se for 1, 1 and 1 é 1 os que estiverem a frente serão zerados e a resposta é um
      se for zero 0 and 1 é 0, os outros serão zerados e assim temos reposta zero
   */
   restoDivisaoAndVar3 = andVar3 & 1;
   printf("Temos que %d MOD 2 é %d e em binário ", andVar3, restoDivisaoAndVar3,  restoDivisaoAndVar3);
   /*somente imprime a representação do valor dado em binário, mais a frente
    quandor for falar de deslocamento de bits explicarei melhor essa parte do código
  */
   for (contador = 31; contador >= 0; contador--)
   {
      if ((restoDivisaoAndVar3 >> contador) & 1)
        printf("1");
      else
        printf("0");
      /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
      if(++pulaNibble == 4) {
        printf(" ");
        pulaNibble = 0;
      }
        
   }
   printf("\n\n");
   printf("********************************************\n\n");

   /*Fim da parte do operador & AND*/


   /*Inicio dos trabalho com o operador | OR*/
   /*O operador | OR trabalha da mesma forma que a porta OR de PLD, ele 'soma' bit.
     E uma aplicação interessante para o OR seria de juntar parte para forma um número,
    veremos um exemplo para isso.
   */
   printf("*********** Aplicações Operador | ***********\n\n");
   printf("Amostra do funcionamento do operador | OR \n");  
   printf("Número %d em binário ", orVar1);  
   /*somente imprime a representação do valor dado em binário, mais a frente
    quandor for falar de deslocamento de bits explicarei melhor essa parte do código
  */
   for (contador = 31; contador >= 0; contador--)
   {
      if ((orVar1 >> contador) & 1)
        printf("1");
      else
        printf("0");
      /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
      if(++pulaNibble == 4) {
        printf(" ");
        pulaNibble = 0;
      }
        
   }
   printf("\n");

   printf("Número %d em binário ", orVar2);  
   /*somente imprime a representação do valor dado em binário, mais a frente
    quandor for falar de deslocamento de bits explicarei melhor essa parte do código
  */
   for (contador = 31; contador >= 0; contador--)
   {
      if ((orVar2 >> contador) & 1)
        printf("1");
      else
        printf("0");
      /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
      if(++pulaNibble == 4) {
        printf(" ");
        pulaNibble = 0;
      }
        
   }
   printf("\n");

   /*Aplicação do operador | OR*/
   resultadoOrVar1AndVar1 = orVar1 OR orVar2;   
   printf("%d OR %d é %d e em binário ", orVar1, orVar2, resultadoOrVar1AndVar1);
   /*somente imprime a representação do valor dado em binário, mais a frente
    quandor for falar de deslocamento de bits explicarei melhor essa parte do código
  */
   for (contador = 31; contador >= 0; contador--)
   {
      if ((resultadoOrVar1AndVar1 >> contador) & 1)
        printf("1");
      else
        printf("0");
      /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
      if(++pulaNibble == 4) {
        printf(" ");
        pulaNibble = 0;
      }
        
   }
   printf("\n");
   printf("Perceba que 'alguma coisa' OR 'outra coisa' é 'alguma coisa'.\n\n");

   printf("Compomente de opacidade %.08X e em binário ", opacidade);
    /*somente imprime a representação do valor dado em binário, mais a frente
    quandor for falar de deslocamento de bits explicarei melhor essa parte do código
  */
   for (contador = 31; contador >= 0; contador--)
   {
      if ((opacidade >> contador) & 1)
        printf("1");
      else
        printf("0");
      /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
      if(++pulaNibble == 4) {
        printf(" ");
        pulaNibble = 0;
      }
        
   }
   printf("\n");

   printf("Compomente vermelho %.08X e em binário ", vermelho);
    /*somente imprime a representação do valor dado em binário, mais a frente
    quandor for falar de deslocamento de bits explicarei melhor essa parte do código
  */
   for (contador = 31; contador >= 0; contador--)
   {
      if ((vermelho >> contador) & 1)
        printf("1");
      else
        printf("0");
      /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
      if(++pulaNibble == 4) {
        printf(" ");
        pulaNibble = 0;
      }
        
   }
   printf("\n");

   printf("Compomente verde %.08X e em binário ", verde);
    /*somente imprime a representação do valor dado em binário, mais a frente
    quandor for falar de deslocamento de bits explicarei melhor essa parte do código
  */
   for (contador = 31; contador >= 0; contador--)
   {
      if ((verde >> contador) & 1)
        printf("1");
      else
        printf("0");
      /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
      if(++pulaNibble == 4) {
        printf(" ");
        pulaNibble = 0;
      }
        
   }
   printf("\n");

   printf("Compomente azul %.08X e em binário ", azul);
    /*somente imprime a representação do valor dado em binário, mais a frente
    quandor for falar de deslocamento de bits explicarei melhor essa parte do código
  */
   for (contador = 31; contador >= 0; contador--)
   {
      if ((azul >> contador) & 1)
        printf("1");
      else
        printf("0");
      /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
      if(++pulaNibble == 4) {
        printf(" ");
        pulaNibble = 0;
      }
        
   }
   printf("\n");
   /*vamor aplicar o | OR para poder montar nossa cor, vale lembrar que temos um caso
     onde os bits de cada componente estão em seus devidos lugares, assim o operador
     | é o recomendado para ser utilizado nessa 'montagem'
   */
    cor = opacidade OR vermelho OR verde OR azul;
    printf("A cor formada %.08X e em binário ", cor);
    /*somente imprime a representação do valor dado em binário, mais a frente
    quandor for falar de deslocamento de bits explicarei melhor essa parte do código
    */
     for (contador = 31; contador >= 0; contador--)
     {
        if ((cor >> contador) & 1)
          printf("1");
        else
          printf("0");
        /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
        if(++pulaNibble == 4) {
          printf(" ");
          pulaNibble = 0;
        }
          
     }
     printf("\n\n");
     printf("********************************************\n\n");

     /*Fim dos trabalho com o operador | OR*/

     /*Inicio dos trabalhor com o operador ^ XOR*/
     printf("*********** Aplicações Operador ^ ***********\n\n");
     printf("Amostra do funcionamento do operador ^ XOR ou também SWAP \n");

     printf("Tabela verdade da porta XOR \n");
     printf("0 ^ 0 = %d\n", 0 XOR 0); 
     printf("0 ^ 1 = %d\n", 0 XOR 1);
     printf("1 ^ 0 = %d\n", 1 XOR 0);
     printf("1 ^ 1 = %d\n", 0 XOR 0); 
     printf("Note que quando o primeiro termo é diferente do segundo ele troca o seu valor. Linha 2 e 3 da tabela;\nE que quando o segundo termo for zero ele não muda o valor do primeiro termo.\n");  
     printf("\n\n");
     
     /*Aqui vamos aplicar o operador ^ XOR para trocar o o valor de uma variável pela outra
     */
     printf("Exemplo da permuta de valores entre duas variáveis sem usar variável auxiliar.\n");
     printf("Número a %d em binário ", xorVar1);     
      /*somente imprime a representação do valor dado em binário, mais a frente
      quandor for falar de deslocamento de bits explicarei melhor essa parte do código
    */
     for (contador = 31; contador >= 0; contador--)
     {
        if ((xorVar1 >> contador) & 1)
          printf("1");
        else
          printf("0");
        /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
        if(++pulaNibble == 4) {
          printf(" ");
          pulaNibble = 0;
        }
          
     }
     printf("\n");

     printf("O número b %d em binário ", xorVar2);     
      /*somente imprime a representação do valor dado em binário, mais a frente
      quandor for falar de deslocamento de bits explicarei melhor essa parte do código
    */
     for (contador = 31; contador >= 0; contador--)
     {
        if ((xorVar2 >> contador) & 1)
          printf("1");
        else
          printf("0");
        /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
        if(++pulaNibble == 4) {
          printf(" ");
          pulaNibble = 0;
        }
          
     }
     printf("\n");

     printf("Trocando os valores\n");
     xorVar1 = xorVar1 XOR xorVar2;
     xorVar2 = xorVar1 XOR xorVar2;
     xorVar1 = xorVar1 XOR xorVar2;
     printf("Agora numero a é %d e b é %d", xorVar1, xorVar2);

     printf("\n\n");
     printf("********************************************\n\n");
     
    /*Fim do trabalhos com o operador XOR*/


    /*Inicio dos trabalhos com deslocamento de bits, agora o bixo pega!!!*/

    printf("*********** Aplicações Operador >> ***********\n\n");
    printf("Amostra do funcionamento do operador >> DESLOCADIREITA \n");
    printf("O caratere %c em binário ", varDireitaChar);
     /*somente imprime a representação do valor dado em binário, mais a frente
      quandor for falar de deslocamento de bits explicarei melhor essa parte do código
    */
     for (contador = 7; contador >= 0; contador--)
     {
        if ((varDireitaChar >> contador) & 1)
          printf("1");
        else
          printf("0");
        /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
        if(++pulaNibble == 4) {
          printf(" ");
          pulaNibble = 0;
        }
          
     }
     printf("\n");
     /*Mostra o funcionamento do operador >>*/
     varDireitaChar = varDireitaChar DESLOCADIREITA 3;
     printf("Quado deslocado 3 bits a direita fica %c e em binário ", varDireitaChar);
     for (contador = 7; contador >= 0; contador--)
     {
        if ((varDireitaChar >> contador) & 1)
          printf("1");
        else
          printf("0");
        /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
        if(++pulaNibble == 4) {
          printf(" ");
          pulaNibble = 0;
        }
          
     }
     printf("\n");
     printf("Perceba que o bit 1 menos significativo saiu do byte\n");
     printf("\n\n");
     /*verifica o funcionamento para o caso em que a variável é signed e ela 'valoriza' o sinal*/
     /*primeiro caso com um número negativo*/
     printf("No caso de ser um valor inteiro com sinal negativo no valor de %d em binário ", varDireitaCharComoInt);
     for (contador = 7; contador >= 0; contador--)
     {
        if ((varDireitaCharComoInt >> contador) & 1)
          printf("1");
        else
          printf("0");
        /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
        if(++pulaNibble == 4) {
          printf(" ");
          pulaNibble = 0;
        }
          
     }
     printf("\n");
     varDireitaCharComoInt = varDireitaCharComoInt DESLOCADIREITA 1;
     printf("Quando deslocamos 1 bit a direita temos %d em binário ", varDireitaCharComoInt);
     for (contador = 7; contador >= 0; contador--)
     {
        if ((varDireitaCharComoInt >> contador) & 1)
          printf("1");
        else
          printf("0");
        /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
        if(++pulaNibble == 4) {
          printf(" ");
          pulaNibble = 0;
        }
          
     }
     printf("\n");
      /*segundo caso com um número positivo*/
     printf("No caso de ser um valor inteiro com sinal positivo no valor de %d em binário ", varDireitaCharComoIntPositivo);
     for (contador = 7; contador >= 0; contador--)
     {
        if ((varDireitaCharComoIntPositivo >> contador) & 1)
          printf("1");
        else
          printf("0");
        /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
        if(++pulaNibble == 4) {
          printf(" ");
          pulaNibble = 0;
        }
          
     }
     printf("\n");
     varDireitaCharComoIntPositivo = varDireitaCharComoIntPositivo DESLOCADIREITA 1;
     printf("Quando deslocamos 1 bit a direita temos %d em binário ", varDireitaCharComoIntPositivo);
     for (contador = 7; contador >= 0; contador--)
     {
        if ((varDireitaCharComoIntPositivo >> contador) & 1)
          printf("1");
        else
          printf("0");
        /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
        if(++pulaNibble == 4) {
          printf(" ");
          pulaNibble = 0;
        }
          
     }
     printf("No caso de um número negativo ao invés dele colocar zero ele adicona um.\nE repare também que isso funcionou como a divisão por dois\nse fosse deslocando 2 teriamos a divisão por 4\ne assim seguindo a ordem das potências de 2.");
     printf("\n\n");

     printf("Agora vamos ver como funciona para valores unsigned onde o sinal é 'despresado'.\n");
     /*primeiro caso com um número negativo*/
     printf("Informe um número negativo de -255-255: \n");
     scanf("%d", &varDireitaUnsignedCharComoInt);
     printf("No caso de ser um valor inteiro sem sinal 'negativo' no valor de %d em binário ", varDireitaUnsignedCharComoInt);
     for (contador = 7; contador >= 0; contador--)
     {
        if ((varDireitaUnsignedCharComoInt >> contador) & 1)
          printf("1");
        else
          printf("0");
        /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
        if(++pulaNibble == 4) {
          printf(" ");
          pulaNibble = 0;
        }
          
     }
     printf("\n");
     varDireitaUnsignedCharComoInt = varDireitaUnsignedCharComoInt DESLOCADIREITA 1;
     printf("Quando deslocamos 1 bit a direita temos %d em binário ", varDireitaUnsignedCharComoInt);
     for (contador = 7; contador >= 0; contador--)
     {
        if ((varDireitaUnsignedCharComoInt >> contador) & 1)
          printf("1");
        else
          printf("0");
        /*a cada quatro interações imprime um espaço pra ter os nibles separados e tornar mais legível a palavra binária*/
        if(++pulaNibble == 4) {
          printf(" ");
          pulaNibble = 0;
        }
          
     }
     printf("\n");
     printf("Veja que mesmo você passando um número negativo\nisso é desconciderado uma vez que\nfoi declarado como unsigned char.\n");
     printf("\n\n");
     printf("********************************************\n\n");


     printf("*********** Aplicações Operador << ***********\n\n");
     printf("Amostra do funcionamento do operador << DESLOCAESQUERDA \n");
     printf("Funciona exatemante como o deslocamento a direita mas o inverso\ninserindo bits no lado menos significativo dessa vez\npor falta de tempo não tenho como implementar exemplos.\nEspero que isso ajude um pouco que não está entendendo muito;");

     printf("\n\n");
     printf("********************************************\n\n");


  return 0;

}
