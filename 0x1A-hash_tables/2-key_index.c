#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: hash_node_t key
 * @size: size of the array of hash table
 * Return: index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
