#include "main.h"
/**
 * _abs - A c function that computes absolute value of an int
 * @c: integer to be computed.
 * Return: Absolute value of number or zero
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
