#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - the fuction return length of the string.
 * @str: the string.
 *
 * Return: length of the string.
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}

	return (len);
}

/**
 * _strcopy - copy a string from src to the
 *              destination including the null character
 * @dest: the stirng of dest
 * @src: the string to copy.
 *
 * Return: The pointer to dest.
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
	{
		dest[index] = src[index];
	}

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *luna;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	luna = malloc(sizeof(dog_t));
	if (luna == NULL)
	{
		return (NULL);
	}

	luna->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (luna->name == NULL)
	{
		free(luna);
		return (NULL);
	}

	luna->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (luna->owner == NULL)
	{
		free(luna->name);
		free(luna);
		return (NULL);
	}

	luna->name = _strcopy(luna->name, name);
	luna->age = age;
	luna->owner = _strcopy(luna->owner, owner);

	return (luna);
}
