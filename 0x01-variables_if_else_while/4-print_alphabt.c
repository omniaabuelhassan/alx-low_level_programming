#include <stdio.h>
/**
 * main - Entry point
 * Description: program that print lowercase alphabet except e,q
 * Return: 0(success)
 */

int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch != e && ch != q)
	putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
