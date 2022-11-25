#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*s - function
*@a: var
*Return: value
*/
int s(char *a)
{
	int i = 0;
	char nl[] = "(null)";

	if (a == (char *)0)
	{
		while (*(nl + i) != '\0')
		{
			_putchar(*(nl + i));
			i++;
		}
	}
	while (*(a + i) != '\0')
	{
		_putchar(*(a + i));
		i++;
	}
	return (i);
}
