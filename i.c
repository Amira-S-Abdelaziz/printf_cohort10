#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
*iord - function
*@a: var
*Return: value
*/
int iord(long int a)
{
	int sz = 0, i = 0, flag = 0;
	char *s;
	long int a2 = a;

	if (a2 < 0)
		flag = 1;
	do {
		sz++;
		a = a / 10;
	} while (a != 0);
	s = (char *) malloc(sizeof(char) * (sz + flag));
	do {
		*(s + i) = (a2 % 10) + '0';
		i++;
		a2 = a2 / 10;
	} while (a2 != 0);
	if (flag == 1)
	{
	*(s + i) = '-';
	i++;
	}
	i--;
	while (i != -1)
	{
		_putchar(*(s + i));
		i--;
	}
	return (sz + flag);
}
