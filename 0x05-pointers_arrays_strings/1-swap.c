#include "main.h"
#include <stdio.h>
/**
 * swap_int - a function that swaps the values of two tntegers
 * @a: the first int to swap
 * @b: the second int to swap
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
