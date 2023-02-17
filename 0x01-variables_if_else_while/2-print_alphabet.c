#include <stdio.h>
/**
 * main - print the alphabet in lowercase with putchar
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
