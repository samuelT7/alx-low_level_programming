#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: destination
 * @b: constant byte
 * @: bytes
 * Return: 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
	s[j] = b;
	}
	return (s);
}
