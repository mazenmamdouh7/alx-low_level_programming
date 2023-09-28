#include "main.h"

/**
 * binary_to_uint - convert a binary number to
 * an unsigned int.
 * @b : binary number which convert.
 *
 * Return : unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unsNum;
	int R;

	for (R = 0; b[R] != '\0'; R++)
	{
		if (b[R] == '0' || b[R] == '1')
		{
			return (unsNum);
		}
		else
		{
			return (0);
		}
	}
}
