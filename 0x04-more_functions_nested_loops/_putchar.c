#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c : the input character we print
 *
 * Return : 1 (success) -1 (unsuccess)
 * */
int _putchar (char c)
{
return (write(1, &c, 1));
}
