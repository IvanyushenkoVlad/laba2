#include "head.h"

void main()
{
	char *mas;
	int n, i, k;
	srand(time(NULL));
	printf("Input N = ");
	scanf("%d", &n);
	printf("N = %d", n);
	mas = new char[n];
	for (i = 0; i < n; i++ )
	{
		mas[i] = rand()%255;
	};
	//printf("Sposob sortirovki(1 - puzrikom, 2 - sliyanie) - ");
	//scanf("%d", &k);
	//if ( k == 1 )
		PuzSort(mas, n);
	//if ( k == 2 )
	//	MergeSort(mas, 1, n);
	delete[] mas;
	system("pause");
}