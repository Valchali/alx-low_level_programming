#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string to the standard output, followed by a new line
 * @str: The string to be printed
 */
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}

_putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
_puts("\"Programming is like building a multilingual puzzle");
return (0);
}
