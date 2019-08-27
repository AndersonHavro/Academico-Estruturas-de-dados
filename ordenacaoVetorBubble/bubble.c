#include <stdio.h>
/* Codigo bonito da porra */
int main() {
	int vect[] = { 20,15,2,5,7,1,3 };
	int tam = sizeof(vect) / sizeof(int);

	int aux = 0;
	for (int x = tam - 1; x > 0; x--)
	{
		for (int y = 0; y < x; y++)
		{
			if (vect[y] > vect[y + 1])
			{
				aux = vect[y];
				vect[y] = vect[y + 1];
				vect[y + 1] = aux;

			}
		}
	}
	for (int i = 0; i < tam; i++)
	{
		printf("%i, ", vect[i]);
	}
	getchar();
	return 0;
}
