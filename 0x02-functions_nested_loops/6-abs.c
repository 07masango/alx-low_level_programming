#include "main.h"

/**
 * _abs - Has the value of int
 * @c: The num to be figured
 * Return: Absolute value of num or 0
 */

int _abs(int c)

{

if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}
