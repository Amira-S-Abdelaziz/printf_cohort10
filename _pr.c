#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"
/**
*_printf - function
*@format: var
*Return: value
*/
int _printf(const char *format, ...)
{
	unsigned int len = 0, i = 0, formsize = 0;
	va_list arguat;
	int tempc;
	char temp[100000] = "\0";
	char *n = (char *)0;

	va_start(arguat, format);
	if (format[0] == '\0')
		return (-1);
	while (*(format + formsize) != '\0')
	{
		if (*(format + formsize) == '%' &&
				(*(format + formsize + 1) == 's' || *(format + formsize + 1) == 'c'))
		{
			if (*(format + formsize + 1) == 'c')
			{
				tempc = va_arg(arguat, int), _putchar((char)tempc);
				i++;
			}
			else
			{
				if (va_arg(arguat, char *) == NULL)
					while (*(n + i) != '\0' && i++)
					_putchar(*(n + i));
				else
				{
					strcpy(temp, arguat);
					while (*(temp + i) != '\0' && i++)
					_putchar(*(temp + i));
				}
			}
			len += i, i = 0, formsize++;
		}
		else
		{
			_putchar(*(format + formsize)), len++;
		}
		formsize++;
	}
	return (len);
}
