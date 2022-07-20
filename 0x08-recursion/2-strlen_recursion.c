#include "main.h"

/**
 * strlen - calculate the length of a string
 * _strlen_recursion - returns the length of a string.
 *  return 0
 * @s: the string to be printed the length.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
  return 0;
else
 return 1 + _strlen_recursion(s + 1);
}
