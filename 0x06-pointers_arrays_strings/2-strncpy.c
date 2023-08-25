#include "main.h"
#include <stdio.h>
/**
 * _strncpy - a function that copies a string
 * @dest: string to be copied
 * @src: source string
 * @n: max number of bytes
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, slen = 0;

	while (src[x++])
	{
	slen++;
	}

	for (x = 0; src[x] && x < n; x++)
	{
	dest[x] = src[x];
	}

	for (x = slen; x < n; x++)
	{
	dest[x] = '\0';
	}

	return (dest);
}
