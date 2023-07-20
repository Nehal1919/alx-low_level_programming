#include "main.h"

/**
 * _isupper - checks for lowarcase char
 * @c: the character to br checked
 * Return: 1 for the upercase or 0 otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
