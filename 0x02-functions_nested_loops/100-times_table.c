#include "main.h"
/**
 * print_times_table - a c function that prints time table of the input from 0
 * @n: tha value of the time tabel to be printed
 */
void print_times_table(int n)
{
	int num, m, p;

	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
	for (m = 0; m <= n; m++)
	{
	p = m * num;
	if (p == 0)
	{
	_putchar(p + '0');
	}
	else if (num< 10 && m != 0)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar('num + '0'');
	}
	else if (num >= 10 && num < 100)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar((num / 10) + '0');
	_putchar((num % 10) + '0');
	}
	else if (num >= 100)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar((num / 100) + '0');
	_putchar(((num / 10) % 10) + '0');
	_putchar((num % 10) + '0')
	}
	}
	_putchar('\n');
	}
	}
}
