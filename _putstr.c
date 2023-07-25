#include "main.h"
/**
*_putstr - fun that print str
*@str: pointer to the str we want to print
*@len: lenth of the str
*Return: -1 if error, 1 otherwise
*/
int _putstr(char *str, int len)
{
	return (write(1, str, len));
}
