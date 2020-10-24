#include "dog.h"
#include <stdlib.h>

void copy_S(char *original, char *copy);
int length(char *string);

/**
 * new_dog - Create a new dog with given parameters
 *
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: the owner of the dog
 *
 * Return: the created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	name_copy = malloc(sizeof(*name));
	owner_copy = malloc(sizeof(*owner));

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(dog);
		free(name_copy);
	}

	copy_S(name, name_copy);
	copy_S(owner, owner_copy);

	return (dog);

}

/**
 * copy_S - Copy a string
 *
 * @original: The original string
 * @copy: The copy
 */

void copy_S(char *original, char *copy)
{
	int i;

	for (i = 0; i <= length(original); i++)
	{
		*(copy + i) = *(original + i);
	}
}

/**
 * length - Measure the length of a string
 *
 * @string: The string to be measured
 *
 * Return: The length of the string
 */

int length(char *string)
{
	int i;

	for (i = 0; *(string + i); i++)
		;

	return (i);
}
