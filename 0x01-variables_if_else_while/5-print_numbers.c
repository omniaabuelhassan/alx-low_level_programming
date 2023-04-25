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
printf("%i", digit);
digit++;
}
printf("\n");
return (0);
}
