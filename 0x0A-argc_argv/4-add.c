#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int sum = 0, i, j;
/* Check if the program received any arguments */
if (argc < 2)
{
printf("0\n");
return (0);  /* Return 0 for successful execution */
}
/* Loop through each argument starting from the second one */
for (i = 1; i < argc; i++)
{
 /* Check if the argument contains non-digit characters */
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);  /* Return 1 to indicate an error */
}
}

/* Add the number to the sum */
sum += atoi(argv[i]);
}

/* Print the sum followed by a new line */
printf("%d\n", sum);

/* Return 0 to indicate successful execution */
return (0);
}
