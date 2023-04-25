#include <stdio.h>
/**
 * main - Entry point
 * Description: program that print digit number
 * Return: 0(success)
 */

int main(void)
{
int digit = 0;
char ch = 'a';
while (digit < 10)
{
putchar(digit + '0');
}
while (ch <= 'f')
{
putchar(ch);
}
putchar('\n');
return (0);
}
