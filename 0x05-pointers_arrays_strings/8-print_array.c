#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an input number of elements of an array of integers.
 *
 * @a: An array of integers.
 *
 * @n: The number of elements to be printed.
*/

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);

		if (m == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
