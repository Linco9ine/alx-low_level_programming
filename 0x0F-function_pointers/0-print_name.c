#include <stdio,h>
#include "function_pointers.h"

/**
 * print_name - prints name.
 * @name: the nae to be printed.
 * @f: a pointer to a function that prints a name.
 * Return: void 
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

