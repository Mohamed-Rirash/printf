#include "main.h"
/**
*print_str - fun that print str
*@pa: points to the list of arguments
*@pCount: pointer to counter
*Return: 1 if no error , -1 otherwise
*/
int print_str(va_list pa, int *pCount)
{
	char *str;

	str = va_arg(pa, char *);
	if (str == NULL)
		str = "(null)";

	if (_putstr(str, _strlen(str)) != -1)
		*pCount += _strlen(str);
	else
		return (-1);

	return (1);
}

/**
*print_ch - fun that print char
*@pa: points to the list of arguments
*@pCount: pointer to counter
*Return: 1 if sucess , -1 otherwise
*/
int print_ch(va_list pa, int *pCount)
{
	if (_putchar((unsigned char)va_arg(pa, int)) != -1)
		*pCount += 1;
	else
		return (-1);

	return (1);
}
