#include <stdio.h>
/**
* main - started
* Description: c print numbers from0to9 with putchar
* Return: 0 (success)
*/
int main(void)
{
int a;
a = 0;
while (a < 10)
{
putchar(a + '0');
a++;
}
putchar('\n');
return (0);
}

