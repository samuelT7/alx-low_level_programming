#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @sn: string to replace
 * Return: int
 */
char *leet(char *sn)
{
	int s, n;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (s = 0; sn[s] != '\0'; s++)
	{
	for (n = 0; n < 10; n++)
	{
	if (sn[s] == s1[n])
	{
	sn[s] = s2[n];
	}
	}
	}
	return (sn);
}
