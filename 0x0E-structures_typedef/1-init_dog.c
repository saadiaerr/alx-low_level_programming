#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		d = malloc(sizeof(struct dog));
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
