#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;

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


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
