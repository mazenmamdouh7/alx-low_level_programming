#include <stdio.h>

/**
 * main - Entry point
 *Description : prints all single digit
 *		numbers of base '10' starting from '0'
 *		,and follwed by new line.
 *Conditions : print the result using putchar function.
 * Return: 0
 */

int main(void)
{
	int number;

	for (number = 0 ; number < 10 ; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
	return (0);

}
