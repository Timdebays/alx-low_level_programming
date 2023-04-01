#include "main.h"

/**
 * string_toupper - convert lower alphabetic string to uppercase
 *@ar: pointer to an array of strings
 *Return: The uppercase of the strings in ar
 */

char *string_toupper(char *ar)

{
	int i;

	for (i = 0; ar[i] != '\0'; i++)
	{
	if (ar[i] >= 'a' && ar[i] <= 'z')
	{
	ar[i] = ar[i] - 32;
	}
	}
	return (ar);
}
