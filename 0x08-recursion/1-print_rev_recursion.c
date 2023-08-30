#include "main.h"

/**
 * _print_rev_recursion - reverse the string
 * @s: print the string
 */
void _print_rev_recursion(char *s)
{
	while (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
