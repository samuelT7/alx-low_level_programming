#include "main.h"
/**
 * _isalpha - A function that checks alphabetic character
 * @c: The character to be checked
 * Return: 1 for alphabetic or 0 for other character
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
