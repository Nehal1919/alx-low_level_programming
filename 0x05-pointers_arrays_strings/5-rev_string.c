#include "main.h"
#include <stdio.h>

/**
 * rev_string - funcation that reverse string
 * @s: the input string
 * Return: void
 */

void rev_string(char *s)
{
char ch = s[0];
int i = 0;
int c;
while (s[i] != '\0')
i++;
for (c = 0; c < i; c++)
{
i--;
ch = s[c];
s[c] = s[i];
s[i] = ch;
}
}
