#include <stdio.h>
/**
* main - started
* Description: c print the alphabet in lowercase then upercace
* Return: 0 (success)
*/
int main(void)
{
char a;
char A;
a = 'a';
A = 'A';
while (a <= 'z')
{
putchar(a);
a++;
}
while (A <= 'Z')
{
putchar(A);
A++;
}
putchar('\n');
return (0);
}

