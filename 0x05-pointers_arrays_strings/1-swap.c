#include "main.h"
/**
 * swap_int - swapping the value of two int
 * @a: first int to swap
 * @b: second int to swap
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
