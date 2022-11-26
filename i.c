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
	int sz = 0;

	do {
		_putchar(a % 10 + '0');
		sz++;
		a = a / 10;
	} while (a != 0);
	return (sz);
}
