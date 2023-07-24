#include "main.h"
#include <stdio.h>

/**
 * puts_half - function should print the second half of the string
 * @str: is input
 * Return: void
 */

void puts_half(char *str)
{
int i = 0;
int c = 0;
int j;
while (str[i] != '\0')
{
c++;
i++;
}
j = c / 2;
while (j < c)
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
