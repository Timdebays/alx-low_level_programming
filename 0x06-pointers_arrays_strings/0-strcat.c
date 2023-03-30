#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcat - To concatenate two strings
 * @dest: The destination string
 * @src: The source string
 * Return:The appended dest string
 */

char *_strcat(char *dest, char *src)

{
	int i;
	int len1;
	int len2;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
	{
	dest[len1 + i] = src[i];
	}
	return (dest);
}
