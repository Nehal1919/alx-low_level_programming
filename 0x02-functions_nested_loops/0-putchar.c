#include <stdio.h>
#include<stdlib.h>
#include<string.h>
/**
* main - started
* Description: c prints _putchar
* Return: 0 (success)
*/
int main(void)
{
char a[20] = "_putchar";
for (int i = 0 ; a[i] != '\0' ; i++)
{
putchar(a[i]);
}
putchar('\n');
return (0);
}
