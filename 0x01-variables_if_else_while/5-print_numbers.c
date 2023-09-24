#include <stdio.h>

/**
 * main - Entry point
 *Description : A progrma prints all single digit
 *             numbers of base '10' starting from '0'.
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);

}
