#include <stdio.h>

/**
 *_strlen - To know the length of string
 *@str : the str whose length is to be gotten
 *Return :the length of the @str
 */

size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
