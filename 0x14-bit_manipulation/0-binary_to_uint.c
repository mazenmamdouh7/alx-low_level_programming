#include "main.h"

/**
 * binary_to_uint - convert a binary number to
 * an unsigned int.
 * @b : binary number which convert.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unsNum = 0;
	int R;

	for (R = 0; b[R] != '\0'; R++)
	{
		if (b[R] != '0' && b[R] != '1')
		{
			return (0);
		}
		else
		{
			unsNum = (unsNum << 1) | (b[R] - '0');
		}
	}

	if (b == NULL)
	{
		return (0);
	}

	return (unsNum);
}
