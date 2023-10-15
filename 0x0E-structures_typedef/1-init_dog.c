#include "dog.h"

/**
 *  * init_dog - function for new struct data of dog
 *   * @d: struct dog pointer
 *    * @name: name of th dog char*
 *     * @age: float
 *      * @owner: owner name (char*)
 *       * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
	return;
d->name = name;
(*d).age = age;
d->owner = owner;
}
