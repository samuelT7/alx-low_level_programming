#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A c program that prints possible different combinations of 3 digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, t, z;

	for (n = '0'; n < '9'; n++)
	{
	for (t = n + 1; t <= '9'; t++)
	{
	for (z = t + 1; z <= '9'; z++)
	{
	if ((t != n) != z)
	{
	putchar(n);
	putchar(t);
	putchar(z);
	if (n == '7' && t == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
