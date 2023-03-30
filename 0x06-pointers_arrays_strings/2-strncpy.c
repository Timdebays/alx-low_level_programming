#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - Copy  n character(s) of a source string to a destination string
 * @dest: The buffer storing the copy
 * @src: the source string
 * @n: The pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';

	return (dest);
}
