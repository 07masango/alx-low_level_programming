#include "main.h"

/**
 * _isalpha - Looks for alpha char
 * @c: Char to be looked for
 * Return: 1 for alphabetic char or for anyting else
 */

int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
