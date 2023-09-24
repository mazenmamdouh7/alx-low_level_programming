#include <stdio.h>

/**
 * main - Entry point
 *Description : A program prints the lowercase
 *             alphabet in reverse, followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	char character;

	for (character = 'z' ; character >= 'a' ; character--)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
