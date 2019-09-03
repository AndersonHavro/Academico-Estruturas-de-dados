#include<stdio.h>

int main() {
	int i, j, nAtual,
		num_vect[] = { 20,15,2,5,7,1,3 };
	int tam = sizeof(num_vect) / sizeof(int);
	
	for (int i = 1; i < tam; i++)
	{
		nAtual = num_vect[i + 1];
		j = i - 1;
		while ((j>=0)&&(nAtual<num_vect[j]))
		{
			num_vect[j + 1] = num_vect[j];
			j--;
		}
		num_vect[j + 1] = nAtual;
	}
}