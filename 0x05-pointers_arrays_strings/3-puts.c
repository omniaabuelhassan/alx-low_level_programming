#include "main.h"
/**
 * _puts - print a string followed bu a new line
 * @str: string
 * Return: nothing
  */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
str++;
}
_putchar('\n')

}
