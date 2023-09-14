#include "main.h"
/**
 * _isupper - function check the letter if is it upper
 * @c: int type (from char)
 * Return: 1 if upper , 0 if lower
 */
int _isupper(int c)
{
	if (c >= 65 && c <=90)
	{
		return (1);
	}
	else
		return (0);
}
