#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
	if (*s == 0 && *s == (*s + 1))
	{
		s++;
		return (1);
	}
	else
	{
		return (0);
	}
}
