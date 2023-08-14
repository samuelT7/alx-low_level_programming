#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A c program that prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sc, e, q;

	e = 'e';
	q = 'q';

	for (sc = 'a'; sc <= 'z'; sc++)
	{
	if (sc != e && sc != q)
	putchar(sc);
	}
	putchar('\n');
	return (0);
}
