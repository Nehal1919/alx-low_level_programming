#include <stdio.h>
/**
* main - started
* Description: c print the alphabet in lowercase then upercase
* Return: 0 (success)
*/
int main(void)
{
char a;
a = 'a';
char A;
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

