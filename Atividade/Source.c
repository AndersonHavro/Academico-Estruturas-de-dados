#include<stdio.h>
#include<stdlib.h>

void OrdenarBubble();
void OrdenarInserction();
void BuscaSequencial();
void BuscaBinaria();
void SelectionSort();
void Imprimir();

int vect[3];
int tam = sizeof(vect) / sizeof(int);

int main() {
	int resposta = 0,
		ordenarInsert = 0,
		ordBubbles = 0;

	for (int i = 0; i < 3; i++)
	{
		printf("Digite o numero na posicao %i: ", (i + 1));
		scanf_s("%i", &vect[i]);
	}
	do
	{
		printf("========== MENU ============\n");
		printf("(1) para Ordenar Bubble\n");
		printf("(2) para Ordenar Insert\n");
		printf("(3) para Busca Sequencial\n");
		printf("(4) para Busca Binarira\n");
		printf("(5) para Selection Sort\n");
		printf("=============================\n");
		scanf_s("%i", &resposta);
		if (resposta == 1)
		{
			OrdenarBubble();
			Imprimir();
		}
		if (resposta == 5)
		{
			SelectionSort();
			Imprimir();
		}
	} while (resposta > 0 && resposta < 6);

	getchar();
	return 0;
}

void OrdenarBubble() {
	
	int aux = 0;
	for (int i = tam - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (vect[j] > vect[j + 1]) {
				aux = vect[j];
				vect[j] = vect[j + 1];
				vect[j + 1] = aux;
			}
		}
	}
}


void SelectionSort() {
	int t;
	for (int x = 0; x < tam-1; x++)
	{
		for (int y = x+1; y < tam; y++)
		{
			if (vect[y]<vect[x])
			{
				t = vect[x];
				vect[x] = vect[y];
				vect[y] = t;

			}
		}
	}

}

void Imprimir() {
	int tam = sizeof(vect) / sizeof(int);
	for (int i = 0; i < tam; i++)
	{
		printf("%i ", vect[i]);
	}
	printf("\n");
}


