#include "main.h"

/**
 * *_strcpy - copie the string point to by src
 * including the terminat null bytes (\0)
 * to the buffer point to by dest
 * @dest: point to the buffer in which we copy the string
 * @src: string to be copie
 *
 * Return: the point to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
