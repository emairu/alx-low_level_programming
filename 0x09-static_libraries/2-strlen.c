#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: character to check
 * Return: 0;
*/

int _strlen(char *s)
{
	int m = 0;

	while (*(s + m) != '\0')
		m++;

	return (m);
}
