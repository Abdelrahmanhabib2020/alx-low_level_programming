#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * 		using tow input prameter
 * @a: input prameter 1
 * @b: input prameter 2
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
