#include "main.h"

/**
 * _strlen - returning the length of a string
 * @s: the string to return it length
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;
	return (i);
}
