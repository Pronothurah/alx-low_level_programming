#include "main.h"

/**
 * is_delimiter - checks for character
 * @c: input character
 *
 * Return: 1 if true 0 if false
 */
int is_delimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?(){}\"";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer string
 *
 * Return: pointer to the capitalised string;
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int found_delimit = 1;

	while (*str)
	{
		if (is_delimiter(*str))
			found_delimit = 1;
		else if (islower(*str) && found_delimit)
		{
			*str -= 32;
			found_delimit = 0;
		}
		else
			found_delimit = 0;
		str++;
	}
	return (ptr);
}
