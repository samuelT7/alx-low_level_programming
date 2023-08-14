#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A c program that prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sc;
	int n;

	for (n = '0'; n <= '9'; n++)
	putchar(n);

	for (sc = 'a'; sc <= 'f'; sc++)
	putchar(sc);
	putchar('\n');

	return (0);
}
