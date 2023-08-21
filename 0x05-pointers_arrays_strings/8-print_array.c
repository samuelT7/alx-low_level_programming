#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers
 * @a: array of int
 * n: number of elements of the array
 * Return: int
 */
void print_array(int *a, int n)
{
	int h;

	for (h = 0; h < n; h++)
	{
	printf("%d", a[h]);
	if (h != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
