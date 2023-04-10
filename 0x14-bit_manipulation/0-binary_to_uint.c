#include "main.h"

/**
* binary_to_uint - is function that converts binary to an unsigned int.
* @b: is a constant char
*
* Return: returns the converted number else 0.
**/

unsigned int binary_to_uint(const char *b)
{
int z;
unsigned int x = 0;

if (!b)
return (0);

for (z = 0; b[z] != '\0'; z++)
{
x <<= 1;
if (b[z] == '1')
x += 1;
else
{
if (b[z] != '0' && b[z] != '1')
return (0);
}
}
return (x);
}
