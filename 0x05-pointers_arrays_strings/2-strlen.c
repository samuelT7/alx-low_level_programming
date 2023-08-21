#include "main.h"
#include <stdio.h>
/**
 * _strlen -  a function that returns the length of a string
 * @s: string to get the length
 * Return:length of str
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	return (length);
}
