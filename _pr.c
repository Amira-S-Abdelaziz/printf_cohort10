#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
*_printf - function
*@format: var
*Return: value
*/
int _printf(const char *format, ...)
{
	unsigned int len = 0;
	unsigned int i = 0;
	va_list arguat;
	unsigned int formsize = 0;
	char *po;

	va_start(arguat, format);
	po = arguat;
	if (!po)
		return (-1);
	while (*(po + formsize) != '\0')
	{
		if (*(po + formsize) == '%' &&
				(*(po + formsize + 1) == 's' || *(po + formsize + 1) == 'c'))
		{
			va_arg(arguat, char);
			while (*(arguat + i) != '\0')
			{
				_putchar(*(arguat + i));
				i++;
			}
			len += i;
			i = 0;
			formsize++;
		}
		else
		{
			_putchar(*(po + formsize));
			len++;
		}
		formsize++;
	}
	return (len);
}
