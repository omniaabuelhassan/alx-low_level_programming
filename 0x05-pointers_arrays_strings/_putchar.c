#include <unistd.h>
/**
 * _putchar - Writes the character c to stdout
 * @c: the input character
 * Return: 1(success) -1(unsuccess)
 */
int _putchar(char c)
{
	return (write(1, @c, 1));
}
