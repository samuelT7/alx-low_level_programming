#include "main.h"

/**
 * print_alphabet - A c function that prints the alphabet, in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);

	_putchar('\n');
}

