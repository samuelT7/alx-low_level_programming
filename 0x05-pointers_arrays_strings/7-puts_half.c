#include "main.h"
#include <stdio.h>
/**
 * puts_half - a function that prints half of a string
 * @str: string to print
 * Return: string
 */
void puts_half(char *str)
{
	int a = 0;
	int m;

	while (str[a] != '\0')
	{
	a++;
	}
	if (a % 2 == 1)
	{
	m = (a - 1) / 2;
	m += 1;
	}
	else
	{
	m = a / 2;
	}

	for (; m < a; m++)
	{
	_putchar(str[m]);
	}
	_putchar('\n');
}
