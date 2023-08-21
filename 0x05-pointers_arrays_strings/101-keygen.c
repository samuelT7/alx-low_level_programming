#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - a program that generates random valid passwords
 * Return: alway 0 (success)
 */
int main(void)
{
	char pw[84];
	int x = 0, sum = 0, dh1, dh2;

	srand(time(0));

	while (sum < 2772)
	{
	pw[x] = 33 + rand() % 94;
	sum += pw[x++];
	}

	pw[x] = '\0';

	if (sum != 2772)
	{
	dh1 = (sum - 2772) / 2;
	dh2 = (sum - 2772) / 2;

	if ((sum - 2772) % 2 != 0)
	dh1++;

	for (x = 0; pw[x]; x++)
	{
	if (pw[x] >= (33 + dh1))
	{
	pw[x] -= dh1;
	
	break;
	}
	}
	for (x = 0; pw[x]; x++)
	{
	if (pw[x] >= (33 + dh2))
	{
	pw[x] -= dh2;
	break;
	}
	}
	}
	printf("%s", pw);
	return (0);
}
