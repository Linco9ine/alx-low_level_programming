#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 *  Return: length of string
 * @s: the string to be printed the length.
 */
int _strlen_recursion(char *s)
{

if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
