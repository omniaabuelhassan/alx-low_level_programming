#include <stdio.h>
/**
 * main - Entry point
 * Description:program that print alphbet
 * Return: 0(success)
 */

int main(void)
{
char chs = 'a';
char chc = 'A';
while (chs <= 'z')
{
putchar(chs);
chs++;
}
while (chc <= 'Z')
{
putchar(chc);
chc++;
}
putchar('\n');
return (0);
}
