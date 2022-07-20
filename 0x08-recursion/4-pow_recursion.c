#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 *  Return: if y < 0 - (-1) to indicate the error.
 * pow - power function.
 * @x: is the base.
 * @y: is the power.
 */
int _pow_recursion(int x, int y)
{

if (y < 0)
return (-1);
else if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
