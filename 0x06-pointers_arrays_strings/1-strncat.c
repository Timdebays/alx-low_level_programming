#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenate n charact(s) of string src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The n chacter(s) of src
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	len = strlen(dest);

	for (i = 0; i <= n; i++)
	{
	dest[len + i] = src[i];
	}
	return (dest);
}
