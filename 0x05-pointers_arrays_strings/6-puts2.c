#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string, starting with char0
 * @str: the input string
 * Return: void
 */

void puts2(char *str)
{
int i = 0;
int c = 0;
int j = 0;
while (str[i] != '\0')
{
c++;
i++;
}
while (j < c)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
j++;
}
_putchar('\n');
}
