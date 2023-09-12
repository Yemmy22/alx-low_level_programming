#include "dog.h"
/**
 * new_dog - Creates a new structure dog
 * @name: First member to be copied
 * @age: Second member to be copied
 * @owner: Third member to be copied
 *
 * Return: Pointer to the new dog structure in memory
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	int j, k, l;
	dog_t *new_dog;
	char *new_name, *new_owner;

	while (name[i] != '\0')
		i++;
	j = 0;
	while (owner[j] != '\0')
		j++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_name = malloc(sizeof(name) * i + 1);
	new_owner = malloc(sizeof(owner) * j + 1);

	if (new_name == NULL || new_owner == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		new_name[k] = name[k];

	for (l = 0; l < j; l++)
		new_owner[l] = owner[l];

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
