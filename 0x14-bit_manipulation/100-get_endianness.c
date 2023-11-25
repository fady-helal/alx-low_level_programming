#include"main.h"
/**
 *get_endianness - return the endianness of the system.
 *Return : 1 if big endian , 0 if small.
 */
int get_endianness(void)
{
unsigned long int n = 1;
return (* (char* ) & n);
}


