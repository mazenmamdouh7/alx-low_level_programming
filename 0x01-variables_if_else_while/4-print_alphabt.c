#include <stdio.h>

/**
 * main - Entry point
 *Description : prints the alphabet in lowercase without 'e'and'q'
 *		,and new line.
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if ((c == 'q' || c == 'e') != 1)
		{
			putchar(c);
		}

	}
	putchar('\n');
	return (0);
}
