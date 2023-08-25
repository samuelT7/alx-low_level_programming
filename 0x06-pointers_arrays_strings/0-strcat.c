#include "main.h"
#include <stdio.h>
/**
 * _strcat -  a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int dln = 0, j;

	while (dest[dln])
	{
	dln++;
	}

	for (j = 0; src[j] != 0; j++)
	{
	dest[dln] = src[j];
	dln++;
	}

	dest[dln] = '\0';
	return (dest);
}
