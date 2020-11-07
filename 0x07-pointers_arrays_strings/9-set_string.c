#include "holberton.h"

/**
 * set_string - Sets one string as value stored by a pointer
 *
 * @s: The pointer to be set
 * @to: The string to set
 */

void set_string(char **s, char *to)
{
	*s = to;
}
