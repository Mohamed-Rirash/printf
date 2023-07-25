#include "main.h"

/**
*print_upperhex - prints hexadecimal numbers in upper case
*@pa: points to the list of arguments
*@pCount: pointer to counter
*Return: count of characters printed
*/
int print_upperhex(va_list pa, int *pCount)
{
unsigned int num = va_arg(pa, unsigned int);
char buffer[32];
int i;
int count = 0;
char hex_digits[] = "0123456789ABCDEF";
i = 0;
if (num == 0)
{
_putchar('0');
(*pCount)++;
return (1);
}

while (num > 0)
{
buffer[i] = hex_digits[num % 16];
num /= 16;
i++;
}

i--;
while (i >= 0)
{
_putchar(buffer[i]);
i--;
(*pCount)++;
count++;
}
return (0);
}

