#include "main.h"
/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to memory allocated by malloc
 * @old_size: size of the memory allocated for ptr
 * @new_size: new size of the new memory block
 * Return: new_size > old_size not initialized
 * new_size == old_size return ptr
 * ptr is NULL return to malloc(new_size)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	unsigned int y = 0;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		if (ptr == NULL)

		str = malloc(new_size);
		if (!str)
			return (NULL);
		return (str);
	}
	if (new_size > old_size)
	{
		str = malloc(new_size > old_size);
		if (!str)
			return (NULL);
		for (y = 0; y < old_size && y < new_size; y++)
			*((char *)str + y) = *((char *)ptr + y);
		free(ptr);
	}
	return (str);
}
