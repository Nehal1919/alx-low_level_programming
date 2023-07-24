#include "main.h"
#include <stdio.h>

/**
 * _strlen - the funcation return the  length of a string
 * @s: the input
 * Return: int the number of string
 */

int _strlen(char *s)
{
int a = 0;
int i = 0;
while (s[i] != '\0')
{
a++;
i++;
}
return (a);
}
