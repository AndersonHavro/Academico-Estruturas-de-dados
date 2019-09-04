#include<stdio.h>
#include<locale.h>

void PrencheVect();
void Menu();
void Opcoes();
void OrdenarBubble();

void Imprimir();


int vect[5];
int tam = sizeof(vect) / sizeof(int);
int opcoes = 0, aux = 0;

int main() {
	setlocale(LC_ALL, "portuguese");
	Menu(); //CHAMA O MENU GERAL
	return 0;
}

void PrencheVect() {
	int elemento = 0;
	for (int i = 0; i < tam; i++)
	{
		printf("== DIGITE O %d ELEMENTO DO VETOR :", (i + 1));
		scanf_s("%d", &elemento);
	}
}

void Menu() {

	printf("==================== MENU =====================\n");
	printf("");
	PrencheVect();
	printf("");
	do
	{
		printf("===============================================\n");
		printf("================== OPÇÕES =====================\n");
		printf("===============================================\n");
		printf("");
		printf("( 1 ) ========== ORDERNAR POR \"BUBBLE SORT\"==\n");
		printf("( 2 ) ========== ORDERNAR POR \"INSERTION SORT\"\n");
		printf("( 3 ) ========== ORDERNAR POR \"SELECTION SORT\"\n");
		printf("( 4 ) ========== ORDERNAR POR \"QUICK SORT\"===\n");
		printf("( 5 ) ========== BUSCAR VETOR \"SEQUENCIAL\"===\n");
		printf("( 6 ) ========== ORDERNAR POR \"EXAUSTIVA\"====\n");
		printf("( 7 ) ========== ORDERNAR POR \"BINÁRIA\"======\n");
		printf("( 8 ) ========== SAIR==========================\n");
		printf("");
		printf("===============================================\n");

		Opcoes();

	} while (opcoes > 0 && opcoes < 8);
}
void Opcoes() {

	scanf_s("%d", &opcoes);

	if (opcoes == 1)
	{
		OrdenarBubble();
		Imprimir();

	}

	/*switch (opcoes)
	{
	case 1:
		OrdenarBubble();
	case 2:
		printf("opcao 2\n");
		break;
	case 3:
		printf("opcao 3\n");
		break;
	case 4:
		printf("opcao 4\n");
		break;
	case 5:

		printf("opcao 5\n");
		break;
	case 6:
		printf("opcao 6\n");
		break;
	case 7:
		printf("opcao 7\n");
		break;
	}*/
	
}
void OrdenarBubble() {

	for (int x = tam - 1; x > 0; x--)
	{
		for (int y = 0; y < x; y++)
		{
			if (vect[y] < vect[y + 1])
			{
				aux = vect[y];
				vect[y] = vect[y + 1];
				vect[y + 1] = aux;
			}
		}
	}
	Imprimir();
}
void Imprimir() {
	for (int i = 0; i < tam; i++)
	{
		printf("%d", vect[i]);
	}

}