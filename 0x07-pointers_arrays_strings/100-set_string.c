#include "main.h"

/**
 * set_string - point a pointer to a char.
 *
 * @s: the pointer that we should point.
 * @to: the char that should be pointed.
 * Return: nothing, just point *s at to.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
