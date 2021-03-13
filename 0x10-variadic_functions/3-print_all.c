#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list input_args;
	int i1 = 0, i2 = 0;
	char *space = "";

	id print_selec[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
		{NULL, NULL}
	};

	va_start(input_args, format);

	while (format != NULL && format[i1] != '\0')
	{
		while (print_selec[i2].id_string != NULL)
		{
			if (print_selec[i2].id_string[0] == format[i1])
			{
				printf("%s", space);
				print_selec[i2].print_function(input_args);
				space = ", ";
			}
			i2++;
		}
		i2 = 0;
		i1++;
	}
	va_end(input_args);
	printf("\n");
}

/**
 * p_char - function that prints a character
 * @input_text: input text
 */
void p_char(va_list input_text)
{
	printf("%c", va_arg(input_text, int));
}

/**
 * p_int - function that prints an integer
 * @input_text: input text
 */
void p_int(va_list input_text)
{
	printf("%d", va_arg(input_text, int));
}

/**
 * p_float - function that prints a float
 * @input_text: input text
 */
void p_float(va_list input_text)
{
	printf("%f", va_arg(input_text, double));
}

/**
 * p_string - function that prints a string
 * @input_text: input text
 */
void p_string(va_list input_text)
{
	char *str = va_arg(input_text, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
