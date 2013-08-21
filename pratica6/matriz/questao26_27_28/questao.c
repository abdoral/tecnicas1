#include <stdio.h>
#include <stdlib.h>


#define MAX 10

void imprimirMatriz(int Vet[][MAX], int dimensao) {
  int contadorLinhas, contadorColunas;
  for (contadorLinhas = 0; contadorLinhas < dimensao; ++contadorLinhas)
  {
    printf("|");
    for (contadorColunas = 0; contadorColunas < dimensao; ++contadorColunas)
    {
      if(Vet[contadorLinhas][contadorColunas] > 10)
        printf("%d ", Vet[contadorLinhas][contadorColunas]);
      else
        printf(" %d ", Vet[contadorLinhas][contadorColunas]);
    }
    printf("|\n");
  }
}

void main() {
	int matriz[MAX][MAX], transposta[MAX][MAX];
	unsigned int dimensao, linha, coluna, simetrica = 1, antisimetrica = 1;

    do{
    	printf("Informa a dimensão da sua matriz(máximo = 10): ");
	    scanf("%d", &dimensao);
    } while(dimensao > 10);


    /*em casos de dimensão maior do que 2 gerar valores aleatórios*/
    if(dimensao <= 2) {
    	for(linha = 0; linha < dimensao; linha++) {
    		for(coluna = 0; coluna < dimensao; coluna++) {
    			printf("Informe o elemento matriz[%d][%d]: ", linha+1, coluna+1);
    			scanf("%u", &matriz[linha][coluna]);
    	        printf("\n");		
    		}
    	}

    } else {
    	for(linha = 0; linha < dimensao; ++linha)
	    {
	        for(coluna = 0; coluna < dimensao; ++coluna)
	        {
	        	printf("Elemento matriz[%d][%d] = %u \n", linha+1, coluna+1, matriz[linha][coluna] = rand() % 10);

	        }
	    }

    }

    /*montar matriz transposta*/
    for(linha = 0; linha < dimensao; ++linha)
	{
	    for(coluna = 0; coluna < dimensao; ++coluna)
	    {
	    	transposta[linha][coluna] = matriz[coluna][linha];
	    	if(transposta[linha][coluna] != matriz[coluna][linha])
	    		simetrica = 0;
	    	if(transposta[linha][coluna] != -matriz[coluna][linha])
	    		antisimetrica = 0;
	    }
	}    
	
	printf("Matriz original\n");
	imprimirMatriz(matriz, dimensao);
	printf("\n");
	printf("Matriz transposta\n");
	imprimirMatriz(transposta, dimensao);
	printf("\n");
	if(simetrica)
		printf("As matrizes são simétricas\n");
	else
		printf("As matrizes não são simétricas\n");

	if(antisimetrica)
		printf("As matrizes são anti-simétrica\n");
	else
		printf("As matrizes não são anti-simétrica\n");



	
}