#include "main.h"

/**
 * _abs - computes the absolute value of an intege.
 * @c: the number to be computed
 * Return: Absolute value of number or zero
 */

int _abs(int c)
{
if (c < 0)
{
int abs;
abs = c * -1;
return (abs);
}
return (c);
}
