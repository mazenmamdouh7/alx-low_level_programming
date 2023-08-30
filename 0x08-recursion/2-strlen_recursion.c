#include "main.h"

/**
 *_strlen_recursion - return the lenght of the string.
 *@s: measure string.
 */
int _strlen_recursion(char *s)
{
	int leng = 0;
	if(*s != '\0')
	{
		leng++;
	}

	_putchar(leng);
}



