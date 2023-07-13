#include <stdio.h>
/**
* main - started
* Description: C program that prints the size of various types on the computer it is compiled and run on
* Return: 0 (success)
*/
int main(void)
{
char c;
int a;
long int l;
long long int ll;
float f;
printf("The size of a char %d\n", sizeof(c));
printf("The size of an int %d\n", sizeof(a));
printf("The size of a long int %d\n", sizeof(l));
printf("The size of a long long int %d\n", sizeof(ll));
printf("The size of a float %d\n", sizeof(f));
return (0);
}

