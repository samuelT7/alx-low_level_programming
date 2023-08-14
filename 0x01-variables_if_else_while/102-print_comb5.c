#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A c program that prints possible combinations of 2 2-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t, z;

	for (t = 0; t <= 98; t++)
	{
	for (z = t + 1; z <= 99; z++)
	{
	putchar((t / 10) + '0');
	putchar((t % 10) + '0');
	putchar(' ');
	putchar((z / 10) + '0');
	putchar((z % 10) + '0');
	if (t == 98 && z == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
