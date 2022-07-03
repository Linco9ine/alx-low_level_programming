#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = '0';
while (i <= '9')
{
putchar(i);
if (i != '9')
{
putchar(',');
putchar(' ');
}
++i;
}
putchar('\n');
return (0);
}

