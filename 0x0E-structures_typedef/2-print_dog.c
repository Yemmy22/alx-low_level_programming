#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Prints struct dog
 * @d: Pointer to struct of type struct dog
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	char *str = "(nil)";

	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %s\n", str);
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: %s\n", str);
		else
			printf("Owner: %s\n", d->owner);
	}
}

