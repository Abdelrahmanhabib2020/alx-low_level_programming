#include "main.h"
/**
 *_strncat - function that concatenates two strings.
 *
 *@dest: pointer to destination input
 *@src: pointer to source input
 *@n: most number of pytes from @src 
 *
 *Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, j;
/* j is a counter for  n bytes of src to be concatenated */
/* length = length of destination string */

	c  = 0;
	while (dest[c])
	
	     c++;
	
	for (j = 0; j < n && src[j] !='\0'; j++,)
	
		dest[c + j] = src[j];
	
	dest[c + j] = '\0';
	return (dest);
}
