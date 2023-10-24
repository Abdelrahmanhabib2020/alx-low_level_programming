#include "main.h"
/**
 * _memcpy - copie memory area,
 * @dest: destinat memory area.
 * @src: sources memory area.
 * @n: byte filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
