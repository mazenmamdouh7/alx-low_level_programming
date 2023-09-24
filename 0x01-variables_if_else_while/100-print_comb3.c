#include <stdio.h>

/**
 * main - Entry point
 *Description :A program that prints all possible
 *             different combinations of two digits.
 * conditions : Numbers must be separated by ',', followed by a space
 *             ,and Print only the smallest combination of two digits.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Left_num, Right_num;

	for (Left_num = 0 ; Left_num < 10 ; Left_num++)
	{
		for (m = Left_num + 1 ; Right_num < 10 ; Right_num++)
		{
			putchar(Left_num + '0');
			putchar(Right_num + '0');


			if (Left_num != 8 || Right_num != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
