#include "main.h"
#include <stdio.h>

/**
 * _puts - print the string followed with new line
 * @str: the input string
 * Return: void
 */

void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
