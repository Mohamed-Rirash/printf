#include "main.h"
/**
*_printf - fun that do same as printf
*@format: the string format
*Return: num of charchter printed
*/
int _printf(const char *format, ...)
{
	va_list pa; /* points to the arguments list */
	int i, count = 0;
	int *pCount = &count;
	spChar type[] = {
		{'s', print_str}, {'c', print_ch}, {'d', print_int},
		{'i', print_int}, {'b', print_bi}, {'r', print_rev},
		{'u', print_unsigned}, {'o', print_octal}, {'S', print_nonch},
		{'x', print_lowerhex}, {'X', print_upperhex}, {'R', print_rot13},
		{'p', print_addr}, {'\0', NULL}};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(pa, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]); /* print the char */
			*pCount += 1;
		}
		else if (format[i] == '%' && format[i + 1] != '%')
		{
			i++;/* get the char after the % */
			call_sp(format, &i, type, pCount, pa);

		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			i++;
			_putchar(format[i]);
			*pCount += 1;
		}
	}
	va_end(pa);
	return (count);
}
