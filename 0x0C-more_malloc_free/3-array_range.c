#include "main.h"

/**
 *  * array_range - create array from min to max
 *   * @min: minimum
 *    * @max: maximum
 *     * Return: pointer to int array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int j;
	i = min;
	for (i = min ; i <= max ; i++);
	i -= min;
	ptr = malloc(sizeof (int) * i);
	if (ptr == NULL)
		return(NULL);
	for (j = 0 ; j < i ; j++)
	{
			ptr[j] = i;
			i++;
	}
	return (ptr);
}
