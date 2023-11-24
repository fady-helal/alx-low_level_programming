#include "main.h"
/**
 * binary_to_uint _ convert binary to decimal.
 * @b:arg.
 * Return : int.
*/

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int result = 0;
int length;
for (length = 0 ; b[length] != '\0' ; length++)
;
for (i = 0 ; i < length ; i++)
{
if (!b)
return (0);
if (b[i] == '1')
{
result += (1 << (length - i - 1));
}

}
return (result);
}
