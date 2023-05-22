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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src)
int _slen(char *c);

#endif
