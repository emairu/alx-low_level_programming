#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @a: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
*/

char *rot13(char *a)
{
	int n;
	int j = 0;
	char init[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char fin[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(a + j))
	{

		for (n = 0; n <= 52; n++)
		{
			if (*(a + j) == init[n])
			{
				*(a + j) = fin[n];
				break;
			}
		}
		j++;
	}
	return (a);
}
