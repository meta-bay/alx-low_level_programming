#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: types
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *seper = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", seper, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", seper, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", seper, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", seper, str);
					break;
				default:
					i++;
					continue;
			}
			seper = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
