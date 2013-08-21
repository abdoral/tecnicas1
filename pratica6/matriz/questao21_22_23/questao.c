/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 6-matrizes
 * Questões 21,22 e 23
 * 
 * "Girar" uma matriz dada 90°(21), 180°(22) e 270°(23)
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define LINHAS 3
#define COLUNAS 3

/*Função para preencher uma dada matriz com valores inteiros aleatórios de 0 a 100*/
void geraMatrizAleatoria(int Vet[LINHAS][COLUNAS]) {
  int contadorLinhas, contadorColunas;
  for (contadorLinhas = 0; contadorLinhas < LINHAS; ++contadorLinhas)
  {
    for (contadorColunas = 0; contadorColunas < COLUNAS; ++contadorColunas)
    {
      Vet[contadorLinhas][contadorColunas] = rand() % 10;
    }
  }
}

void geraMatrizSequencial(int Vet[LINHAS][COLUNAS]) {
  int contadorLinhas, contadorColunas, contador=1;
  for (contadorLinhas = 0; contadorLinhas < LINHAS; ++contadorLinhas)
  {
    for (contadorColunas = 0; contadorColunas < COLUNAS; ++contadorColunas)
    {
      Vet[contadorLinhas][contadorColunas] = contador++;
    }
  }
}

/*Função que gera a Matriz identidade*/
void geraMatrizIdentidade(int M[LINHAS][COLUNAS]) {
  int contadorLinhas, contadorColunas;
  for (contadorLinhas = 0; contadorLinhas < LINHAS; ++contadorLinhas)
  {
    for (contadorColunas = 0; contadorColunas < COLUNAS; ++contadorColunas)
    {
      if(contadorLinhas == contadorColunas)
        M[contadorLinhas][contadorColunas] = 1;
      else
        M[contadorLinhas][contadorColunas] = 0;
    }
  }
}

/*Função que gera a Matriz identidade refletida*/
void geraMatrizIdentidadeRefletida(int M[LINHAS][COLUNAS]) {
  int contadorLinhas, contadorColunas;
  for (contadorLinhas = 0; contadorLinhas < LINHAS; ++contadorLinhas)
  {
    for (contadorColunas = 0; contadorColunas < COLUNAS; ++contadorColunas)
    {
      if(contadorLinhas + contadorColunas == LINHAS-1)
        M[contadorLinhas][contadorColunas] = 1;
      else
        M[contadorLinhas][contadorColunas] = 0;
    }
  }
}


/*Função para imprimir matriz de inteiros*/
void imprimirMatriz(int Vet[LINHAS][COLUNAS]) {
  int contadorLinhas, contadorColunas;
  for (contadorLinhas = 0; contadorLinhas < LINHAS; ++contadorLinhas)
  {
    printf("|");
    for (contadorColunas = 0; contadorColunas < COLUNAS; ++contadorColunas)
    {
      if(Vet[contadorLinhas][contadorColunas] > 10)
        printf("%d ", Vet[contadorLinhas][contadorColunas]);
      else
        printf(" %d ", Vet[contadorLinhas][contadorColunas]);
    }
    printf("|\n");
  }
}

/*Função para multiplicar duas matrizes de inteiros*/
void multiplicaMatrizes(int A[LINHAS][COLUNAS], int B[LINHAS][COLUNAS], int P[LINHAS][COLUNAS]) {
  int contador, i, j;
  for (i = 0; i < LINHAS; ++i)
  {
    for (j = 0; j < COLUNAS; ++j)
    {
      P[i][j] = 0;
      for (contador = 0; contador < LINHAS; contador++)
      {
        P[i][j] += A[i][contador]*B[contador][j];
      }
    }
  }
}

/*Função gira 90°
@params
  int Vet matriz orginal a ser "girada";
  int Vet90 matriz Vet girada
*/
void gira90(int Vet[LINHAS][COLUNAS], int Vet90[LINHAS][COLUNAS]) {
  int contadorLinhas, contadorColunas;
  for (contadorLinhas = 0; contadorLinhas < LINHAS; ++contadorLinhas)
  {
    for (contadorColunas = 0; contadorColunas < COLUNAS; ++contadorColunas)
    {
      Vet90[contadorColunas][COLUNAS - contadorLinhas - 1] = Vet[contadorLinhas][contadorColunas];
    }
  }
}

/*Função gira 180°*/
void gira180(int Vet[LINHAS][COLUNAS], int Vet180[LINHAS][COLUNAS]) {
  gira90(Vet,Vet180);
  gira90(Vet180,Vet);
}

/*Função gira 270°*/
void gira270(int Vet[LINHAS][COLUNAS], int Vet270[LINHAS][COLUNAS]) {
  gira180(Vet,Vet270);
  gira90(Vet,Vet270);
}


int main() {
  int matriz[LINHAS][COLUNAS], matriz2[LINHAS][COLUNAS], matriz90[LINHAS][COLUNAS], opt;
  int identidadeRefletida[LINHAS][COLUNAS];

  printf("Matriz gerada:\n");
  geraMatrizSequencial(matriz);
  imprimirMatriz(matriz);

  do {
    printf("-------------------- Questões 34, 35 --------------------\n");
    printf("Digite uma opcao válida:\n");
    printf("\t(1): Gerar uma nova matriz\n");
    printf("\t(12): Gerar uma nova sequencial\n");
    printf("\t(2): Girar 90°\n");
    printf("\t(3): Girar 180°\n");
    printf("\t(4): Girar 270°\n");
    printf("\t(5): Multiplicar duas matrizes\n");
    printf("\t(0): Sair\n");
    printf("> ");
    scanf("%d",&opt);
    switch(opt) {
      case 0:
        break;
      
      case 1:
        system("clear");
        printf("Matriz gerada:\n"); 
        geraMatrizAleatoria(matriz);
        imprimirMatriz(matriz);
        break;
      
      case 12:
        system("clear");
        printf("Matriz gerada:\n"); 
        geraMatrizSequencial(matriz);
        imprimirMatriz(matriz);
        break;

      case 2:
        system("clear");
        printf("Matriz original\n");
        imprimirMatriz(matriz);
        printf("Matriz girada 90\n");
        gira90(matriz,matriz90);
        imprimirMatriz(matriz90);
        break;

      case 3:
        system("clear");
        printf("Matriz original\n");
        imprimirMatriz(matriz);
        printf("Matriz girada 180\n");
        gira180(matriz,matriz90);
        imprimirMatriz(matriz);
        break;

      case 4:
        system("clear");
        printf("Matriz original\n");
        imprimirMatriz(matriz);
        printf("Matriz girada 270\n");
        gira270(matriz,matriz90);
        imprimirMatriz(matriz90);
        break;

      case 5:
        system("clear");
        printf("Matriz original 1\n");
        imprimirMatriz(matriz);
        printf("Matriz original 2\n");
        geraMatrizAleatoria(matriz2);
        imprimirMatriz(matriz2);
        printf("Matriz produto\n");
        multiplicaMatrizes(matriz, matriz2, matriz90);
        imprimirMatriz(matriz90);
        break;      

      default:
        printf("\n\nPor favor escolha uma opção válida.\n\n");  

    }

  } while(opt != 0);
  system("clear");
  return 0;
}