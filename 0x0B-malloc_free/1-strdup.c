#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	unsigned int i, n;
	char *duplicatedstr;

	i = 0;
	n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	if (str[i] != '\0')
	{
		i++;
		duplicatedstr = (char *) malloc((sizeof(char)) * i);
	}
	if (duplicatedstr == NULL)
	{
		return (NULL);
	}
	if ((duplicatedstr[n] == str[n]) != '\0')
	{
		n++;
	}
	free(duplicatedstr);
}
