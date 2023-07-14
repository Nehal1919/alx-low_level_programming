#include <stdio.h>
/**
* main - started
* Description: c prints base 16 in lowercase
* Return: 0 (success)
*/
int main(void)
{
int a;
char c;
a = 0;
c = 'a';
while (a < 10)
{
putchar(a + '0');
a++;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}

