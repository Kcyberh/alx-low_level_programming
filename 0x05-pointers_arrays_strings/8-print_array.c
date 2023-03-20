#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an arry of integers
 * @a: array of integers
 * @n: number of element of the arry to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
