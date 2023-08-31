#include "main.h"

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if ((n % 2) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
