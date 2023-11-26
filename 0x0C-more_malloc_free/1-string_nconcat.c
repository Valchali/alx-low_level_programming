#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: a pointer to the newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null-terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2, then use the entire string s2
 * If NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concatenated;
unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

/* Check if s1 is NULL, treat it as an empty string */
if (s1 == NULL)
s1 = "";

/* Check if s2 is NULL, treat it as an empty string */
if (s2 == NULL)
s2 = "";

/* Calculate the length of s1 */
while (s1[len1] != '\0')
len1++;

/* Calculate the length of s2 */
while (s2[len2] != '\0')
len2++;

/* Allocate memory for the concatenated string */
concatenated = malloc(sizeof(char) * (len1 + n + 1));

/* Check if malloc was successful */
if (concatenated == NULL)
return (NULL);

/* Copy characters from s1 to concatenated */
for (i = 0; i < len1; i++)
concatenated[i] = s1[i];

/* Copy up to n characters from s2 to concatenated */
for (j = 0; j < n && s2[j] != '\0'; j++)
concatenated[i + j] = s2[j];

/* Null-terminate the concatenated string */
concatenated[i + j] = '\0';

return (concatenated);
}
