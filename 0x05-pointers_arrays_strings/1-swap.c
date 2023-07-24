#include "main.h"

/**
 * swap_int - funcation that swap 2 intgers
 * @a: input int
 * @b: the second intger
 * Return: void
 */

void swap_int(int *a, int *b)
{
int t = 0;
t = *a;
*a = *b;
*b = t;
}
