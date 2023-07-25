#include "main.h"

/**
 * print_hex - Prints hexadecimal representation of
 * an long int
 * @num: num we want to covert
 * @pCount: Pointer to counter
 * Return:0
 */
int print_hex(unsigned long int num, int *pCount)
{
	char buffer[32];
	int i;

	i = 0;
	if (num == 0)
	{
		_putchar('0');
		(*pCount)++;
		return (1);
	}

	while (num > 0)
	{
		buffer[i] = (num % 16) + (num % 16 > 9 ? 'a' - 10 : '0');
		num /= 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(buffer[i]);
		i--;
		(*pCount)++;
	}
	return (0);
}

/**
 * print_addr - fun that print the addresse
 * @pa: Points to the list of arguments
 * @pCount: Pointer to counter
 * Return: i if point to nothing, 0 otherwise
 */
int print_addr(va_list pa, int *pCount)
{
	void *addr = va_arg(pa, void *);
	char *str = "(nil)";
	long int num;

	if (addr == NULL)
	{
		_putstr(str, _strlen(str));
		*pCount += _strlen(str);
		return (1);
	}

	_putchar('0');
	_putchar('x');
	*pCount += 2;
	num = (unsigned long int)addr;

	print_hex(num, pCount);

	return (0);
}
