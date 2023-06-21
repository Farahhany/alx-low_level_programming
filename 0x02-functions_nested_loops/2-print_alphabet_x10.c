#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets a - z
 * using _putchar function 10 times
 *
*/
void print_alphabet_x10(void)
{
	int ch, line;

	for (line = 0 ; line <= 9 ; line++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
