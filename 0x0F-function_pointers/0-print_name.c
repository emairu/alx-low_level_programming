#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints name.
 * @name: input name.
 * @f: function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
