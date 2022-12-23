#include "main.h"
/**
*reverse_array - to reverse array of int
*@a: the arrays
*@n: the number of elements in the array
*Return: reverse
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}

}
