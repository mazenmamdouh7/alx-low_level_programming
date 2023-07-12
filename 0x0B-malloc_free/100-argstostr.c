#include "main.h"
#include <stdlib.h>

/**
* *argstostr - concatenates all the arguments of the program
* @ac: number of arguments
* @av: array of arguments
* Return: Pointer to the new string (Success), NULL (Error)
*/

char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
{
	s = av[i];
	j = 0;

	while (s[j++])
	len++;
	len++;
}
