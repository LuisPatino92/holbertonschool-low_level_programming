#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the information of a dog structure
 *
 * @d: The address of the dog class
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	} /*QUe es print nothing???*/
	else
	{
		printf("Name: ");
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->name);

		printf("Age: ");
		if (&(d->age) == NULL)
			printf("(nil)\n");
		else
			printf("%f\n", d->age);
		printf("Owner: ");
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
