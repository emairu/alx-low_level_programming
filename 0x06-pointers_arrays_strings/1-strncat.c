#include "main.h"

/**
 * _strncat - function to append strings
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: number of bytes
 *
 * Return: address of dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int y, q;

	y = q = 0;
	while (*(dest + y))
		y++;
	while (q < n && *(src + q))
	{
		*(dest + y) = *(src + q);
		y++;
		q++;
	}
	if (q < n)
		*(dest + y) = *(src + q);
	return (dest);
}
