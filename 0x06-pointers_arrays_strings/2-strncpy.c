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
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
