#include "main.h"

/**
 * _strpbrk - searches a string for any sets of bytes
 * @s: input string
 * @accept: set of bytes
 * Return: pointer to s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	char *ptr;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return (0);
}
