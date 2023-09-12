#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - Contains dog data types
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
