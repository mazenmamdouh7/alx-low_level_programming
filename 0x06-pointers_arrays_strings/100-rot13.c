#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @c: pointer to string params
 * Return: *c
 */

char *rot13(char *c)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == data1[j])
			{
				c[i] = datarot[j];
				break;
			}
		}
	}
	return (c);
=======
/**
 * rot13 - change letters to ROT13.
 * @s: analized string.
 *
 * Return: String with all letters in ROT13 base.
 */
char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = rot[j];
				break;
			}
		}
		i++;
	}
	return (s);
>>>>>>> 039fce787e2ce462e84a46592885910a7d779d86
}
