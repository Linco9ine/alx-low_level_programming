#include "main.h"

/**
 * _print_rev_recursion - writes the string in reverse.
 *  return 0
 * @s: the string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
 if (*s)
{
 _print_rev_recursion(s + 1);
 _putchar(*s);
}
}
