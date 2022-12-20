#include "main.h"
/**
 * _puts - printing a string to the stdout
 * @str: the string to print
 * Return: length of the string
 */

void _puts(char *str)
{
	int x = 0;

		while (str[x] != '\0')
			{
			putchar(str[x]);
				++x;
			}
	_putchar('\n');

}
