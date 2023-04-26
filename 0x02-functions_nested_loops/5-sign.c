#include"main.h"
/**
 * print_sign - print + if n is greater than zero
 * , 0 if n is zero and - if n is less tan zero
 * @n: take input for function
 * Return: 1 if n > 0 , 0 is n == 0 and -1 if n <0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
