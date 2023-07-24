#include "main.h"
#include <stdio.h>

/**
 * print_rev - print the string in reverse
 * @s: the input string
 * Return: void
 */

void print_rev(char *s)
{
int a = 0;
int i = 0;
while (s[i] != '\0')
{
a++;
i++;
}
a--;
while (s[a] > 0)
{
_putchar(s[a]);
a--;
}
_putchar('\n');
}
