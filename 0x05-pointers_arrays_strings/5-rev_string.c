#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The argument string to be reversed.
*/

void rev_string(char *s)
{
	int l = 0, n = 0;
	char z;

	while (s[n++])
		l++;

	for (i = l - 1; i >= l / 2; i--)
	{
		z = s[n];
		s[n] = s[l - n - 1];
		s[l - n - 1] = z;
	}
}
