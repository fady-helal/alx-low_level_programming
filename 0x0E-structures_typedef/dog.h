#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - dog data
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
