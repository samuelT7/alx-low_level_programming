#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	unsigned long int b, g, f, sum;

	b = 1;
	g = 2;
	sum = 0;

	for (n = 1; n <= 33; ++n)
	{
	if (b < 4000000 && (b % 2) == 0)
	{
	sum = sum + b;
	}
	f = b + g;
	b = g;
	g = f;
	}
	printf("%lu\n", sum);
	return (0);
}
