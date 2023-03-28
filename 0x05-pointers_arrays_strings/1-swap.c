#include "main.h"

/**
 * swap_int - swap two integers
 * @a : the first integer for swapping
 * @b : the second integer for swapping
 * Return: 0
 */

void swap_int(int *a, int *b)

{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
