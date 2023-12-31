#include"main.h"
/**
 * clear_bit - unset the bit at index.
 * @n:the number to index.
 * @index:the bit to set.
 * Return : 1 if success.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
if (*n & 1L << index)
*n ^= 1L << index;
return (1);
}
