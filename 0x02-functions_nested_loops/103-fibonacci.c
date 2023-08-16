#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	long b = 1; g = 2; sum = g;

	while (g + b < 4000000)
	{
	g += b;
	if (g % 2 == 0)
	sum += g;
	b = g - b;
	++n;
	}
	printf("%ld\n", sum);
	return (0);
}
