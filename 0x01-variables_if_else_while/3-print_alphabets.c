#include <stdio.h>

/**
 * main - Entry point
 *Description : prints the alphabet in lowercase,then in uppercase
 *		,and new line. 
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);

	}

	for (c = 'A' ; c <= 'Z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
