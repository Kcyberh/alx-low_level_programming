#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- print lowercase alphabet in reverse
 * Return: Always (Success)
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
