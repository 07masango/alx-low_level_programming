#include "main.h"

/**
 * print_alphabet_x10 - Create an alphabet x10 times
 *
 * Return: void (success)
 */

void print_alphabet_x10(void)
{

char ch;
int i;
i = 0;
while (1 < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}


}
