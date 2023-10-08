#include "main.h"
/**
 *  * malloc_checked - return pointer to allocated memo
 *   * @b: byte
 *    * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{

	void *new;
new = malloc(b);
if (new == NULL)
{
	exit(98);
}
	return (new);



}
