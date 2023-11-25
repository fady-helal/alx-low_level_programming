#include"main.h"
/**
 * flip_bits - return number of bit to need to flipped
 * to transform from number to another.
 * @n:first number.
 * @m:second number.
 * Rerurn: number of bit should be flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int res_xor = n ^ m;
unsigned int count = 0;
while (res_xor)
{
if (res_xor & 1ul)
{
res_xor = res_xor >> 1;
count++;
}
}

return (count);
}
