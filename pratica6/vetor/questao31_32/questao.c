/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 6-vetores
 * Questão 31,32
 * 
 * Ordenar um vetor em ordem crescente e decrescente;
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAMVETOR 19

/*Função para preencher um dado vetor com valores inteiros aleatórios de 0 a 100*/
void geraVetorAleatorio(int Vet[], int tamanho) {
  int contador;
  for (contador = 0; contador < tamanho; ++contador)
  {
    Vet[contador] = rand() % 100;
  }
}


/*Função para inserir valor em um vetor de tamanho a ser informado*/
void inserirValoresVetor(int Vet[], int tamanho) {
  int contador;
  for (contador = 0; contador < tamanho; ++contador)  {
    printf("Informe o valor de vetor[%d]: ", contador);
    scanf("%d", &Vet[contador]);
  }
  system("clear");
}



/*Função para imprimir vetor de inteiros*/
void imprimeVetor(int Vet[], int tamanho) {
  int contador;
  printf("[");
  for (contador = 0; contador < tamanho; ++contador)
  {
    if(tamanho - contador != 1)
      printf("%d, ", Vet[contador]);
    else
      printf("%d", Vet[contador]);
  }
  printf("]\n");
}


/*Função de ordenação Selection Sort.
* Complexidade
* Melhor caso: O(nˆ2);
* Caso médio: O(nˆ2);
* Pior caso O(nˆ2);
*/
void selectionSort(int Vet[], int tamanho) {
  int indiceI, indiceJ, auxiliar, minino;

  for (indiceI = 0; indiceI < (tamanho-1); indiceI++)
  {
    minino = indiceI;
    for (indiceJ = (indiceI+1); indiceJ < tamanho; indiceJ++)
    {
      if(Vet[indiceJ] < Vet[minino])
        minino = indiceJ;
    }
    if(minino != indiceI) {
      auxiliar =  Vet[indiceI];
      Vet[indiceI] = Vet[minino];
      Vet[minino] = auxiliar;
    }
  }

}

/*Função de ordenação decrescente Selection Sort.
* Complexidade
* Melhor caso: O(nˆ2);
* Caso médio: O(nˆ2);
* Pior caso O(nˆ2);
*/
void decSelectionSort(int Vet[], int tamanho) {
  int indiceI, indiceJ, auxiliar, maximo;

  for (indiceI = 0; indiceI < (tamanho-1); indiceI++)
  {
    maximo = indiceI;
    for (indiceJ = (indiceI+1); indiceJ < tamanho; indiceJ++)
    {
      if(Vet[indiceJ] > Vet[maximo])
        maximo = indiceJ;
    }
    if(maximo != indiceI) {
      auxiliar =  Vet[indiceI];
      Vet[indiceI] = Vet[maximo];
      Vet[maximo] = auxiliar;
    }
  }

}


/*Função de ordenação Insertion sort.
* Complexidade
* Melhor caso: O(n);
* Caso médio: O(nˆ2);
* Pior caso O(nˆ2);
*/
void insertionSort(int Vet[], int tamanho) {
  
  int indiceI, indiceJ, auxiliar;
  
  for (indiceI = 1; indiceI < tamanho; ++indiceI)
  {
    indiceJ = indiceI;
    while((indiceJ != 0) && (Vet[indiceJ] < Vet[indiceJ -1]))
    {
      auxiliar       = Vet[indiceJ];
      Vet[indiceJ]   = Vet[indiceJ-1];
      Vet[indiceJ-1] = auxiliar; 
      indiceJ--;
    }
  }
}


/*Função de ordenação BubleSort
* Complexidade
* Melhor caso: O(n);
* Caso médio: O(nˆ2);
* Pior caso O(nˆ2);
*/
void bubleSort(int Vet[], int tamanho) {
  int auxiliar, indiceI, indiceJ;
  
  for (indiceJ = tamanho-1; indiceJ >= 1 ; indiceJ--)
  {
    for (indiceI = 0; indiceI < indiceJ; indiceI++)
    {
      if(Vet[indiceI] > Vet[indiceI+1]) {
        auxiliar = Vet[indiceI];
        Vet[indiceI] = Vet[indiceI+1];
        Vet[indiceI+1] = auxiliar;
      }
    }
  }
}


/*Função de ordenação QuickSort
* Complexidade
* Melhor caso: O(nlog(n));
* Caso médio: O(nlog(n));
* Pior caso O(nˆ2);
*/
void quickSort(int Vet[], int inicio, int fim) {
  int pivo, indiceI, indiceJ, auxiliar;
  pivo = Vet[(inicio + fim)/2];
  indiceI = inicio;
  indiceJ = fim;

  while(indiceI < indiceJ) {
    while(Vet[indiceI] < pivo) {
      indiceI++;
    }
    while(Vet[indiceJ] > pivo) {
      indiceJ--;
    }
    if(indiceI <= indiceJ) {
      auxiliar = Vet[indiceI];
      Vet[indiceI] = Vet[indiceJ];
      Vet[indiceJ] = auxiliar;
      indiceI++;
      indiceJ--;
    }
  }
  if(indiceJ > inicio)
    quickSort(Vet, inicio, indiceJ);
  if(indiceI < fim)
    quickSort(Vet, indiceI, fim);
}


/*Função para preencher um dado vetor com valores inteiros aleatórios de 0 a 100
* com indice iniciando em 1, especificamente para trabalhar com o heapsort.
*/
void geraVetorAleatorioHeap(int Vet[], int tamanho) {
  int contador;
  for (contador = 1; contador <= tamanho; ++contador)
  {
    Vet[contador] = rand() % 100;
  }
}

void imprimirHeap(int Vet[], int tamanho) {
  int contador;
  printf("[");
  for (contador = 1; contador <= tamanho; ++contador)
  {
    if(tamanho - contador != 0)
      printf("%d, ", Vet[contador]);
    else
      printf("%d", Vet[contador]);
  }
  printf("]\n");
}

/*Função Heap-máximo
* Complexidade O(log n)
*/
void heapMaximo(int vet[], int indice, int tamanho) {
  int filhoEsquedo = 2*indice;
  int filhoDireito = 2*indice+1;
  int maior, aux;

  if((filhoEsquedo <= tamanho) && vet[filhoEsquedo] > vet[indice])
    maior = filhoEsquedo;
  else
    maior = indice;

  if((filhoDireito <= tamanho) && (vet[filhoDireito] > vet[maior]))
    maior = filhoDireito;

  if(maior != indice) {
    aux = vet[indice];
    vet[indice] = vet[maior];
    vet[maior] = aux;
    heapMaximo(vet,maior,tamanho);
  }
}


/*Função para montar o Heap Máximo*/
int montaHeapMaximo(int vet[], int tamanho) {
  int contador, tamanhoHeap;
  tamanhoHeap = tamanho;
  for (contador = floor(tamanho/2); contador >= 1 ; --contador)
    heapMaximo(vet,contador,tamanhoHeap);
  return tamanhoHeap;
}


/*Função de ordenação Heapsort
Complexidade: O(n log n)
*/
void heapsort(int vet[], int tamanho) {
  int contador,tamanhoHeap, aux;
  tamanhoHeap = montaHeapMaximo(vet,tamanho);
  for(contador=tamanho;contador>=2;--contador)
  {
    aux = vet[1];
    vet[1] = vet[contador];
    vet[contador] = aux;
    --tamanhoHeap;
    heapMaximo(vet,1,tamanhoHeap);
  }
}



int main() {
  int vetor[TAMVETOR], heap[TAMVETOR+1],  tamanho, opt;;

  /*printf("Digite o tamanho do vetor desejado.(Máximo 20): "); 
  scanf("%d", &tamanho);
  geraVetorAleatorio(vetor, tamanho);
  imprimeVetor(vetor, tamanho);*/
  do {
    printf("-------------------- Questões 34, 35 --------------------\n");
    printf("Digite uma opcao válida:\n");
    printf("\t(1): Gerar um novo vetor aleatório\n");
    printf("\t(11): Gerar um novo vetor\n");
    printf("\t(2): InsertionSort\n");
    printf("\t(3): SelectionSort\n");
    printf("\t(4): BubleSort\n");
    printf("\t(5): QuickSort\n");
    printf("\t(6): Decrescente\n");
    printf("\t(7): Gerar um vetor para heapsort\n");
    printf("\t(8): Heapsort\n");
    printf("\t(0): Sair\n");
    printf("> ");
    scanf("%d",&opt);
    switch(opt) {
      case 0:
        break;
      
      case 1:
        system("clear");
        printf("Digite o tamanho do vetor desejado.(Máximo %d): ", TAMVETOR+1); 
        scanf("%d", &tamanho);
        geraVetorAleatorio(vetor, tamanho);
        imprimeVetor(vetor, tamanho);
        break;

      case 11:
        system("clear");
        printf("Digite o tamanho do vetor desejado.(Máximo %d): ", TAMVETOR+1); 
        scanf("%d", &tamanho);
        inserirValoresVetor(vetor,tamanho);
        imprimeVetor(vetor, tamanho);
        break;  
        
      case 2:
        system("clear");
        printf("Vetor original ");
        imprimeVetor(vetor, tamanho);
        printf("Vetor ordenado ");
        insertionSort(vetor, tamanho);
        imprimeVetor(vetor, tamanho);
        break;

      case 3:
        system("clear");
        printf("Vetor original ");
        imprimeVetor(vetor, tamanho);
        printf("Vetor ordenado ");
        selectionSort(vetor, tamanho);
        imprimeVetor(vetor, tamanho);
        break;  

      case 4:
        system("clear");
        printf("Vetor original ");
        imprimeVetor(vetor, tamanho);
        printf("Vetor ordenado ");
        bubleSort(vetor, tamanho);
        imprimeVetor(vetor, tamanho);
        break;  

      case 5:
        system("clear");
        printf("Vetor original ");
        imprimeVetor(vetor, tamanho);
        printf("Vetor ordenado ");
        quickSort(vetor, 0,tamanho);
        imprimeVetor(vetor, tamanho);
        break;  

      case 6:
        system("clear");
        printf("Vetor original ");
        imprimeVetor(vetor, tamanho);
        printf("Vetor ordenado ");
        decSelectionSort(vetor, tamanho);
        imprimeVetor(vetor, tamanho);
        break;  

      case 7:
        system("clear");
        printf("Digite o tamanho do vetor desejado.(Máximo 20): "); 
        scanf("%d", &tamanho);
        geraVetorAleatorioHeap(heap, tamanho);
        imprimirHeap(heap, tamanho);
        break;

      case 8:
        system("clear");
        printf("Vetor original ");
        imprimirHeap(heap, tamanho);
        printf("Vetor ordenado ");
        heapsort(heap, tamanho);
        imprimirHeap(heap, tamanho);
        break;

      default:
        printf("\n\nPor favor escolha uma opção válida.\n\n");  

    }

  } while(opt != 0);
  system("clear");
  return 0;
}