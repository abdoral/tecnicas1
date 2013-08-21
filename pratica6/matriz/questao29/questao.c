#include <stdio.h>
#include <stdlib.h>


void imprimirMatriz(int Vet[][1]) {
  int contadorLinhas, contadorColunas;
  for (contadorLinhas = 0; contadorLinhas < 2; ++contadorLinhas)
  {
    printf("|");
    for (contadorColunas = 0; contadorColunas < 2; ++contadorColunas)
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
	int matriz[1][1], inversa[1][1], adjunta[1][1], determinante;
	unsigned int dimensao, linha, coluna;

  	for(linha = 0; linha < dimensao; linha++) {
   		for(coluna = 0; coluna < 2; coluna++) {
   			printf("Informe o elemento matriz[%d][%d]: ", linha+1, coluna+1);
   			scanf("%u", &matriz[linha][coluna]);
   	        printf("\n");		
   		}
   	}

   	/*calcula o determinante da matriz*/
    determinante = matriz[0][0]*matriz[0][1] - matriz[1][0]*matriz[1][1];

    /*montar matriz adjunta*/
    adjunta[0][0] = matriz[1][1];
    adjunta[0][1] = -matriz[1][0];
    adjunta[0][1] = -matriz[1][0];

	
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