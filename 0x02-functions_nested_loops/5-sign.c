/*This program prints the sign of a number */
#include <unistd.h>
#include "main.h"
#include <ctype.h>
/**
 * * print_sign- print a single character
 * * to the screen or stdout
 * * @n: takes a character argument
 * * Return: the character
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
