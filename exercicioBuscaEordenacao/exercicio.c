#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int resposta=0,
		ordenarInsert=0,
		ordBubbles=0,
		vect[15];
	
	for (int i = 0; i < 15; i++)
	{
		printf("Digite o numero na posicao %d: ", (i + 1));
		scanf_s("%d", &vect[i]);
	}

	do
	{
		printf("========== MENU ============");
		printf("(1) para Ordenar Bubble");
		printf("(2) para Ordenar Insert");
		printf("(3) para Busca Sequencial");
		printf("(4) para Busca Binarira");
		printf("=============================");


	} while (resposta<5);

		
	
	getchar();
	return 0;
}
