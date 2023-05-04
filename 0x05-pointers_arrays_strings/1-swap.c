#include "main.h"
/**
 * swap_int - swap the value of a with b
 * @a: input int
 * @b: input int
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
