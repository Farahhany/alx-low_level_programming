#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: input 1
 * @s2: input 2
 *
 * Return: 1 if true, 0 if not
*/

int _strcmp(char *s1, char *s2)
{
	int e = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			e = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (e);
}
