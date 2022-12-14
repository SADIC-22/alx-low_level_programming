#include "main.h"
/**
 * _isalpha - checking for alphabets
 *@c: the char to be check
 * Return: 1 if char is a letter in lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && C <= 'Z'))
		return (1);
	else
		return (0);
