#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A c  program that prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sc;

	for (sc = 'z'; sc >= 'a'; sc--)
	putchar(sc);
	putchar('\n');

	return (0);
}
