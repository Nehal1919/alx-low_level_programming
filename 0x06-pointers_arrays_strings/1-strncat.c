#include "main.h"
#include <stdio.h>

/**
 * _strncat -  concatenates two strings
 * useing at most n bytes from n
 * @dest: input1
 * @src: input2
 * @n: input3
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
