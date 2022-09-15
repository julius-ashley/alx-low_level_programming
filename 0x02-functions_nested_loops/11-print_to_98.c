/*
 * This program prints all natural numbers
 *  from n to 98, followed by a new line
 */
#include <stdio.h>
#include "main.h"
/**
* print_to_98-prints the integer from
* n value to 98
* @n: parameter is an int
* Return: void
*/
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 98)
				printf("%d, ", i);

			else
				printf("%d\n", i);
		}

	}

	else if (n > 98)
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	}

}
