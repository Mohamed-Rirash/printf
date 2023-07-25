#include "main.h"

/**
 * print_octal - Prints octal representation of an unsigned int
 * @pa: Points to the list of arguments
 * @pCount: Pointer to counter
 * Return: Number of characters printed
 */
int print_octal(va_list pa, int *pCount)
{
unsigned int num = va_arg(pa, unsigned int);
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
buffer[i] = (num % 8) + '0';
num /= 8;
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
