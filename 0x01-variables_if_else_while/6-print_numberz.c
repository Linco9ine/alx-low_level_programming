#include <stdio.h>

/**
 * main - prints numbers 0-9 without using char or printf/puts,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = '0';
while (i <= '9')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
