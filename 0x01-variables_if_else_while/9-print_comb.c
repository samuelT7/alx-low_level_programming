#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A c program that prints all possible combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
	if (n != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
