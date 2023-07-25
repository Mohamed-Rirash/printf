#include "main.h"

/**
*print_rev - fun that reverse str
*@pa: points to the list of arguments
*@pCount: pointer to counter
*Return: 1
*/
int print_rev(va_list pa, int *pCount)
{
	int i;
	char *str = va_arg(pa, char *);

	if (str == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = _strlen(str) - 1; i >= 0; i--)
		{
			_putchar(str[i]);
			*pCount += 1;
		}
	}
	return (0);
}
