#include "main.h"

/**
* binary_to_uint - is function that converts binary to an unsigned int.
* @b: is a constant char
*
* Return: returns the converted number else 0.
**/

unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int n = 0;

if (!b)
return (0);

for (x = 0; b[x] != '\0'; x++)
{
n <<= 1;
if (b[x] == '1')
n += 1;
else
{
if (b[x] != '0' && b[x] != '1')
return (0);
}
}
return (n);
}
