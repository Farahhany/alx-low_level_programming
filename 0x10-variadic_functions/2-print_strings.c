#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: char
 * @n: int
 * @...:
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list a;
	char *s;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(a, n);
	while (i--)
		printf("%s%s", (s = va_arg(a, char *)) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(a);
