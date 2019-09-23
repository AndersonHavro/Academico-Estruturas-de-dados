#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 5

int vetor[MAX];
int opcao = 0;
int iPosicao = 0;


void Menu();
void Opcoes();
void InserirFila();
void RemoverFila();
void Exibir();

int main() {
	setlocale(LC_ALL, "portuguese");

	Menu();
}
void Menu() {
	printf("==================== MENU =====================\n");
	printf("");
	do
	{
		system("cls");
		printf("===============================================\n");
		printf("                 = OPÇÕES =                    \n");
		printf("===============================================\n");
		printf("");
		printf("( 1 ) ========== INSERIR\"\n");
		printf("( 2 ) ========== EXCLUIR\"\n");
		printf("( 3 ) ========== EXIBIR\"\n");
		printf("( 4 ) ========== SAIR\n");
		printf("");
		printf("===============================================\n");
		Opcoes();
		system("pause");
	} while (opcao > 0 && opcao < 4);
}
void Opcoes() {

	scanf_s("%d", &opcao);
	switch (opcao)
	{
	case 1:
		InserirFila();
		break;
	case 2:
		printf("Opcao2\n");
		break;
	case 3:
		Exibir();
		break;
	case 4:
		printf("Programa encerrado!!!\n");
		return 0;
		break;
	default:
		printf("Digito inválido!!!\n");
		break;
	}
}
void InserirFila() {
	if (iPosicao == MAX)
	{
		printf("Vetor já preenchido!!!");
	}
	else
	{
		printf("Digite o valor a ser inserido na fila:");
		scanf_s("%i", &vetor[iPosicao]);
		iPosicao++;
	}
}
void RemoverFila() {
	if (iPosicao == 0)
	{
		printf("Vetor vazio!!!");
	}
	else
	{
		for (int i = 0; i < iPosicao; i++)
		{
			vetor[i] = vetor[i + 1];
		}
		vetor[iPosicao] = 0;
		iPosicao--;

	}
}
void Exibir() {

}