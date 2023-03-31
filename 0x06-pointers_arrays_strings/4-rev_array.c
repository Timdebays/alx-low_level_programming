#include "main.h"


/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The arrays of integers to be reversed
 * @n: The number of elements in the array
 */

void reverse_array(int *a, int n)

{
	int i;
	int j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
	int tmp = a[i];

	a[i] = a[j];
	a[j] = tmp;
	}
}
