#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TAMANHO_FRASE 200

int main() {

	char frase[TAMANHO_FRASE], chAtual, chNovo;
	int contador=0, parada=1, substituicoes = 0;


	printf("Digite uma frase qualquer: ");
	gets(frase);

    printf("%s\n", frase);

    printf("Escolha uma letra da frase para ser substituida: ");
	scanf("%c", &chAtual);
    getchar();
	
	/*do {
		printf("Escolha uma letra da frase para ser substituida: ");
		scanf("%c", &chAtual);
        getchar();
        while(frase[contador]) {
        	if(frase[contador] == chAtual) {
        		parada = 0;
        		break;
        	}
        	contador++;
        }
	} while(parada);*/
	
    printf("Informe uma para substituir na frase: ");
    scanf("%c", &chNovo);

    contador = 0;
    while(frase[contador]) {
    	if(frase[contador] == chAtual) {
    		frase[contador] = chNovo;
    		substituicoes++;
    	}
    	contador++;
    }

	
	printf("Foi substituido a letra '%c' pela letra '%c' num total de %d vezes, resultando a frase\n%s\n", chAtual, chNovo, substituicoes, frase);

	return 0;

}