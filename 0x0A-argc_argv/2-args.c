#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;

/* Loop through each argument and print it */
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
/* Return 0 to indicate successful execution */
return (0);
}
