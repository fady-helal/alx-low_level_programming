#include "main.h"
/**
 * _isalpha - check letters
 * @c: turned to int by ascii
 *
 * Description: for letters
 *
 * Return: 1 if c is letter 0 if c is else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

