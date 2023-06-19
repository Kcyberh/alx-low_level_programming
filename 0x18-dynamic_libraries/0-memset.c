#include "main.h"

/**
 * _memset - fills the memory with the constant byte
 * @n : first n byte
 * @s: point a byte
 * @b: constant byte
 *
 * Return: apointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
