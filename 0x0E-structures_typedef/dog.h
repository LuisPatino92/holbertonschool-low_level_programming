#ifndef DOG_H
#define DOG_H

struct dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog - A dog class structure
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
