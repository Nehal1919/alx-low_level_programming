#include <stdio.h>
/**
* main - started
* Description: c print the alphabet in lowercase
* Return: 0 (success)
*/
int main(void)
{
char a;
a = 'a';
while (a <= 'z')
{
putchar(a);
a++;
}
putchar('\n');

return (0);
}
