#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: string to be appended upon
 * @src: string to appended to dest
 * @n: bumber of bytes
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, dlen =  0;

	while (dest[x++])
	{
	dlen++;
	}
	for (x = 0; src[x] && x < n; x++)
	{
	dest[dlen++] = src[x++];
	}
	return (dest);
}
