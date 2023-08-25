#include "main.h"
/**
 * string_toupper - a function that changes lowercase letters to uppercase
 * @s: string to change
 * Return: string
 */
char *string_toupper(char *s)
{
	int x = 0;

	while (s[x])
	{
	if (s[x] >= 'a' && s[x] <= 'z')
	s[x] -= 32;
	x++;
	}
	return (s);
}
