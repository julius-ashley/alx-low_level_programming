/* This program only prints half of an array */
#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of the array
 * @str: pointer to a char
 */
void puts_half(char *str)
{
	int len, i, j, new_len;

	len = 0;
	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	if (len % 2 == 0)
		new_len = len / 2;
	else
		new_len = (len - 1) / 2;
	while (j < new_len - 1)
		{
			str++;
			j++;
		}
	while (new_len < len)
	{
		_putchar(*str + '0');
		str++;
		new_len++;
	}
	_putchar('\n');
}
