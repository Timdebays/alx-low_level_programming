#include "main.h"

/**
 * cap_string - Capitalize each word in the array pointer
 *@ary: pointer to an array of strings
 *Return: The capitalized words in the array pointer
 */

char *cap_string(char *ary)

{
	int i;

	for (i = 0; ary[i]; i++)
	{
	if (i == 0)
	{
		if (ary[i] >= 'a' && ary[i] <= 'z')
		{
		ary[i] = ary[i] - 32;
		}
	}
	else if (ary[i - 1] == ' ')
	{
		if (ary[i] >= 'a' && ary[i] <= 'z')
		{
		ary[i] = ary[i] - 32;
		}
	}
	else
	{
		continue;
	}
	}
	return (ary);
}
