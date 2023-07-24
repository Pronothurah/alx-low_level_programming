#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0)
 *
 * @src: char type string
 *
 * @dest: chard type string
 *
 * Description: prints a string pointed to by 'src' to 'dest'
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
