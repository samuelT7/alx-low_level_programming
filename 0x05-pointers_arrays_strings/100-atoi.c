#include "main.h"
#include <stdio.h>
/**
 * _atoi -  a function that convert a string to an integer
 * @s: pointer to be converted
 * Return: int
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ui = 0;
	int m = 1;
	int is = 0;

	while (s[c])
	{
	if (s[c] == 45)
	{
	m *= -1;
	}
	while (s[c] >= 48 && s[c] <= 57)
	{
	is = 1;
	ui = (ui * 10) + (s[c] - '0');
	c++;
	}
	if (is == 1)
	{
	break;
	}
	c++;
	}
	ui *= m;
	return (ui);
}
