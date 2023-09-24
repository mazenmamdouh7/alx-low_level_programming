#include <stdio.h>

/**
 * main - Entry point
 * Description : A program prints all possible
 *              combinations of single-digit numbers.
 * Coditions : Numbers must be separated by ','
 *           , and followed by a space
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = 0 ; number < 10 ; number++)
	{
		putchar(number + '0');

		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
