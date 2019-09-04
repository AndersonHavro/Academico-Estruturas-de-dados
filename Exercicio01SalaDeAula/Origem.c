#include<stdio.h>

void PrencheVect();
void Menu();


int vect[5];
int tam = sizeof(vect) / sizeof(int);
int main() {
	Menu(); //CHAMA O MENU GERAL
	return 0;
}

void PrencheVect() {
	int elemento=0;
	for (int i = 0; i < tam; i++)
	{
		printf("== DIGITE O %d ELEMENTO DO VETOR :",(i+1));
		scanf_s("%d", &elemento);
	}
}

void Menu() {
	int opcoes = 0;
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


	} while (opcoes>0&&opcoes<8);
	
	}