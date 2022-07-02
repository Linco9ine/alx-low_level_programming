#include <stdio.h>
/**
* main - prints the alphabet in lowercase,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{   
int a,z,n;
a = 97; 
z = 122;
n = 110;
    char ch = a;
while (ch <= z)
{
putchar(ch);
ch++;
}
putchar(n);
 return (0);
}
