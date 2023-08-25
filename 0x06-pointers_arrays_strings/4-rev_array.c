#include "main.h"
#include <stdio.h>
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 * Return: Success
 */
void reverse_array(int *a, int n)
{
	int r, x;

	for (x = n - 1; x >= n / 2; x--)
	{
	r = a[n - 1 - x];
	a[n - 1 - x] = a[x];
	a[x] = r;
	}
}
