#include "main.h"

/**
 * print_sign - Prints sign of a number
 * *@u: Number to be checked
 * Return: 1 positive number, -1 negative numbers 0 for anything else
 */

int print_sign(int u)
{
	if (u > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (u < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
