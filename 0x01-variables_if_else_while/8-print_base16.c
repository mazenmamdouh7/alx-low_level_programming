#include <stdio.h>

/**
 * main - Entry point
 * Description :A program prints all the numbers of base 16 in lowercase,
 *              followed by a new line.
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0 ; num < 16 ; num++)
	{
		if (num < 10)
		{
			putchar('0' + num);
		}
		else
		{
			putchar(87 + num);

		}
	}
	putchar('\n');
	return (0);

}
