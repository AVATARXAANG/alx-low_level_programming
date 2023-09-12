#include "main.h"

/**
 * _abs - get abolute value of an integer
 * @c : number to be computed.
 * Return: Absolute value
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
