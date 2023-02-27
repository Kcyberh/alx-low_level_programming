#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: the first integer to be swapped
 * @b: the second integer to be swaaped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of the two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
