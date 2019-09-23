#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 5

int vetor[MAX];
int opcao = 0;
int iPosicao = 0;

#pragma region assinaturasMetodos
void Menu();
void Opcoes();
void Inserir();
void RemoverFila();
void RemoverPilha();
void Exibir();
#pragma endregion

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
		printf("( 2 ) ========== EXCLUIR FILA\"\n");
		printf("( 3 ) ========== EXCLUIR PILHA\"\n");
		printf("( 4 ) ========== EXIBIR\"\n");
		printf("( 5 ) ========== SAIR\n");
		printf("");
		printf("===============================================\n");
		Opcoes();
		system("pause");
	} while (opcao > 0 && opcao < 5);
}
void Opcoes() {

	scanf_s("%d", &opcao);
	switch (opcao)
	{
	case 1:
		Inserir();
		break;
	case 2:
		RemoverFila();
		break;
	case 3:
		RemoverPilha();
		break;
	case 4:
		Exibir();
		break;
	case 5:
		printf("Programa encerrado!!!\n");
		return 0;
		break;
	default:
		printf("Digito inválido!!!\n");
		break;
	}
}
void Inserir() {
	if (iPosicao == MAX)
	{
		printf("Vetor já preenchido!!!");
	}
	else 
	{
		printf("Digite o valor a ser inserido na fila:");
		scanf_s("%i", &vetor[iPosicao]);
		printf("valor inserido com sucesso na posicao %i\n",iPosicao);

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
void RemoverPilha() {
	if (iPosicao < 0)
	{
		printf("Vetor vazio!!!");
	}
	else
	{
		vetor[iPosicao] = 0;
		iPosicao--;

	}
}
void Exibir() {
	printf("vetor:");
	
	for (int i = 0; i < MAX; i++)
	{
		printf("%i, ",vetor[i]);
	}
}