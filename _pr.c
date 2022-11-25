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

	va_start(arguat, format);
	if (format == NULL)
		return (-1);
	while (*(format + formsize) != '\0')
	{
		if (*(format + formsize) == '%' &&
				(*(format + formsize + 1) == 's' || *(format + formsize + 1) == 'c'))
		{
			if (*(format + formsize + 1) == 'c')
			{
<<<<<<< HEAD
				c(va_arg(arguat, int), i++;
			}
			else
			{
				i = s(va_arg(arguat, char *));
=======
				tempc = va_arg(arguat, int);
				_putchar((char)tempc);
				i++;
			}
			else
			{
			strcpy(temp, va_arg(arguat, char*));
			while (*(temp + i) != '\0')
			{
				_putchar(*(temp + i));
				i++;
			}
>>>>>>> afac56125047f44d364a8ec3652d035c54faa3f5
			}
			len += i;
			i = 0;
			formsize++;
		}
		else if (*(format + formsize) == '%' && *(format + formsize + 1) == '%')
		{
			_putchar(*(format + formsize)), len++, formsize++;
		}
		else if (*(format + formsize) == '%')
		{
		formsize++, continue;
		}
		else
		{
<<<<<<< HEAD
		_putchar(*(format + formsize)), len++;
=======
			_putchar(*(format + formsize));
			len++;
>>>>>>> afac56125047f44d364a8ec3652d035c54faa3f5
		}
		formsize++;
	}
	return (len);
}
