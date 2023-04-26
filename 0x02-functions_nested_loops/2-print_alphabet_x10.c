#include"main.h"
/**
 *print_alphabet_x10 - function that prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
int ch, time;
for (time = 0; time <= 9; time++)
{
for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
		_putchar('\n');
}
}
