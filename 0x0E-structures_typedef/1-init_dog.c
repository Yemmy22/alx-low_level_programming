#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes structure d of type struct dog
 * @d: Pointer to the structure
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

