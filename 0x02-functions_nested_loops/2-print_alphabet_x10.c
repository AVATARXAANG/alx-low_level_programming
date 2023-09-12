#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char al;
int n;
n = 0;
while (n < 10)
{
for (al = 'a'; al <= 'z'; al++)
{
_putchar(al);
}
_putchar('\n');
n++;
}
}
