#include<stdio.h>

int main() {
	int vect[7] = { 5,7,6,4,2,3,1 };
	Quick(vect, 0, 6);
	for (int x = 0; x < 7; x++)
	{
		printf("%i", vect[x]);
		printf("\n\n\n");
	}

	return 0;
}

int Quick(int vect[], int e, int d) {
	int i, j, p, y;
	i = e;
	j = d;
	p = vect[d];
	while (i <= j) {
		while (vect[i] < p && i < d) {
			i++;
		}
		while (vect[j] > p && j > e)
		{
			j--;
		}
		if (i <= j)
		{
			y = vect[i];
			vect[i] = vect[j];
			vect[j] = y;
			i++;
			j--;
		}

	}
	if (j > e)
	{
		Quick(vect, e, j);
	}
	if (i < d)
	{
		Quick(vect, i, d);
	}
}