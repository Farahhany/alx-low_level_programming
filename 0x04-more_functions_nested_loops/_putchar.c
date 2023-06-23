#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stduot
 *
 *@c: The character to print
 *
 * Return: on success 1 and on error -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
