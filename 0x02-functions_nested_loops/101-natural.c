#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, a = 0;

	while (n < 1024)
	{
	if ((n % 3 == 0) || (n % 5 == 0))
	{
	a += n;
	}
	n++;
	}
	printf("%d\n", a);
	return (0);
}
