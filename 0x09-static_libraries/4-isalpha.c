#include "main.h"

/**
 * _isalpha - prints letters in lowercase
 * and uppercase
 * prints zero for others
 *
 * @c: The character is ASCII code
 *
 * Return: 1 for letter and lowercase
 * and upper case 0 for others
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
