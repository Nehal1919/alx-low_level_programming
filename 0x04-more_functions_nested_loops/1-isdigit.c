#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: the char to be checked
 * Return: 1 if itis a digit character or 0 other wise
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
