#include "main.h"

/**
 * _strpbrk - search a string for any of a set of byte.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the bytes in  that matche one of the
 * byte in accept, or NULL if no such bytes is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
