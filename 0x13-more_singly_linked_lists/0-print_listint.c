#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements
 * @h: Pointer to an int constant
 *
 * Return: The number of mine
**/

size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
