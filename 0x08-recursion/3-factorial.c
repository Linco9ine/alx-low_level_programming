#include "main.h"

/**
 * factorial - Returns returns the factorial of a given number.
 *  Return: if n > 0 - the factorial of given number.
 *          if n < 0 - (-1) to indicate the error.
 * @n: is a given number.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n >= 0 && n <= 0)
return (1);
return  n * factorial(n - 1);
}
