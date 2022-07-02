#include <stdio.h>
/**
* main - prints the alphabet in lowercase,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{ 
int a = 97; 
int z = 122;
int n = 110;
    char ch = a;
while (ch <= z)
{
putchar(ch);
ch++;
}
putchar(n);
 return (0);
}
