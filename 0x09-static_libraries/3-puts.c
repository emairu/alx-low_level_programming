#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 * Return: 0
*/

void _puts(char *str)
{
	int j = 0;

	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
