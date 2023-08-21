#include "main.h"
#include <stdio.h>
/**
 * rev_string - a function that reverses a string
 * @s: strng to modify
 * Return: string
 */
void rev_string(char *s)
{
	int str = 0, x = 0;
	char p;

	while (s[x++])
	{
	str++;
	}

	for (x = str - 1; x >= str / 2; x--)
	{
	p = s[x];
	s[x] = s[str - x - 1];
	s[str - x - 1] = p;
	}
}
