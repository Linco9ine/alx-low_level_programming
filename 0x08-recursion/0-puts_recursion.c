#include "main.h"

/**
 * @puts: writes the string s and a trailing newline to stdout.
 *  return 0
 */
void _puts_recursion(char *s)
{
    if (*s)
    {
        _putchar(*s);
        _puts_recursion(s + 1);
    }

    else
        _putchar('\n');
}
