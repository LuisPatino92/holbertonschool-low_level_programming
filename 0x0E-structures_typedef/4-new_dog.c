#include "dog.h"
#include <stdlib.h>

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

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;


	return (dog);

}
