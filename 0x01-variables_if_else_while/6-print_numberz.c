#include <stdio.h>
/**
 * main - Entry point
 * Description: program that print digit from 0 to 9
 * Return: 0(success)
 */

int main(void)
{
int digit = 0;
while (digit < 10)
{
putchar(digit + '0');
	digit++;
}
putchar('\n');
return (0);
}
