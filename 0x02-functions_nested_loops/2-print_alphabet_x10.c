#include "main.h"
/**
 * print_alphabet_x10 - make alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
char a;
int i;
i = 0;
while (i < 10)
{
for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);
}
_putchar('\n');
i++;
}
}
