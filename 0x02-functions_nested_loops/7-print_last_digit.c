#include "main.h"

/**
 * print_last_digit - Prints the latter digit of a num
 * @n: The num to be checked
 * Return: Value of the last digit of num
 */

int print_last_digit(int n)

{

int last;

last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
