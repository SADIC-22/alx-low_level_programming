#include "main.h"
#include <stdio.h>
/**
 * print_array - printing an array of n elements
 * @a:an int in the array
 * @n: int to check
 * Return: 0
 */

void print_array(int *a, int n)
{

	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
		printf("%d", a[x]);

			else

			printf("%d", a[x]);

			printf("\n");
}
