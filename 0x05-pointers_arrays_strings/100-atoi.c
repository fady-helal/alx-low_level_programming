#include "main.h"

/**
 * _atoi - convert array numbers to int
 * @s: poniter to string
 * Return: int
 */

int _atoi(char *s)
{
	int len, i, sign;
	unsigned int n;

	len = 0;
	while (s[len] != '\0')
		len++;

	n = 0;
	sign = 1;
	for (i = 0 ; i < len ; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			n = (n * 10) + (s[i] - '0');
		if (i == 40)
			break;
	}
	return (n * sign);
}
