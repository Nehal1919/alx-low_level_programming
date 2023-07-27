#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copies a string
 * @dest: input1
 * @src: input2
 * @n: input3
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest)
}
