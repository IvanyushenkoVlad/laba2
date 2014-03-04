#include "head.h"

void PuzSort(char *mas, int n)
{
	int i,j;
	char c;
	for ( i = (n - 1); i >= 0; i--)
	{
		for ( j = 0; j < i; j++)
		{
			if ( mas[j] > mas[j+1] ) 
			{
				c = mas[j];
				mas[j] = mas[j+1];
				mas[j+1] = c;
			}
		}
	}
}