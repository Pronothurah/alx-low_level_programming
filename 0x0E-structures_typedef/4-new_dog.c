#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - a function that gets a length of a tring
 *
 * @str: sting to get length
 *
 * Return: length of string
 */
int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * _strcopy - returns a copy of a string
 * @src: source of string
 * @dest: destination to copy string
 *
 * Return: @dest
 */
char *_strcopy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog =  malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcopy(name, dog->name);

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcopy(owner, dog->owner);
	dog->age = age;

	return (dog);
}
