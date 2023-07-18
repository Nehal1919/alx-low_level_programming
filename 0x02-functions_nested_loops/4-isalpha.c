#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 *@c: the char must be checked
 *Return:1 if c is a letter, lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
return (0);
}
