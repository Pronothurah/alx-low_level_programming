#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: input string
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	char *encoded = str;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*str)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*str == key[i] || *str == key[i] + 32)
				*str = value[i] + 48;
		}
		str++;
	}
	return (encoded);
}
