#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Define a new type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};
/**
  * dog_t - typedef for struct dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
