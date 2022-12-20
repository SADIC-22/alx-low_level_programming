#include "main.h"
/**
 * puts_half - printing half of a string
 * @str: the string
 * Return: 0
 */

void puts_half(char *str)
{
	int a = 0, n;

	while (str[x] != '\0')
		x++;
	if  (x + 1 % 2 != '0')
		n = (x - 1) / 2;

	else
		n = (x / 2);
			n++;

	for (x = n ; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
