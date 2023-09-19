#include "main.h"
/**
 * _strlen : calculate number of string
 * @s : is a pointer
 *
 * return : i
*/
int _strlen(char *s)
{

int i = 0;
while (s[i] != '\0')
{
	i++;
}
return (i);
}
