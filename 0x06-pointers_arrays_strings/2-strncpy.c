#include "main.h"
/**
*_strncpy - to concatenate two string
*@dest: destination string
*@src: source string
*@n: number of char to copy
*Return:dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && dest[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
