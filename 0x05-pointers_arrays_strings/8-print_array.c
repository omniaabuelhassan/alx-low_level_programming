#include "main.h"
/**
 * print_array - print n elements of an array followed by anew line
 * @a:input integer
 * @n:input inteder
 * Return:nothing
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != (n - 1))
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	printf("\n";
}
