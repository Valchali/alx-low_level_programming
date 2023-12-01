#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
unsigned int index;
const char *current_string;

va_start(strings, n);

for (index = 0; index < n; index++)
{
current_string = va_arg(strings, const char *);

if (current_string == NULL)
printf("(nil)");
else
printf("%s", current_string);

if (index != n - 1 && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(strings);
}
