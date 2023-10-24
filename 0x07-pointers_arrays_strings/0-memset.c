#include "main.h"
/**
 * _memset - fill memorys with a constant bytes.
 * @s: memory area
 * @b: constant bytes.
 * @n: byte filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
