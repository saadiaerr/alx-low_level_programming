#include "hash_tables.h"

/**
 * key_index - Get the iex at whichdd a key/value pair should be stored in the
 *             array of a hash table.
 * @key: The key to get the indeeex of.
 * @size: The size of the array ofrg the hash table.
 *
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
