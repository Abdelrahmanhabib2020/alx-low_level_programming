#include "main.h"
/**
 * _strchr - locat a characters in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrences of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
