#include <stdlib.h>
#include "dog.h"
/**
 * _slen - size of strings
 * @c: string to check
 * Return: the length of the string
 */
int _slen(char *c)
{
	int len;

	len = 0;

	while (*c++)
	{
		len++;
	}

	return (len);
}

/**
 * *_strcpy - copies the string
 * @dest: the buffer in which we copy the string
 * @src: string to be copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;

	for (; src[y]; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';

	return (dest);

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int int1, int2;

	int1 = _slen(name);
	int2 = _slen(owner);

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->name = malloc(sizeof(char) * (int1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (int2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
