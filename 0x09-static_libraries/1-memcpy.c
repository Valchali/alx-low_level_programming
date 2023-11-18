#include "main.h"

/**
 * _memcpy - copies a specified number of bytes from one memory area to another
 * @dest: destination memory where data is copied
 * @src: source memory from which data is copied
 * @n: number of bytes to copy
 *
 * Return: a pointer to the destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
