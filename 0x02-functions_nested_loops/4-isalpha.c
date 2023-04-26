#include"main.h"
/**
 * _isalpha - checks if character is an alphabet lowercase and uppercase
 * @c: take input from other function
 * Return: 1 if true else 0
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
	return (1);
if (c >= 65 && c <= 90)
	return (1);
return (0);
}
