#include "main.h"

/**
 * _islower - check if charachter is lowercase
 *
 * @c: check inputs function
 *
 * Return: return 1 if 'c' lowercase
 * other with 0 (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 127)
		return (1);
	return (0);
}
