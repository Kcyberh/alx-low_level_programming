#include "main.h"

/**
* flip_bits - is a function set bit to 0 at given index.
* @n: is unsigned long int
* @m: is an unsigned int
*
* Return: return 1 when bit is 1 else 0.
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = 0;
unsigned long int y = n ^ m;
while (y)
{
x += (y & 1);
(y >>= 1);
}
return (x);
}
