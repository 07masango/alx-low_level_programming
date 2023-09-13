#include "main.h"

/**
 * print_alphabat - Create a line of alphabats
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
_pitchar(ch);
_putchar('\n');
}
