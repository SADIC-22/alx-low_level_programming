#include "main.h"
/**
*cap_string - to capitalize words
*str: the string
*Return: pointer to the string
*/

char *cap_string(char *)

{
	int i;

	i = 0;
	while (str[i])
	{
		while (!str(i) >= 'a' && str[i] <= 'z'))
			i++;

		if (str[i - 1] == ' '|| 
		    str[i - 1] == '\t'||
		    str[i - 1] == '\n'||
		    str[i - 1] == ','||
		    str[i - 1] == ';'||
		    str[i - 1] == '.'||
		    str[i - 1] == '!'||
		    str[i - 1] == '?'||
		    str[i - 1] == '"'||
		    str[i - 1] == '('||
		    str[i - 1] == ')'||
		    str[i - 1] == '{'||
		    str[i - 1] == '}'||
		    i == 0)
			n[i] = n[i] - 32;
		i++;
	}
	return (str);
	
}
