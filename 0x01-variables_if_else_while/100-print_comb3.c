#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A c program that prints possible different combinations of 2 digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, t;

	for (n = '0'; n < '9'; n++)
	{
	for (t = n + 1; t <= '9'; t++)
	{
	if (t != n)
	{
	putchar(n);
	putchar(t);
	if (n == '8' && t == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
