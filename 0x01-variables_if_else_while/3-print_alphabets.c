#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A C program that prints alphabetic small and capital letters
 * Return: Always (Success)
 */
int main(void)
{
	char sc;

	for (sc = 'a'; sc <= 'z'; sc++)
	putchar(sc);

	for (sc = 'A'; sc <= 'Z'; sc++)
	putchar(sc);
	putchar('\n');

	return (0);
}
