#include <stdio.h>
/**
* main - started
* Description: c prints the lowercase alphabet in reverse
* Return: 0 (success)
*/
int main(void)
{
char a;
a = 'z';
while (a >= 'a')
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}

