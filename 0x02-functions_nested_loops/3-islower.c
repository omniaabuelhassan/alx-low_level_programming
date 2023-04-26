#include"main.h"
/**
 *_islower - function checks if character is lowercase or not
 *@c :checks input of function
 *Return: 1 if 'c' is lowercase
 * 0 if is success
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
return (0);
}
