#include "main.h"
/**
 * rev_string - revernse a string
 * @s : string parameter
 * Return : nothing
 */
void rev_string(char *s)
{
	int x, y;
	char c;

	for (x = 0; s[x] != '0'; ++x)
		;
	for (y = 0; y < x / 2; y++)
	{
		c = s[y];
		s[y] = s[x - 1 - y];
		s[x - 1 - y] = c;
	}
}
