#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A c program that prints all single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sd;

	for (sd = '0'; sd <= '9'; sd++)
	putchar(sd);
	putchar('\n');

	return (0);
}
