#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: measured string.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int leng = 0;

	if (*s != '\0')
	{
		leng++;
	}
	_putchar(leng);
}
