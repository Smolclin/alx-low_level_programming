#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: arguement specifier
 * Return: any arguement passed
 */

void print_all(const char * const format, ...)
{
	int i, checker;

	char *str;
	va_list spr;

	va_start(spr, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(spr, int));
				checker = 0;
				break;
			case 'f':
				printf("%d", va_arg(spr, int));
				checker = 0;
				break;
			case 'c':
				printf("%c", va_arg(spr, int));
				checker = 0;
				break;
			case 's':
				str = va_arg(spr, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				checker = 1;
				break;
		}
		if (format[i + 1] != '\0' && checker == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(spr);
}
