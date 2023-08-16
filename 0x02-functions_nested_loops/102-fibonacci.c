#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	long b = 1, g = 2;

	while (n < 50)
	{
	if (n == 0)
	printf("%ld", b);
	else if (n == 1)
	printf(", %ld", g);
	else
	{
	g += b;
	b = g - b;
	printf(", %ld", g);
	}
	n++;
	}
	printf("\n");
	return (0);
}
