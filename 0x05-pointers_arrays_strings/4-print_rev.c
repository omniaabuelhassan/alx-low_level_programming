#include "main.h"
/**
 * print_rev - print string revrense
 * @s : pointer to a string
 * Return: nothing
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;

	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
