#include <stdio.h>
/**
 * main - Entry point
 * Description: program that print alphabet in reverse
 * Return: 0(success)
 */

int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchat(ch);
ch--;
}
putchar('\n');
return (0);
}
