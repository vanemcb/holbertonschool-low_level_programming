#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct identifier - Struct identifier
 *
 * @id_print_string: identifier to type data
 * @print_function: the function associated to print
 */
typedef struct identifier
{
	char *id_string;
	void (*print_function)(va_list);
} id;

void p_char(va_list input_text);
void p_int(va_list input_text);
void p_float(va_list input_text);
void p_string(va_list input_text);

#endif
