#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (needle[index] == haystack[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (needle[index] == haystack[index]);
		}
		haystack++;
	}
	return (0);
}
