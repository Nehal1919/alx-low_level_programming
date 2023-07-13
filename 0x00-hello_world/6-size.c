#include <stdio.h>
/**
* main - started
* Description: C program that prints the size of various types
* Return: 0 (success)
*/
int main(void)
{
char c;
int a;
long int l;
long long int ll;
float f;
printf("Size of a char: %d byte(s)\n", sizeof(c));
printf("Size of an int: %d byte(s)\n", sizeof(a));
printf("Size of a long int: %d byte(s)\n", sizeof(l));
printf("Size of a long long int: %d byte(s)\n", sizeof(ll));
printf("Size of a float: %d byte(s)\n", sizeof(f));
return (0);
}

