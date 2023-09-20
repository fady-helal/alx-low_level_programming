#include "main.h"

/**
 * reverse_array - reverse element of array
 * @a: array str
 * @n: size of elemetns
 * Return: none (void)
 */

void reverse_array(int *a, int n)
{
	int end, start, temp;
	end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
