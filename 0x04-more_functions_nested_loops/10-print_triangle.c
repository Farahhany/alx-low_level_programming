#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line.
 *
 * @size: size of triangle
 *
 * Return: always 0
*/

void print_triangle(int size)
{
	int h, b;

	if (size <= o)
		_putchar('\n');
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (b = 1; b <= size; b++)
			{
				if ((h + b) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
