#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the numbers from 0-9.
 *
 * Return: Always (Success)
 */
int main(void)
{
int i = '0';
int j = '0';
while (i <= '9')
{	
while (j <= '9')
{
putchar(i);
putchar(j);
if (j == '9' && i == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
j++;
}
if (j >= '9')
{
j = '0';
}
i++;
}
return (0);
}

