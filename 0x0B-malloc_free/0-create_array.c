#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars,
* and initializes it with a specific char.
* @size: the size of the array
* @c: initial value
* Return: a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int num;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *) malloc(sizeof(char)*size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (num = 0 ; num < size ; num++)
	{
		array[num] = c;
	}

	return (array);
}
