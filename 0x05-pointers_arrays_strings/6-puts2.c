#include "main.h"
#include <stdio.h>
/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character
 * @str: string to treat
 * Return: string
 */
void puts2(char *str)
{
	int a;
	int b = 0;

	while (str[b] != '\0')
	{
	b++;
	}

	for (a = 0; a < b; a += 2)
	{
	_putchar(str[a]);
	}
	_putchar('\n');
}
