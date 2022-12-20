#include "main.h"
/**
 * _strcpy - coping string pointed to by src to dest
 * @src: a char to check
 * @dest: char to check
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
		dest[a] = '\0';

			return (dest);
}
